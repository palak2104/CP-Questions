class Solution {
    bool isFeasible(int mid,int m,vector<int>arr){
        int sum=0;
        int count=1;
        int n=arr.size();
        for(int i=0;i<n;i++){
        sum+=arr[i];
            if(sum>mid){
                count++;
                sum=arr[i];
            }
        }
        return (count<=m);
    }
public:
    int splitArray(vector<int>& arr, int m) {
        int maxi=0;
        int sum=0;
        for(auto it:arr){
            maxi=max(maxi,it);
            sum+=it;
        }
        int low=maxi;
        int high=sum;
        while(low<high){
            int mid=(low)+(high-low)/2;
            if(isFeasible(mid,m,arr)){
            high=mid;
            }
            else low=mid+1;
        }
        return low;
    }
};

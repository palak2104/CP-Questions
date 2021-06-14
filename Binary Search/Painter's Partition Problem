// { Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//

class Solution
{
    bool isApropiate(vector<int>&a,int k,long long mid){
    int sum=0,count=1;
    for(auto it:a){
        sum+=it;
        if(sum>mid){
            sum=it;
            count++;
        }
    }
    return (count<=k);
}
    public:
    long long minTime(int arr[], int n, int k)
    {
        // code here
        // return minimum time
        if(n==0)return 0;
        if(k==0)return INT_MIN;
        vector<int>a;
        //cout<<n<<" ";
        int maxe=INT_MIN;
        for(int i=0;i<n;i++){
           // cout<<arr[i]<<" ";
        a.push_back(arr[i]);
        maxe=max(maxe,arr[i]);
        }
    //cout<<maxe<<" ";
    long long sum=0;
    for(auto it:a)
    sum+=it;
    //cout<<sum<<" ";
    long long low=maxe;
    long long high=sum;
    int res=-1;
    while(low<=high){
        long long mid=(low+high)/2;
        if(isApropiate(a,k,mid)){
            res=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return res;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}  // } Driver Code Ends
/******************************Basic One*******************************/
#include <bits/stdc++.h>

using namespace std;
bool isFeasible(int n,int arr[],int k,int mid){
    int count=1;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum>mid){
            sum=arr[i];
            count++;
        }
    }
    return (count<=k);
}
int painter(int n,int arr[],int k){
    int low=*max_element(arr,arr+n);
    int high=0;
    for(int i=0;i<n;i++)
    high+=arr[i];
    int ans=0;
    while(low<=high){
        int mid=(low+high)/2;
        if(isFeasible(n,arr,k,mid)){
        ans=mid;
        high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
}
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  cin>>arr[i];
  int k;
  cin>>k;
  cout<<painter(n,arr,k);

    return 0;
}

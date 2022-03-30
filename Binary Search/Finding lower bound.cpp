#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int low=0;
    int high=n-1;
    int ans;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            ans=mid;
            break;
        }
        else if(arr[mid]<x){
            low=mid+1;
            ans=mid;
        }
        else if(arr[mid]>x){
            high=mid-1;
        }
    }
    cout<<ans;
    return 0;
}

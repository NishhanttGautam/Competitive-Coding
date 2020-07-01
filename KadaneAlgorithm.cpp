#include<bits/stdc++.h>
using namespace std;
int maxSubarraySum(int arr[], int n){
 int max_so_far = arr[0];
   int curr_max = arr[0];
   for (int i=1;i<n;i++)
   {
        curr_max = max(arr[i], curr_max+arr[i]);
        max_so_far = max(max_so_far, curr_max);
   }
   return max_so_far;
}
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<maxSubarraySum(a,n)<<endl;
    }
}

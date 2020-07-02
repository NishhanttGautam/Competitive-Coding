#include<bits/stdc++.h>
using namespace std;
int maxArea(int A[],int len);
long long maxArea(long long  A[],int len){
    int l = 0;
    int r = len -1;
    long long area = 0;
    while (l < r)
    {
        area = max(area, min(A[l],A[r]) * (r - l));
            if (A[l] < A[r])
                l += 1;
            else
                r -= 1;
    }
    return area;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
            int n,d;
            cin>>n;
            long long arr[n];
            for(int i=0;i<n;i++){
                cin>>arr[i];
            }
            cout<<maxArea(arr,n)<<endl;
    }
    return 0;
}

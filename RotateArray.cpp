#include<bits/stdc++.h>
using namespace std;

int rotateArr(int arr[],int d,int n){
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    for(int i=n-d;i<n;i++){
        arr[i]=temp[i-n+d];
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
            int n,d;
            cin>>n>>d;
            int arr[n];
            for(int i=0;i<n;i++){
                cin>>arr[i];
            }
            rotateArr(arr,d,n);
            for(int i=0;i<n;i++){
                    cout<<arr[i]<<" ";
            }
            cout<<endl;
    }
    return 0;
}

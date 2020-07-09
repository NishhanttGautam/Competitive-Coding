#include<bits/stdc++.h>
using namespace std;
int majorityElement(int a[], int size)
{
    if(size==1){
        return a[0];
    }
    sort(a, a+size);
    int sum=1;
    int maxcount=0;
    int index;
    for(int i=0; i<size-1; i++){
        if(a[i]==a[i+1])
             sum+=1;
        else
             sum=1;
        if(maxcount<sum){
             maxcount=sum;
             index=i;
        }
    }
        if(maxcount> size/2)
           return a[index];
        else
           return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<majorityElement(arr,n)<<endl;
}

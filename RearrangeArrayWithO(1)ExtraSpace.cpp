#include<bits/stdc++.h>
using namespace std;
void arrange(long long arr[], int n)
{
    for (int i=0; i < n; i++)
        arr[i] += (arr[arr[i]]%n)*n;
    for (int i=0; i<n; i++)
        arr[i] /= n;
}
int main(){
    int n;
    cin>>n;
    long long A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    arrange(A,n);
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

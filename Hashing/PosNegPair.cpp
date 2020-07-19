#include <bits/stdc++.h>
#include<unordered_map>
#include<math.h>
using namespace std;
vector <int> findPairs(int*, int );
vector <int> findPairs(int arr[], int n)
{
    vector<int> v;
    unordered_map<int, bool> cnt;
    for (int i = 0; i < n; i++) {
        if (cnt[abs(arr[i])] == 0)
            cnt[abs(arr[i])] = 1;
        else {
            v.push_back(-(abs(arr[i])));
            v.push_back(abs(arr[i]));
            cnt[abs(arr[i])] = 0;
        }
    }
    if (v.size() == 0)
        v.push_back(0);
    return v;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<int>res=findPairs(arr,n);
        if(res.size()!=0){
            for(i:res){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int minDist(int arr[], int n, int x, int y);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int x,y;
        cin>>x>>y;
        cout<<minDist(a,n,x,y)<<endl;
    }
}

int minDist(int a[], int n, int x, int y) {
    int recent_x = -1, recent_y = -1;
    int ans = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            recent_x = i;
            if (recent_y != -1) ans = min(abs(recent_x - recent_y), ans);
        } else if (a[i] == y) {
            recent_y = i;
            if (recent_x != -1) ans = min(abs(recent_x - recent_y), ans);
        }
    }
    if (ans == INT_MAX) return -1;
    return ans;
}

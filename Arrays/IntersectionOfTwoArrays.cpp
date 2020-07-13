#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
int NumberofElementsInIntersection (int a[], int b[] , int n, int m);
int NumberofElementsInIntersection (int a[], int b[] , int n, int m)
{
	unordered_set<int> s1;
    int count = 0;
	for(int i=0;i<n;i++)
		s1.insert(a[i]);

	for(int i=0;i<m;i++)
	{
		if(s1.find(b[i]) != s1.end()){
		    s1.erase(b[i]);
		    count++;
		}
	}
	return count;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
            int n,m;
            cin>>n>>m;
            int a[n],b[m];
            for(int i=0;i<n;i++){
                    cin>>a[i];
            }
             for(int i=0;i<m;i++){
                    cin>>b[i];
            }
            cout<<NumberofElementsInIntersection(a,b,n,m)<<endl;
            }
    return 0;
}

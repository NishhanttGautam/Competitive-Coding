#include <bits/stdc++.h>
using namespace std;
vector<int> kLargest(int arr[], int n, int k)
{
    vector<int>v;
    priority_queue<int>max_heap;
    for(int i=0;i<n;i++){
        max_heap.push(arr[i]);
    }
    for(int i=0;i<k;i++){
        v.push_back(max_heap.top());
        max_heap.pop();
    }
    return v;
}
int main()
{
	int arr[] = { 1, 23, 12, 9, 30, 2, 50 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 3;
	vector<int>result=kLargest(arr, n, k);
	for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
	}
}

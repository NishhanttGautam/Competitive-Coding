#include<bits/stdc++.h>
using namespace std;
int kadane(int a[],int n);
int circularSubarraySum(int a[], int n)
{
    bool flag  = false;
    int count =0;int maxx = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        if(a[i] > maxx)
          maxx = a[i];
        if(a[i] < 0)
          count++;
    }
    if(count == n)
      return maxx;
	int max_kadane = kadane(a, n);
	int max_wrap = 0, i;
	for (i = 0; i < n; i++)
	{
			max_wrap += a[i];
			a[i] = -a[i];
	}
	max_wrap = max_wrap + kadane(a, n);
	return (max_wrap > max_kadane)? max_wrap: max_kadane;
}
int kadane(int a[], int n)
{
	int max_so_far = 0, max_ending_here = 0;
	int i;
	for (i = 0; i < n; i++)
	{
		max_ending_here = max_ending_here + a[i];
		if (max_ending_here < 0)
			max_ending_here = 0;
		if (max_so_far < max_ending_here)
			max_so_far = max_ending_here;
	}
	return max_so_far;
}
int main(){
    int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    cout<<circularSubarraySum(arr,num);
}

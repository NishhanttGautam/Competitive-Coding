// C++ program to find the length of largest subarray
// with 0 sum
#include <bits/stdc++.h>
using namespace std;
int maxLen(int A[], int n)
{
    unordered_map<int, int> presum;
    int sum = 0;
    int len = 0;
    for (int i = 0; i < n; i++) {
        sum += A[i];
        if (A[i] == 0 && len == 0)
            len = 1;
        if (sum == 0)
            len = i + 1;
        if (presum.find(sum) != presum.end()) {
            len = max(len, i - presum[sum]);
        }
        else {
            presum[sum] = i;
        }
    }
        return len;
}


// Driver Code
int main()
{
	int arr[] = { 15, -2, 2, -8, 1, 7, 10, 23 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Length of the longest 0 sum subarray is "
		<< maxLen(arr, n);

	return 0;
}


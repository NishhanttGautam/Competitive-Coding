#include<bits/stdc++.h>
using namespace std;
vector<int> largestAndSecondLargest(int, int[]);
vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]){
    int max = INT_MIN, max2= INT_MIN;
    for(int i = 0;i<sizeOfArray;i++){
        if(arr[i] > max){
            max2 = max;
            max = arr[i];
        }
        else if(arr[i] > max2 && arr[i] != max){
            max2 = arr[i];
        }
    }
    if(max2 == INT_MIN){
        max2 = -1;
    }
    vector<int> temp(2);
    temp[0] = max;
    temp[1] = max2;
    return temp;
}
int main()
{
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        int sizeOfArray;
        cin>>sizeOfArray;
        int arr[sizeOfArray];
        for(int index=0;index<sizeOfArray;index++)
        {
            cin>>arr[index];
        }
        vector<int> ans=largestAndSecondLargest(sizeOfArray, arr);
        cout<<ans[0]<<' '<<ans[1]<<endl;
    }
    return 0;
}

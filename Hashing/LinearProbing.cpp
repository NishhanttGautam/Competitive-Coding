#include <bits/stdc++.h>
using namespace std;

vector<int> linearProbing( int hashSize,int arr[],int sizeOfArray);

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int hashSize;
	    cin>>hashSize;


	    int  sizeOfArray;
	    cin>>sizeOfArray;
	    int arr[sizeOfArray];

	    for(int i=0;i<sizeOfArray;i++)
	    cin>>arr[i];

	    vector<int> hash;

	    hash =linearProbing (hashSize, arr, sizeOfArray);

	    for(int i = 0;i < hashSize; i++)
	    cout<<hash[i]<<" ";

	    cout<<endl;

	}
	return 0;
}

// } Driver Code Ends

vector<int> linearProbing(int hashSize,int arr[],int sizeOfArray)
{
    vector<int> hash(hashSize);
    for(int i=0;i<hashSize;i++)
        hash[i]=-1;
    for(int i=0;i<sizeOfArray;i++)
    {
        if(hash[arr[i]%hashSize]==-1)
        {
            hash[arr[i]%hashSize]=arr[i];
        }
        else
        {
            int counter=0;
            int k=(1+arr[i])%hashSize;
            while(counter<hashSize&&hash[k]!=-1)
            {
                 k=(k+1)%hashSize;
                 counter++;
            }
            if(counter<hashSize)
            hash[k]=arr[i];
        }
    }
    return hash;
}

#include <bits/stdc++.h>
using namespace std;

void QuadraticProbing(vector <int> &hash, int hashSize,int arr[],int sizeOfArray);

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

	    vector<int> hash (hashSize);

	    QuadraticProbing (hash, hashSize, arr, sizeOfArray);

	    for(int i = 0;i < hashSize; i++)
	    cout<<hash[i]<<" ";

	    cout<<endl;

	}
	return 0;
}

// } Driver Code Ends



// Insert all the element of array arr[] (size N)
// fill the hash table hash[] (size hashSize)
void QuadraticProbing(vector <int>&hash, int hashSize, int arr[], int N)
{
    for(int i=0;i<hashSize;i++){
        hash[i]=-1;
    }
    for(int i=0;i<N;i++){
        int hv=arr[i]%hashSize;
        if(hash[hv]==-1){
            hash[hv]=arr[i];
        }
        else{
            for(int j=0;j<j<hashSize;j++){
                int t = (hv + j*j) % hashSize;
                    if (hash[t] == -1) {
                        hash[t] = arr[i];
                        break;
                    }
            }
        }
    }
}



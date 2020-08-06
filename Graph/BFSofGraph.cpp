#include <bits/stdc++.h>

using namespace std;

vector <int> bfs(vector<int> g[], int N);

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> N >> E;
        vector<int> adj[N];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }
        vector <int> res = bfs(adj, N);
        for (int i = 0; i < res.size (); i++) cout << res[i] << " ";
        cout << endl;
    }
}// } Driver Code Ends


/* You have to complete this function*/

/* Function to do BFS of graph
*  g[]: adj list of the graph
*  N : number of vertices
*/

vector <int> bfs(vector<int> g[], int N) {
   queue<int>q;
    bool* visited=new bool[N+1]{false};
    vector<int>ans;
    q.push(0);
    while(!q.empty()){
        for(auto node:g[q.front()]){
            if(!visited[node]){
                q.push(node);
                visited[node]=true;
            }
        }
        ans.push_back(q.front());
        q.pop();
    }
    return ans;
}

#include<bits/stdc++.h>
using namespace std;
void BFS(vector<vector<int>>&adj, int s, vector<int>&res, vector<bool>&visited ){
   queue<int> q ;
   
   visited[s]=true;
   q.push(s);
   
   while(!q.empty()){
       int curr= q.front();
       q.pop();
       res.push_back(curr);
   
for(int x:adj[curr]){
    if(!visited[x]){
    visited[x]=true;
        
    q.push(x);
     }
    }  
  }
}
    

vector<int> BFS_dis(vector<vector<int>>& adj){
    int v=adj.size();
    vector<int> res;
    vector<bool> visited(v,false);
    for(int i=0; i<adj.size(); ++i){
        if(!visited[i]){
            BFS(adj,i,res,visited);
        }
    }
    return res;
}
int main(){
     vector<vector<int>> adj = { {1, 2, 5}, {0}, {0},
                                {4}, {3, 5}, {4}};
    vector<int> ans = BFS_dis(adj);
    for(auto i:ans) {
        cout<<i<<" ";
    }
    return 0;
}

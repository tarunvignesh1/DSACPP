//Graph implementation with adj list

#include <bits/stdc++.h>

using namespace std;

void add_edge(vector <int> adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void dispadj(vector <int> adj[],int h){
    for(int v=0;v<h;++v){
        cout<<v<<": ";
        for(auto i : adj[v])
            cout<<i<<"->";
        cout<<endl;
    }
}

int main(){
    int v=5;
    vector <int> adj[v];
    add_edge(adj,2,3);
    add_edge(adj,3,4);
    add_edge(adj,1,5);
    add_edge(adj,5,3);
    add_edge(adj,5,4);
    add_edge(adj,1,2);
    add_edge(adj,4,3);
    
    dispadj(adj,v);
    return 0;

}
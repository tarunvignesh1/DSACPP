#include <bits/stdc++.h>

using namespace std;

class graph
{
    map<int, bool> visited;
    map<int, list<int>> adj;
    public:
    void addedge(int v, int w);
    void DFS(int a);
};

void graph::addedge(int v,int w){ adj[v].push_back(w);}
void graph::DFS(int a) {
    visited[a]= true;
    cout<<a<<" ";

    list<int> :: iterator i;
    for (i=adj[a].begin();i!=adj[a].end();++i){ 
        if(!visited[*i])
            DFS(*i);
    }
}

int main(){

    graph g;
    g.addedge(0, 1);
    g.addedge(0, 2);
    g.addedge(1, 2);
    g.addedge(2, 0);
    g.addedge(2, 3);
    g.addedge(3, 3);
    g.DFS(2);
}
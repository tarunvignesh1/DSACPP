#include <bits/stdc++.h>

using namespace std;

class graph
{
    int V;
    list<int> *adj;

    public:
    graph(int V);
    void addedge(int v,int w);
    void BFS(int a);
};

graph::graph(int V) {this->V = V; adj = new list<int>[V]; }
void graph::addedge(int v,int w) { adj[v].push_back(w);}
void graph::BFS(int a){

    bool *visited = new bool[V];
    for(int i=0;i<V;i++)
        visited[i]=false;
    
    list<int> queue;
    visited[a]=true;
    queue.push_back(a);
    list<int>::iterator i;
    while(!queue.empty()){
        
        a=queue.front();
        cout<<a<<" ";
        queue.pop_front();

        for(auto i=adj[a].begin(); i!=adj[a].end();++i){
            if(!visited[*i])
            {
                visited[*i]=true;
                queue.push_back(*i);
            }
        }
    }
}

int main(){

    graph g(6);
    g.addedge(1,2);
    g.addedge(2,3);
    g.addedge(5,4);
    g.addedge(4,3);
    g.addedge(6,1);
    g.addedge(2,4);
    g.BFS(2);
    
}
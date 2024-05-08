#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// Graph Implimentation using the Adjanancy list
// undirected graph


/*
class Graph{
    public:
    map<int,list<int>>adj_list;

    void addVertex(int v){
        if(adj_list.find(v) == adj_list.end()){
            adj_list[v] = list<int>();  // represents the empty list 

        }
    }

    void AddEdgesU(int v1,int v2){   //Undirected 
        if(v1 != -1 &&  v2 != -1){
        adj_list[v1].push_back(v2);
        adj_list[v2].push_back(v1);

        }
        else{
            return;
        }
    }
    void AddEdgesD(int v1,int v2){   //directed 
        if(v1 != -1 &&  v2 != -1){
        adj_list[v1].push_back(v2);
        }
        else{
            return;
        }
    }

    void print(){
        for(auto i: adj_list){
            cout<<i.first<<" ->";
            for(auto j:i.second){
                cout<<j<<" ";
            }
            cout<<endl;
        }
        
    }
};
int main(){
    Graph g;
    g.addVertex(1);
    g.addVertex(2);
    g.addVertex(3);
    // g.addVertex(4);

    
    int v1,v2;
    cout<<"Enter your Edges in between Vertex for undirected graph "<<endl;
    while(v1!= -1 && v2 != -1){
        cin>>v1>>v2;
        g.AddEdgesU(v1,v2);
    }


    cout <<"Enter your vertex directed graph"<<endl;
    while(v1!= -1 && v2 != -1){
        cin>>v1>>v2;
        g.AddEdgesD(v1,v2);
    }

    g.print();

}
*/



//Graph impimentaion using the Adjanency matrix 

// Creation of the Graph


/*

vector<vector<int>> printadjency(int n, int m,vector<vector<int>>&edges){

        vector<vector<int>>solution(n);
        for(int  i =0;i<m;i++){
            int u = edges[i][0];
            int v = edges[i][1];
            solution[u].push_back(v);
            solution[v].push_back(u);

        }
        vector<vector<int>>ans(n);
        for(int i = 0;i<n;i++){
            ans[i].push_back(i);

            for(int  j = 0;j<ans[i].size();j++)
            {  
                ans[i].push_back(ans[i][j]);

            }
        }
        return ans;
}



int main(){
    int n;
    cout <<"Enter your Nodes "<<endl;
    cin>>n;
    int m;
    cout<<"Enter your Edegs "<<endl;
    cin>>m;
    vector<vector<int>>edges(m,{0,0});
        for(int i=0;i<m;i++){
            cin>>edges[i][0];
            cin>>edges[i][1];    
    }
    
vector<vector<int>>solution  = printadjency(n,m,edges);
    
    for(auto i:solution){
        for(auto j:i)

        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
   return 0;
}


*/



//Creation Of Adjency List


/*
class Graph{
    public:
    unordered_map<int,list<int>>adj;
    void addedge(int u,int v,bool direction){
        //if direction is  0 then its a undirected graph
        //direction is 1 then directed graph
        adj[u].push_back(v);
        if(direction == 0){
            adj[v].push_back(u);
        }
    }

   
   

};

//creating and printing of graph
vector<vector<int>> printEdges(int n,int m,vector<vector<int>>&edges){
    vector<int>ans[n];
    //ans array is used to store the all adjcent nodes
    for(int i=0;i<n;i++){
        int u = edges[i][0];
        int v = edges[i][1];
        ans[u].push_back(v);
        ans[v].push_back(u);

    } 
    //now printintin the array
    vector<vector<int>>adj;
    for(int i=0;i<n;i++){
        adj[i].push_back(i);
        //enterring the neighobour
        for(int j =0;j<ans[i].size();j++){
            adj[j].push_back(ans[i][j]);
        }

    }
    return adj;
   
}

int main(){

    int n;
    cout <<"ENter your Nodes "<<endl;
    cin>>n;  
    int m;
    cout <<"Enter your Edges "<<endl;
    cin>>m;
    Graph g;
    for(int i=0;i<m;i++){
        int u,v;
        // creatin the undirected graph
        cin>>u>>v;
        g.addedge(u,v,0);
    }
    //printing the graph
    // g.printEdges();
        return 0;
*/


// cycle detection in Directed Graph
/*
  bool checkCycle(int node, unordered_map<int,bool>&visited,unordered_map<int,bool>&dfsvisited,unordered_map<int,list<int>>&adj){
    visited[node] = 1;
    dfsvisited[node] =1;
    for(auto i:adj[node]){
        if(!visited[i]){
           bool CycleDetection =  checkCycle(i,visited,dfsvisited,adj);

           if(checkCycle){
            return true;
           }
           else if(dfsvisited[i]){
            return true;
           }
       }
    }
    dfsvisited[node] = false;
    return false;
 
  }
    bool  CycleDetectionInDirectedGraph(int V,int E,vector<pair<int,int>>&edges){

        // craete the Adajncy list
     unordered_map<int,list<int>>adj;
        for(int  i = 0;i<E;i++){
            int u = edges[i].first;
            int v = edges[i].second;
        //for directed
        adj[i].push_back(v);
            
        }
        unordered_map<int,bool>dfsvisited;
        unordered_map<int,bool>visited;
        for(int i = 0;i<V;i++){
            if(!visited[i]){
               bool CycleDetection = checkCycle(i,visited,dfsvisited,adj);
               if(CycleDetection){
                return true;
               }
            }
        }
        return false;

}
int main(){
    int V;
    int E;
    cout<<"Enter your Edges and nodes "<<endl;
    cin>>V>>E;
   vector<pair<int,int>>edges(E,{0,0});
    for(int i=0;i<E;i++){
     cin>>edges[i].first;
     cin>>edges[i].second;

    }
    for(int i =0;i<E;i++){
        cout<<edges[i].first<<" "<<edges[i].second<<endl;
    }

    bool  ans  = CycleDetectionInDirectedGraph( V, E,edges);
    cout<<(ans?"the cycle is present ":"Cycle is not present ")<<endl;

}


*/

// TopoLogical Sort
/*
void toposort(int node,unordered_map<int,bool>&visited,stack<int>&s,unordered_map<int,list<int>>&adj){
    visited[node] = 1;
    for(auto neighobour :adj[node] ){
        if(!visited[neighobour]){
            toposort(neighobour,visited,s,adj);
        }
    }
    s.push(node);

}
vector<int>Topological_Sort(int V,int E,vector<vector<int>>&edges){
    //create the Adj list

    unordered_map<int,list<int>>adj;
    for(int i=0;i<E;i++){
        int u = edges[i][0];
        int v = edges[i][1];
        
        adj[u].push_back(v);
    }

    //traverse all component
   stack<int>s;
   unordered_map<int,bool>visited;
    for(int i=0;i<V;i++){
        if(!visited[i]){
            toposort(i,visited,s,adj);
        }
    }
   vector<int>ans;
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }
    return ans;

}
int main(){
    int V;
    int E;
    cout<<"Enter Your Edges and Node "<<endl;
    cin>>V>>E;

    //edges

    vector<vector<int>>edges(E,{0,0});

    for(int i =0;i<E;i++){
        cin>>edges[i][0];
        cin>>edges[i][1];;
    }
    cout<<endl;
    for(int i =0;i<E;i++){
        cout<<edges[i][0]<<" "<<edges[i][1]<<endl;
        
    }

    vector<int>ans;
    ans = Topological_Sort(V,E,edges); 
    for(int i =0;i<V;i++){
        cout<<ans[i]<<" ";

    }
return 0;
   
}
*/



// int main(){
//     int V;int E;
//     cout<<"Enter your Vertex and Edges "<<endl;
//     cin>>V>>E;

//     vector<vector<int>>Edegs(E,{0,0});
//     for(int i=0;i<E;i++){
//         cin>>Edegs[i][0];
//         cin>>Edegs[i][1];
//     }
//     unordered_map<int,list<int>>adj(V);
//     cout<<"NOw Make Adjancensy List "<<endl;
//     for(int i =0;i<V;i++){
//         int u  = Edegs[i][0];
//         int v = Edegs[i][1];
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }


//     for(auto i:adj){
//         cout<<i.first<<"->";
//         for(auto j:i.second){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }


// Topological_Sort Using the Bfs(kahan's Algorihtm)

/*

vector<int>Topological_Sort_BFS(vector<vector<int>>&edges,int V,int E){
    //prepare the adjanancy list
    unordered_map<int,list<int>>adj;
    vector<int>indegree(V,0);
    for(int  i=0;i<E;i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        indegree[v]++;
    }

    //find the All indegree of Node
    // for(auto i:adj){
    //     for(auto j:i.second){
    //         indegree[j]++;
    //     }
    // }
    // 0 indegree 
    queue<int>q;
    for(int i =1;i<=V;i++){
       if(indegree[i] == 0){
        q.push(i);
       }
    }

    vector<int>ans;
    while(!q.empty()){
        int frontnode = q.front();
        q.pop();

        //ans store
        ans.push_back(frontnode);

        // vist the Neighbours
        for(auto neighobour : adj[frontnode]){
            indegree[neighobour]--;
            if(indegree[neighobour] == 0){
                q.push(neighobour);
            }

        }
    }
    return ans;
}
int main(){
    int V,E;
    cout<<"Enter your Vertex And Edges "<<endl;
    cin>>V>>E;
    vector<vector<int>>edges(E,{0,0});

    for(int i =0;i<E;i++){
        cin>>edges[i][0];
        cin>>edges[i][1];
    };
    vector<int>ans;
   ans = Topological_Sort_BFS(edges,V,E);
   for(int i =0;i<V;i++){
    cout<<ans[i]<<" ";
   }
return 0;

}
*/

// Cycle Detection in the Directed Graph using BFS

/*
bool DetectDirectedGraph(int n,vector<pair<int,int>>&edges){
    //prepare the adjlist
  unordered_map<int,list<int>>adj;
    for(int i =0;i<edges.size();i++){
        int u = edges[i].first-1;
        int v = edges[i].second-1;
        adj[u].push_back(v);
    }
    vector<int>indegree(n);
    for(auto i :adj){
        for(auto j:i.second){
            indegree[j]++;
        }
    }

    //o indegree components are

    queue<int>q;
    for(int i =0;i<n;i++){
        if(indegree[i] == 0){
            q.push(i);
        }
    }

    int cnt =0;
    while(!q.empty()){
        int frontnode = q.front();
        q.pop();

        //cnt;
        cnt++;

        for(auto neighbour :adj[frontnode]){
            indegree[neighbour] --;
            if(indegree[neighbour] == 0){
                q.push(neighbour);
            }
        }

    }

    if(cnt == 0){
        return false;
    }
    else{
        return true;
    }
}
int main()
{
    int n,E;
    cout<<"Enter your Vertex "<<endl;
    cin>>n>>E;
    vector<pair<int,int>>edges(E);
    for(int i =0;i<E;i++){
        cin>>edges[i].first;
        cin>>edges[i].second;
    }

    bool ans = DetectDirectedGraph(n,edges);
    if(ans){
        cout<<"The Cycle in Graph is Present "<<endl;
    }
    else{
        cout<<"The Cycle is not present "<<endl;
    }
  return 0;


}
*/

// Shortest path in Undirected graph

/*
void ShortestPath(int n,int m,int s,int d,vector<pair<int,int>>&edges){
    //craete the Adjanency list
    unordered_map<int,list<int>>adj;

    for(int i =0;i<m;i++){
        int u = edges[i].first;
        int v = edges[i].second;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    //do bfs

    unordered_map<int,bool>visited;
    unordered_map<int,int>parent;

    queue<int>q;
    q.push(s);
    parent[s] = -1;
   visited[s] = true;

   while(!q.empty()){
    int frontnode = q.front();
    q.pop();

    for(auto i : adj[frontnode]){
        if(!visited[i]){
            visited[i] = true;
            parent[i] = frontnode;
            q.push(i);
        }
    }
   }


   //find the Shortest path

   vector<int>ans;
   int currentnode = d;
   ans.push_back(d);
   int cnt = 0;

   while(currentnode != s){
    currentnode = parent[currentnode];
    ans.push_back(currentnode);
    cnt++;

   }
   reverse(ans.begin(),ans.end());
   for(auto i:ans){
    cout<< i << " "<<endl;
   }
    cout<<"the Distance is "<<cnt<<endl;
   

}
int main(){
    int V,E;
    cout<<"Enter your Edges and Vertex "<<endl;
    cin>>V>>E;

    vector<pair<int,int>>edges(E,{0,0});

    for(int i =0;i<E;i++){
        cin>>edges[i].first;
        cin>>edges[i].second;
    }
    int src,dest;
    cout<<"Enter your Src and Dest "<<endl;
    cin>>src>>dest;

    // vector<int>ans;
    // cout<<"My shortest path is "<<endl;
    // ans =
     ShortestPath(V,E,src,dest,edges);

    // for(auto i:ans){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    return 0;
}
*/

// 8
// 9
// 1 2
// 2 5
// 5 8
// 8 7
// 7 6
// 6 4
// 4 1
// 1 3
// 3 8
// src 1
// dest 8
 


 //Shortest Path in Directed Acyclic Graph using the dfs

 /*
 class Graph{

    public:

    map<int,list<pair<int,int>>>adj;

    void addedge(int u ,int v,int w){
        pair<int,int>p = make_pair(v,w);
        adj[u].push_back(p);
    }

    void printadjency(){
        for(auto i:adj){
            cout<<i.first<<"->";
            for(auto j:i.second){
                cout<<"{"<<j.first<<","<<j.second<<"}";
            }
            cout<<endl<<endl;
        }
    }

    void dfs(int node,unordered_map<int,bool>&visited,stack<int>&topo){
        for(auto neighbour : adj[node]){
            if(!visited[neighbour.first]){
                dfs(neighbour.first , visited,topo);

            }
        }
        topo.push(node);
    }

    void getShortestPath(int src,vector<int>&dist,stack<int>&topo){
        dist[src] = 0;
        while(!topo.empty()){
            int top  =topo.top();
            topo.pop();

            if(dist[top]  != INT_MAX){
                 for(auto i:adj[top]);
                 for(auto i:adj[top]){
                    if(dist[top]+i.second<dist[i.first]){
                        dist[i.first] = dist[top]+i.second;
                    }
                 }
            }
        }
    }
 };

 int main(){
    Graph g;
    g.addedge(0 ,1 ,5);
    g.addedge(0 ,2 ,3);
    g.addedge(1 ,2 ,2);
    g.addedge(1 ,3 ,6);
    g.addedge(2 ,3 ,7);
    g.addedge(2 ,4 ,4);
    g.addedge(2 ,5 ,2);
    g.addedge(3 ,4 ,-1);
    g.addedge(4 ,5 ,-2);
    cout<<endl;
    g.printadjency();

    int n = 6;
    //topological

    unordered_map<int,bool>visited;
    stack<int>s;
    for(int i = 0;i<n;i++){
        if(!visited[i]){
            g.dfs(i,visited,s);
        }
    }

    int src =1;
    vector<int>dist(n);
    for(int i = 0;i<n;i++){
        dist[i] = INT_MAX;
    }

    g.getShortestPath(src,dist,s);

    cout<<"Answer is "<<endl;
    for(int i=0;i<dist.size();i++){
        cout<<dist[i]<<" ";
    }
    cout<<endl;
    return 0;
 }
 */



// Dijkstras AlgoRithm[shortest Path]


/*

vector<int>DijkstrasShortPathAlgo(int V,int E,vector<vector<int>>&edges,int src){
    //create the Adjanenecy list
    
    unordered_map<int , list<pair<int,int >>>adj;
    for(int i =0;i<E;i++){
        int u = edges[i][0];
        int v = edges[i][1];
        int wt = edges[i][2];
   adj[u].push_back(make_pair(v,wt));
   adj[v].push_back(make_pair(u,wt));
    }

    //creation of Distance Array
    vector<int>dist(V);
    for(int i = 0;i<V;i++){
        dist[i] = INT16_MAX;
    }

    set<pair<int,int>>st;
    dist[src] = 0;
    st.insert(make_pair(0,src));

    while(!st.empty()){
    auto top = *(st.begin());
    int nodeDistance = top.first;
    int topnode = top.second;

    st.erase(st.begin());

    for(auto neighbour : adj[topnode]){
        if(nodeDistance + neighbour.second < dist[neighbour.first]){
            auto record = st.find((make_pair(dist[neighbour.first],neighbour.first)));
            if(record != st.end()){
                st.erase(record);
            }

            dist[neighbour.first] = nodeDistance + neighbour.second;

            st.insert(make_pair(dist[neighbour.first],neighbour.first));
        }
        
    }
  }
  return dist;

}

int main(){
    int V;
    int E;
    cout<<"Enter your Vertex and the Edges "<<endl;
    cin>>V>>E;
    vector<vector<int>>edges(E,{0,0,0});
    for(int i =0;i<E;i++){
        cin>>edges[i][0];
        cin>>edges[i][1];
        cin>>edges[i][2];
    }

    int src;
    cout<<"Enter your Source "<<endl;
    cin>>src;

    vector<int>ans;
    ans = DijkstrasShortPathAlgo(V,E,edges,src);
    for(auto i :ans){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}

*/
// Enter your Vertex and the Edges 
// 5 7
// 2 1 3
// 1 4 1
// 4 3 7
// 3 0 2
// 0 2 1
// 0 1 7
// 3 1 5
// Enter your Source 
// 0
// 0 4 1 2 5 



// Prims Algorithm
/*


vector<pair<pair<int,int>,int>>Primse_MST(int n,int m,vector<pair<pair<int,int>,int>>&g){

    //create the adjanenecy list
    unordered_map<int ,list<pair<int,int>>>adj;
    for(int i =0;i<g.size();i++){
        int u = g[i].first.first;
        int v = g[i].first.second;
        int wt = g[i].second;

        adj[u].push_back(make_pair(v,wt));
        adj[v].push_back(make_pair(u,wt));
    }

    vector<int>key(n+1);
    vector<bool>mst(n+1);
    vector<int>parent(n+1);

    for(int i=0;i<=n;i++){
        key[i] = INT_MAX;
        parent[i] = -1;
        mst[i] = false;
    }

    key[1] = 0;
    parent[1] = -1;

    for(int i=0;i<n;i++){
        int mini = INT_MAX;

        int u;

        for(int v = 0;v<key.size();v++){
            if( mst[v] == false && key[v] <= mini){
                u = v;
                mini = key[v];
            }
        }

        mst[u] = true;

        //check the adjacent nodes
        for(auto i :adj[u]){
            int v = i.first;
            int w = i.second;
            if(mst[v] == false && w<key[v]){
                parent[v] = u;
                key[v] = w;
            }
        }
    } 

    vector<pair<pair<int,int>,int>>result;

    for(int  i =0;i<n;i++){
        result .push_back({{parent[i],i},key[i]});
    }

    return result;

}
int main(){

    int V;int E;
    cout<<"Enter your Vertex and Edges "<<endl;
    cin>>V>>E;
    //creat the edges

    vector<pair<pair<int,int>,int>>edges(E,{{0,0},0});
    for(int i = 0;i<E;i++){
        cin>>edges[i].first.first;
        cin>>edges[i].first.second;
        cin>>edges[i].second;
    }

    vector<pair<pair<int,int>,int>>ans;

    ans  = Primse_MST(V,E,edges);

    for(auto i : ans){
        cout<<"{"<<i.first.first<<","<<i.first.second<<"} ->"<<i.second<<" "<<endl;
    }
    cout<<endl;
    return 0;
}
*/

// Enter your Vertex and Edges 
// 5  
// 6
// 0 1 2
// 1 2 3
// 2 4 7
// 4 1 5
// 1 3 8
// 3 0 6
// {1,0} ->2
// {-1,1} ->0
// {1,2} ->3
// {0,3} ->6
// {1,4} ->5


//Krushakals Algorithm
/*
#include<algorithm>
bool cmp (vector<int>&a , vector<int>&b){
    return (a[2] < b[2]);
}

void make_set(vector<int>&parent ,vector<int>&rank,int n){
    for(int i =0;i<n;i++){
        parent[i] = i;
        rank[i] = 0;
    }
}

int  findparent(vector<int>&parent ,int node){
    if(parent[node] == node){
        return node;
    }
      return  parent[node] = findparent(parent,parent[node]);
}

void union_set(int u ,int v , vector<int>&parnet,vector<int>&rank){
    u = findparent(parnet,u);
    v = findparent(parnet,v);

    if(rank[u] < rank[v]){
        parnet[u] = v;
    }
    else if(rank[v]<rank[u]){
        parnet[v] = u;
        rank[u]++;

    }
    else{
        parnet[v] = u;
        rank[u]++;
    }
}
int Krushakals_MST(int n,vector<vector<int>>&edges){
    sort(edges.begin(),edges.end(),cmp);
    vector<int>parent(n);
    vector<int>rank(n);
    make_set(parent,rank,n);

    int min = 0;

    for(int i =0;i<edges.size();i++){
        int u = findparent(parent,edges[i][0]);
        int v = findparent(parent,edges[i][1]);
        int wt = edges[i][2];

        if( u != v){
            union_set(u,v,parent,rank);
            min += wt;
        }
    }
    return min;
}
int main(){
    int V,E;
    cout<<"Enter your vertex and Edeges "<<endl;
    cin>>V>>E;
    vector<vector<int>>edges(E,{0,0,0});
    for(int i=0;i<E;i++){
        cin>>edges[i][0];
        cin>>edges[i][1];
        cin>>edges[i][2];
    }

    int minweight= Krushakals_MST(V,edges);
    cout<<minweight<<endl;
    return 0;
}

*/

//  Bridge in Graph

/*

void dfs(int node,int parent,int timer,vector<int>&disc,vector<int>&low,vector<vector<int>>&result,unordered_map<int,list<int>>&adj,unordered_map<int ,bool>&vis){
   vis[node] = true;
   disc[node] = low[node] = timer++;
   for(auto nbr : adj[node]){
    if(nbr ==parent){
        continue;
    }

    if(!vis[nbr]){
        dfs(nbr,node,timer,disc,low,result,adj,vis);
        low[node]  = min (low[node] , low[nbr]);

        if(low[nbr] > disc[node]){
            vector<int>ans;
            ans.push_back(node);
            ans.push_back(nbr);
            result.push_back(ans);
        }
    }
    else{
        low[node] = min(low[node],disc[nbr]);
    }
   }
}
vector<vector<int>>findBridge(vector<vector<int>>&edges,int n,int m){
    //create the adjancey list
    unordered_map<int,list<int>>adj;
    for(int i =0;i<edges.size();i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int timer = 0;
    vector<int>disc(n);
    vector<int>low(n);
    int parent = -1;

    unordered_map<int,bool>vis;
    for(int  i =0;i<n;i++){
        disc[i] = -1;
        low[i] = -1;
    }

    vector<vector<int>>result;

    for(int i =0;i<n;i++){
        if(!vis[i]){
            dfs(i,parent,timer,disc,low,result,adj,vis);
        }
    }

    return result;

}

int main(){
    int v;
    int E;
    cout<<"Enter your Vertex and node "<<endl;
    cin>>v>>E;

    vector<vector<int>>edges(E,{0,0});
    for(int i =0;i<E;i++){
        cin>>edges[i][0];
        cin>>edges[i][1];
    }

vector<vector<int>>ans;
cout<<endl<<endl;

ans = findBridge(edges,v,E);

for(auto i : ans){
    for(auto j : i ){
        cout<<j <<" ";
    }
    cout<<endl;
}
cout<<endl;

return 0;


}
*/


//Articulation point 

/*
void dfs(int node,int parent,vector<int>&disc,vector<int>&low,unordered_map<int,bool>&vis,
unordered_map<int,list<int>>&adj,vector<int>&ap,int &timer){

    vis[node] = true;
    disc[node] = low[node] = timer++;
    int child = 0;

    for(auto nbr : adj[node]){
        if(nbr == parent){
            continue;
        }
        if(!vis[nbr]){
            dfs(nbr,node,disc,low,vis,adj,ap,timer);
            low[node] = min(low[node] , low[nbr]);

            //check or not

            if(low[nbr] >= disc[node] && parent != -1){
                ap[node] = 1;
            }
            child++;
        }
        else{
            low[node] = min(low[node],low[nbr]);
        }
    }

    if(parent == -1 && child > 1){
        ap[node] = 1;
    }

}
int main(){
    int V,E;
    cout<<"Enter your Vertex and node "<<endl;
    cin>>V>>E;

    vector<vector<int>>edges(E,{0,0});

    for(int i =0;i<E;i++){
        cin>>edges[i][0];
        cin>>edges[i][1];
    }

    unordered_map<int,list<int>>adj;
    for(int i =0;i<edges.size();i++){
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int timer  = 0;
    vector<int>disc(V);
    vector<int>low(V);

    unordered_map<int,bool>vis;
    vector<int>Ap(V,0);

    for(int  i =0;i<V;i++){
        if(!vis[i]){
            dfs(i,-1,disc,low,vis,adj,Ap,timer);
        }
    }

    cout<<"The Articulation points are "<<endl;

    for(int i = 0;i<V;i++){
        if(Ap[i] != 0){
            cout<<i<<" ";
        }

    }
    cout<<endl;
    return 0;
}
*/


// KosuRaju's Algorithm - strongly connected componenet


/*
void dfs(int node,unordered_map<int,bool>&vis,stack<int>&st,unordered_map<int,list<int>>&adj){
    vis[node] = true;
    for(auto nbr : adj[node]){
        if(!vis[nbr]){
            dfs(nbr,vis,st,adj);
        }
    }
    st.push(node);
}

void revdfs(int node,vector<int>&ans,unordered_map<int,bool>&vis,unordered_map<int,list<int>>&adj){
    vis[node] = true;
    ans.push_back(node);
    for(auto nbr : adj[node]){
        if(!vis[nbr]){
            revdfs(nbr,ans,vis,adj);
        }
    }
}

void  SCC(int v,vector<vector<int>>&edges){
    unordered_map<int,list<int>>adj;
    for(int i=0;i<edges.size();i++){
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v);
    }

    //toposort
    stack<int>st;
    unordered_map<int,bool>vis;
    for(int i=0;i<v;i++){
        if(!vis[i]){
            dfs(i,vis,st,adj);
        }
    }

    //treanspose of the graph

    unordered_map<int,list<int>>transpose;
    for(int i =0;i<v;i++){
        vis[i] = 0;
        for(auto nbr : adj[i]){
            transpose[nbr].push_back(i);
        }
    }

    int count = 0;
    vector<int>ans;
    while(!st.empty()){
        int  top = st.top();
        
        st.pop();

        if(!vis[top]){
            count ++;
            revdfs(top,ans,vis,transpose);
        }
    }
    cout<<count;
    cout<<endl<<endl;
    for(auto i :ans){
        cout<<i<<" ";
    }
}

int main(){
    int v,e;
    cout<<"Enter your Vertex and node "<<endl;
    cin>>v>>e;

    vector<vector<int>>edges(e,{0,0});
    for(int i = 0;i<e;i++){
        cin>>edges[i][0];
        cin>>edges[i][1];
    }
    cout<<endl;
// int componenet = 
SCC(v,edges);

// cout<<"The Component Are the "<<componenet<<endl;
return 0;

}
*/

// Bellman Ford Algorithm

//find the Negative Cycle in the Graph


/*
int Bellman_ford(int n,vector<vector<int>>&edges,int src,int dest){
   vector<int>dist(n+1,1e9);

   dist[src] = 0;

   for(int i = 1 ;i<=n;i++){
    for(int j = 0;j<n;j++){
        int u = edges[j][0];
        int v = edges[j][1];
        int wt = edges[j][2];
        if(dist[u] != 1e9 && (dist[u] + wt )<dist[v]){
            dist[v] = dist[u] + wt;
        }
    }
   }

    
    bool flag = false;

    for(int i = 0 ;i<edges.size();i++){
        int u = edges[i][0];
        int v = edges[i][1];
        int wt = edges[i][2];

        if(dist[u] != 1e9 && (dist[u] + wt )<dist[v]){
            flag = true;
        }
    }
 
    if(flag == 0){
        return dist[dest];
    }
    else{
        cout<<"The Negative Cycle is Present "<<endl;
        return -1;
    }
}

int main(){
    int v,e;
    cout<<"Enter your Vertex and node "<<endl;
    cin>>v>>e;
    vector<vector<int>>edges(e,{0,0,0});

    for(int i =0;i<e;i++){
        cin>> edges[i][0];
        cin>> edges[i][1];
        cin>> edges[i][2];
    }

    cout<<" the shortest path is using the bellman ford Algorithm "<<Bellman_ford(v,edges,1,3)<<endl;

  return 0;
}
*/

// 3 3
// 1 2 2
// 2 3 -1
// 1 3 2
//  the shortest path is using the bellman ford Algorithm    1
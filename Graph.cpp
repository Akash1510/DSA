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

    void AddEdges(int v1,int v2){
        if(v1 != -1 &&  v2 != -1){
        adj_list[v1].push_back(v2);
        adj_list[v2].push_back(v1);

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
    g.addVertex(4);

    
    int v1,v2;
    cout<<"Enter your Edges in between Vertexx "<<endl;
    while(v1!= -1 && v2 != -1){
        cin>>v1>>v2;
        g.AddEdges(v1,v2);
    }

    g.print();

}
*/



// Graph Implementaion Using the Directed Graph 
 
 class Graph{
    public:

 }

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
}
*/
    

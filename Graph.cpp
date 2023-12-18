#include<iostream>
#include<bits/stdc++.h>
using namespace std;



// Creation of the Graph

/*
vector<vector<int>> printadjency(int n, int m,vector<vector<int>>&edges){

        vector<vector<int>>solution(n);
        for(int i=0;i<n;i++){
            solution[i].push_back(i);
        }

        for(int i=0;i<n;i++){
            int u = edges[i][0];
            int v = edges[i][1];

            solution[u].push_back(v);
            solution[v].push_back(u);
        }
        return solution;
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
        for(auto j:i){
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
    g.printadj();
    return 0;

}


*/






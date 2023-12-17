#include<iostream>
#include<bits/stdc++.h>
using namespace std;


//Rat in Maz Problem Using Backtracking
/*
bool isSafe(int newx,int newy,vector<vector<bool>>&vis,vector<vector<int>>&arr,int n){
    if((newx >= 0 && newx<n) && (newy >=0 && newy<n) && (vis[newx][newy] != 1 && arr[newx][newy] == 1 )){
        return true;
    }
    else{
        return false;
    }

}
void solve(int x,int y , vector<vector<int>>&arr,int n,vector<string>&ans,vector<vector<bool>>&vis,string path){
        //base case
        if(x == (n-1) && y == (n-1) ){
            ans.push_back(path);
            return;
        }
        vis[x][y] = 1;

        //movement D,U,L,R
        //down
        if(isSafe(x+1,y,vis,arr,n)){
            solve(x+1,y,arr,n,ans,vis,path +'D');
    
        }
        //left
        if(isSafe(x,y-1,vis,arr,n)){
            solve(x,y-1,arr,n,ans,vis,path +'L');
        }
        //right
        if(isSafe(x,y+1,vis,arr,n)){
            solve(x,y+1,arr,n,ans,vis,path +'R');
    
        }
        //Up
        if(isSafe(x-1,y,vis,arr,n)){
            solve(x-1,y,arr,n,ans,vis,path +'U');
        }

        vis[x][y] = 0;

}
vector < string > searchMaze(vector < vector < int >> & arr, int n) {

    vector<string>ans;
    vector<vector<bool>>visited(n,vector<bool>(n,0));
    string path = "";
    solve(0,0,arr,n,ans,visited,path);
    return ans;

}

int main(){
    vector<vector<int>>arr={{1, 0, 0, 0 },{1 ,1 ,0, 1},{1 ,1 ,0 ,0},{0 ,1, 1, 1}};
   //calling the function search in maze;
   int n = arr.size();
    vector<string>ans= searchMaze(arr,n);

    for(auto i : ans){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;

}

*/


// N Queen Problem
/*

void addsolution(vector<vector<int>>&ans,vector<vector<int>>&board,int n){
    vector<int>temp;
    for(int i=0;i<n;i++){
        for(int j =0 ;j<n;j++){
            temp.push_back(board[i][j]);
        }
    }
    ans.push_back(temp);
}
bool  isSafe(int row ,int col,vector<vector<int>>&board,int n){
    int x = row;
    int y = col;
    //check for same row;
    while(y>=0){
        if(board[x][y] == 1){
            return false;
        }
        y--;
    }
    
     x = row;
     y = col;
     //check for the digonal
     while(x>=0 && y>= 0){
        if(board[x][y] == 1){
            return false;
        }
        y--;
        x--;
     }

     x = row;
     y = col;
     //check for the digonal
     while(x<n && y>=0 ){
        if(board[x][y] == 1){
            return false;
        }
        y--;
        x++;
     }
     return true;

}
void solve(int col , vector<vector<int>>&ans,vector<vector<int>>&board,int n ){
    if(col == n){
        addsolution(ans,board,n);
        return ;
    }

    // solve 1 case  remaining will sove by he recursion

    for(int row = 0;row<n;row++){
        if(isSafe(row,col,board,n)){
            //if  placing
            board[row][col] = 1;
            solve(col+1,ans,board,n);
            //backtrack
            board[row][col] = 0;
        }
    }
}

vector<vector<int>>nQueens(int n){
    vector<vector<int>>board(n,vector<int>(n,0));
    vector<vector<int>>ans;
     solve(0,ans,board,n);
     return ans;
}

int  main(){
    //Your are Passin the No of Queen`s in the Boar to place
    cout <<"Enter your No of Queen`s to be Passed "<<endl;
    int N;
    cin>>N;
    vector<vector<int>>ans = nQueens(N);
    for(auto i:ans){
        for(auto j :i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
*/


// Sudoku solver

/*
bool isSafe(int row,int col,vector<vector<int>>&board,int val){
    for(int i=0;i<board.size();i++){
        //rowcheck
        if(board[row][i] == val){
            return false;
        }
        //col check
        if(board[i][col] == val){
              return false;
        }
           // for the 3*# matrix check

           if(board[3*(row/3)+i/3][3*(col/3)+i%3] == val ){
               return false;
           }
    }
    return true;
}
bool solve(vector<vector<int>>&board){
    int n = board[0].size();

    for(int row =0 ;row<n;row++){
        for(int col =0 ;col<n;col++){
            //is empty
            if(board[row][col]== 0){
                for(int val = 1;val<=9;val++){
                    if(isSafe(row,col,board,val)){
                        board[row][col] = val;
                        //recursiv call;
                        bool solution = solve(board);
                        if(solution){
                            return  true;
                        }
                        else{
                            //backtracking
                            board[row][col] = 0;
                        }
                    }
                }
                return false;
            }
        }
    }
    return true;
}

void vaildSudoku(vector<vector<int>>&Sudoku){
    solve(Sudoku);
}
int main(){
    vector<vector<int>>sudoku(9,vector<int>(9,0));

    for(int i=0;i<9;i++){
        for(int j = 0;j<9;j++){
            cin >> sudoku[i][j];
        }
    }

    //printtin the sudoku 
    for(int i=0;i<9;i++){
        for(int j = 0;j<9;j++){
            cout<<sudoku[i][j]<<" ";
        }
        cout<<endl;
    }

   cout<<endl<<endl;
    vaildSudoku(sudoku);
    cout<<endl<<endl;

    for(int i=0;i<9;i++){
        for(int j = 0;j<9;j++){
            cout<< sudoku[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    return 0;
}

*/


/* 
// use this Input

3 0 6 5 0 8 4 0 0
5 2 0 0 0 0 0 0 0
0 8 7 0 0 0 0 3 1
0 0 3 0 1 0 0 8 0
9 0 0 8 6 3 0 0 5
0 5 0 0 9 0 6 0 0
1 3 0 0 0 0 2 5 0
0 0 0 0 0 0 0 7 4
0 0 5 2 0 6 3 0 0

*/
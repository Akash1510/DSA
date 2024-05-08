// #include<iostream>
// #include<string.h>
// using namespace std;


// class HashTable{
//   public:

//   class Hash{
//     public:
//     long long key;
//      char name[10];

//   };
//   Hash h[10];


//  HashTable(){
//     for(int i=0;i<10;i++){
//         h[i].key = -1;
//         strcpy(h[i].name,"NULL");

//     }
//  }

//  void insert(){

//     char ans;
//     char n[10];
//     char ntemp[10];

//     long long k;
//     long long temp;
//     int hi;
//     int count = 0;
//     int flag = 0;
//     int i;

//     //using the do while loop -->atleaat one time will excuting
// do{


//     if(count>=10){
//         cout<<"Hash Table is Full ";
//     }
//     cout<<"Enter your tele"<<endl;
//     cin>>k;   //enter your Key
   
//     cout<<"Enter your Name "<<endl;
//     cin>>n;

//     hi = k%10;  // hashfunctio

//     if(h[hi].key == -1){ // to check the emopty space

//        h[hi].key = k;
//        strcpy(h[hi].name, n);
//     }
//     else{
//         //use the collision resolution statergy

//         cout<<"use collision resolution Stratergy"<<endl;
//         if(h[hi].key%10 != hi){
//             cout<<"the collision with replacement "<<endl;

//             temp = h[hi].key;
//             strcpy(ntemp,h[hi].name);

//             h[hi].key = k;

//             for(int i=hi+1;i<10;i++){
//                 if(h[i].key == -1){
//                     h[i].key = temp;

//                     strcpy(h[i].name,ntemp);
//                     flag = 1;
//                     break;
//                 }
//             }

//             for(int i=0;i<hi && flag==0;i++){
//                 if(h[i].key == -1){
//                     h[i].key = temp;
//                     strcpy(h[i].name,ntemp);
//                     break;
//                 }
//             }


//         }
//         else{
//             cout<<"collison Without Replacement "<<endl;

//             for(int i = hi+1;i<10;i++){
//                 if(h[i].key == -1){
//                     h[i].key = k;
//                     strcpy(h[i].name,n);
//                     flag = 1;
//                     break;
//                 }
//             }

//             for(int i=0;i<hi && flag == 0;i++){
//                 if(h[i].key == -1){
//                     h[i].key = k;
//                     strcpy(h[i].name,n);
//                     break;
//                 }
//             }
//         }


//     }

//     flag = 0;
//     count++;
//     cout<<"Do you Want Insert more Keys "<<endl;
//     cin>>ans;

//  }while(ans =='y' || ans=='Y');


//  }


// //find Function
// int find(long long k){
//     int hi,i;

//     hi = k%10;
//     if(hi != -1 && k == h[hi].key){
//         cout<<"key is "<<h[hi].key<<"the name is "<<h[hi].name<<endl;
//         return hi;
//     }
//     else if(hi != -1){
//         for(int i = hi+1; i != hi; i = (i+1)%10){
//             if(k == h[i].key){
//                 cout<<"the key is "<<h[i].key<<"and the name is "<<h[i].name<<endl;
//                 return i;
//             }
//         }
//     }
//     else{
//         return -1;
//     }
// }
//  // delete Function

//  void Delete(long long k){
//     int index = find(k);
//     if(index == -1){
//         cout<<"Key not Found "<<endl;

//     }
//     else{
//         h[index].key = -1;
//         strcpy(h[index].name,"NULL");
//         cout<<"Key is Deleted "<<endl;
//     }
//  }
 

//  void Print(){
//     for(int i=0;i<10;i++){
//         cout<<"the Key of the Person is "<<h[i].key <<"and Name of the person is "<<h[i].name<<endl;
//     }
//  }



// };

// int main(){
//  long long k;
//  int ch;
//  int index;
//  char ans;
//  HashTable obj;
 

//   while (ch>0){

//     cout<<"enter your choise"<<endl;
//     cin>>ch;

//     cout<<"Make your Database "<<endl;
//     cout<<"What Do you Want Do "<<endl;
//     cout<<"1.Insert"<<endl<<"2.Print"<<endl<<"3.Delete"<<endl<<"4.find"<<endl;


//     switch (ch)
//     {
//     case 1 :
//         obj.insert();
//         break;
//     case 2:
//        obj.Print();
//        break;
//     case 3: 
//     cout<<"Enter your Key To Delete "<<endl;
//     cin>>k;
//        obj.Delete(k);
//        break;
//     case 4:
//     cout<<"Enter your Key do You Want To Search"<<endl;
//     cin>>k;
//       obj.find(k);
//       break;
//     default:
//         break;
//     }
//   }  


   

// }


// #include <iostream>
// #include <string>
// #include <sstream>

// using namespace std;

// int findFirstLongestEvenWord(string& sentence) {
//     istringstream iss(sentence);

//     string word, longestEvenWord;

//     int longestEvenLength = 0;

//     while (iss >> word) {
//         int wordLength = word.length();
//         if (wordLength % 2 == 0 && wordLength >= longestEvenLength) {
//             longestEvenWord = word;
//             longestEvenLength = wordLength;
//         }
//     }

//     return longestEvenLength;
// }

// int main() {
//     string sentence = "Time to write great code";
//     int result = findFirstLongestEvenWord(sentence);
//     cout << result << endl;

//     return 0;
// }


// class cmp{
// public:
// bool operator ()(int &a ,int &b){
//     return a>b;
// }
// };


// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main(){
//     vector<int>arr = {180,165,170};

//     sort(arr.begin(),arr.end(),cmp());
    
//     for(auto i : arr){
//         cout<<i<<" ";
//     }



// }



// #include<iostream>
// #include<queue>
// #include<vector>

// using namespace std;

// class Graph { 
//      int V;
//     vector<vector<int>>adj_mat;
//     public:
//     Graph(int vertices): V(vertices){
//         adj_mat.resize(vertices,vector<int>(vertices+1,0));
//     }

//     void addedge(int u,int v){
//         adj_mat[u][v] = 1;
//     }

//    void print(){
//         for(auto i : adj_mat){
//             for(auto j : i)
//             {
//                 cout<<j<<" ";
//             }
//             cout<<endl;
//         }
//     }

//     void DFSPrint(int v,vector<bool>&visited){
//         visited[v] = 1;
//         cout<<v<<" ";

//         for(int i=0;i<=V;i++){
//             if(adj_mat[v][i] && !visited[i]){
//                 DFSPrint(i,visited);
//             }
//         }
//     }

//     void DFS(int v){
//         vector<bool>visited(V,false);
//         DFSPrint(v,visited);
//     }

//    void BFS(int s){
//         vector<bool>visited(V,false);
//         queue<int>q;
//         visited[s] = 1;

//         q.push(s);
//         while(!q.empty()){
//             s = q.front();
//             q.pop();
//             cout<<s<<" ";

//             for(int i =0;i<=V;i++){
//                 if(adj_mat[s][i] && !visited[i]){
//                     visited[i] = 1;
//                     q.push(i);
//                 }
//             }
//         }
//     }
// };


// int main(){
//     Graph g(7);
//     g.addedge(1,2);
//     g.addedge(2,3);
//     g.addedge(3,4);
//     g.addedge(4,1);
//     g.addedge(2,5);
//     g.addedge(5,6);
//     g.addedge(6,3);
//     g.addedge(5,7);
//     g.addedge(6,7);
    

//     g.print();
//     cout<<"the DFS Trversal is "<<endl;
//     g.DFS(2);
//     cout<<endl;
//     cout<<"the BFS traversal is "<<endl;
//     g.BFS(2);
//     return 0;
// }



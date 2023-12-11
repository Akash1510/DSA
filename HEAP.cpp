#include<iostream>
#include<queue>
#include<vector>
using namespace std;


// IMplimentaio of heap 1 and 2;


 // 1 
/*
class HEAP{
    public:
    int arr[100];
    int size;
    HEAP(){
        arr[0] = -1;
        size = 0;
    }
    void Insert(int value){
        size = size+1;
        int index = size;
        arr[index] = value;
        while(index>1){
            int parent = index/2;
            if(arr[parent] < arr[index]){
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else{
                return ;
            }
        }
    }

    void print(){
        for(int i = 1 ;i<= size;i++){
            cout <<arr[i]<< " ";
        }
        cout<<endl;
    }

    void Delete(){
        if(size == 0){
            cout <<"NOthing to Delete "<<endl;
            return ;
        }
        arr[1] = arr[size];
        size--;
        // step:3 take root node to correct postion
        int i = 1;
        while(i<size){
            int leftindex = 2*i;
            int rightindex = 2*i+1;
            if(leftindex<=size && arr[i]< arr[leftindex]){
                swap(arr[i],arr[leftindex]);
                i = leftindex;
            }
            else if(rightindex<=size && arr[i]< arr[rightindex]){
                swap(arr[i],arr[rightindex]);
                i = rightindex;
            }
            else{
                return ;
            }
        }
    }

};

void  heapify(int arr[],int n,int i){  //max heap
    int largest = i;
    int left = 2*i;
    int right = 2*i+1;
    if(left <= n && arr[largest] < arr[left]){
        largest = left;
    }
    if(right <= n && arr[largest] < arr[right]){
        largest = right ;
    }
    if(largest != i){
         swap(arr[largest] , arr[i]);       
         heapify(arr,n,largest);
    }
    
}

void MINheap(int arr[],int n , int i){
    int smallest = i;
    int left = 2*i+1;
    int right = 2*i+2;

    if(left < n && arr[smallest] > arr[left]){
        smallest = left;
    }
    if(right < n && arr[smallest] > arr[right]){
        smallest = right;
    }
    if(smallest != i){
        swap(arr[smallest],arr[i]);
        MINheap(arr,n,smallest);
    }
}

void heapsort(int arr[],int n){
    int size = n;
    while(size>1){
        //step 1: swap
        swap(arr[size],arr[1]);
        // step 2 : maxheap 
        size--;
        heapify(arr,size,1);
    }
}
int main(){
    HEAP h;
    h.Insert(50);
    h.Insert(55);
    h.Insert(53);
    h.Insert(52);
    h.Insert(54);
    h.print();
    cout<<endl;
    // cout<<"the deletion node in heap"<<endl;
    // h.Delete();
    // h.print();
    // h.Delete();
    // h.print();

    int arr[6] = {-1,54,53,55,52,50};
    int n =5;
    //heap  creation

    for(int  i = n/2;i>0;i--){
        heapify(arr,n,i);
    }
    cout<<"printing the head after heapfy  max heap"<<endl;
    for(int i=1;i<=n;i++){
        cout <<arr[i]<<" ";
    }
    cout<<endl;

     //creation of MIN heap

    // for(int i = (n/2)-1 ; i>=0 ;i--){
    //     MINheap(arr,n,i);
    // }
    // cout <<"THe minheap is "<<endl;
    //  for(int i=1;i<=n;i++){
    //     cout <<arr[i]<<" ";
    // }

    //heap sort
    cout<<"After sorting the heap "<<endl;
    heapsort(arr,n);

    for(int i = 1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

*/
//2 heap implmentaion using stl


/*
int main(){
    //implimentation of MAx heap 
    // priority_queue<int>mxheap;
    // int n = 5;
    // int element;
    
    // for(int i=0;i<n;i++){
    //     cout<<"ENter your Eelement "<<endl;
    //     cin >>element;
    //     mxheap.push(element);
    // }
    // //print  -->max heap 
    // cout<<"the max heap  is "<<endl;
    // while(!mxheap.empty()){
    //     cout <<mxheap.top()<<" ";
    //     mxheap.pop();
    // }

    // implimentation of min heap 

    priority_queue<int,vector<int>,greater<int>>minheap;
    int n =5;
    int element;
    for(int i=0;i<n;i++){
        cout<<"ENter your element "<<endl;
        cin>>element;
        minheap.push(element);
    }
    // print the min heap ;
    cout<<"the MInmum heap is "<<endl;
    while(!minheap.empty()){
        cout <<minheap.top()<<" ";
        minheap.pop();
    }
    return 0;
}
*/




// Heap Quetions

// K th smllest element 
/*
int kthsmallest(vector<int>&arr,int s,int e,int k){
    priority_queue<int>pq;
    //step1 ; push all array element in queue
    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    };
    //step2 remaining element 
    for(int i =k ;i<=e;i++){
        if(arr[i]<pq.top()){

            pq.pop();
            pq.push(arr[i]);
        }
    }
    //ans is priority queue
    int ans = pq.top();
    return ans;
}
int main(){
    int n;
    cout<<"Enter your size of Array "<<endl;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter your k "<<endl;
    cin>>k;
    int smallest_no = kthsmallest(arr,0,n-1,k);
    cout <<"The Smallest NO is "<<smallest_no<<endl;
}
*/

// Is Binary Tree is Heap ?

/*
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this->data = d;
        this ->left = NULL;
        this->right =NULL;
    }
};

node* tree(node* root){
    int data;
    cout <<"Enter  your Data  "<<endl;
    cin>>data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }
    cout<<"The Insertion of Element is in Left is "<<data<<endl;
    root->left = tree(root->left);
    cout <<"The insertion of Element is in Right is "<<data<<endl;
    root->right = tree(root->right);
    return root;
}

void print(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

int countnodes(node* root){
    //base case
    if(root == NULL){
        return 0;
    }
    int ans = 1 + countnodes(root->left) + countnodes(root->right);
    return ans;
}
bool isBST(node* root ,int index,int cnt){
    if(root == NULL){
        return true;
    }
    if(index >= cnt){
        return false;
    }
    else{
        bool left = isBST(root->left,2*index+1,cnt);
        bool right = isBST(root->right,2*index+2,cnt);
        return (left && right);
    }
}

bool ismaxorder(node* root){
    //leaf nodde
    if(root -> left == NULL && root->right == NULL ){
        return true;
    }
    if(root->right == NULL){
        return (root->data >root->left->data);
    }
    else{
        bool left = ismaxorder(root->left);
        bool right = ismaxorder(root->right);
    }
    return (left && right && (root->data > root->left->data && root->data > root->right->data));
}

bool isheap(node* root){
    int index = 0;
    int totalcount = countnodes(root);
    if(isBST(root , index,totalcount) && ismaxorder(root) ){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    node* root  = NULL;
    node* BT = tree(root);
    print(BT);
   cout<<(isheap(BT)?"this Binary tree is heap" : "this BInary tree is not heap")<<endl;
   return 0;
}
*/

// Merge to 2  max heap/

/*
void heapify(vector<int> &arr,int n,int i){
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;
    if(left < n && arr[largest] <arr[left] ){
        largest = left;
    }
    if(right < n && arr[largest] <arr[right ]){
        largest = right;
    }
    if(largest != i){
        swap(arr[largest], arr[i]);
        heapify(arr,n,largest);
    }
}

vector<int> mergetoheap(vector<int>&a , vector<int>&b,int n,int m){
    vector<int>ans;
    for(auto i : a){
        ans.push_back(i);
    }
    for(auto i: b){
        ans.push_back(i);
    }

    int size = ans.size();
    for(int i = (size/2)-1 ;i>=0 ; i--){
        heapify(ans,size,i);
    }
    return ans;
}
int main(){
   vector<int>mx1={10,5,6,2};
   int n = mx1.size();
   vector<int>mx2 = {12,7,9};
   int m = mx2.size();
   vector<int>ans;
   ans = mergetoheap(mx1,mx2,n,m);
   for(auto i: ans){
    cout<<i<<" ";
   }
   return 0;
}
*/
/*
// Minimum Cost of of ropes
long long mincost(long long arr[] , long long n){
    priority_queue<long long,vector<long long> ,greater<long long>>q;
    for(int i = 0;i<n;i++ ){
        q.push(arr[i]);
    }
    long long cost = 0;
    while(q.size() > 1){
        long long a = q.top();
        q.pop();
        long long b = q.top();
        q.pop();
        long long sum = a+b;
        cost += sum;
        q.push(sum);
    }
    return cost;
}

int main(){
    long long arr[4] = {4,3,2,6};
     long long  ans = mincost(arr,4);
     cout <<"the minimum cost is "<<ans<<endl;
     return 0;

}
*/


// find k th largest sum of SubArray

#include<algorithm>
/*
int kthlargestsum(vector<int>&arr,int k,int n){
    //ans store
    vector<int>ans;
    //travelling purpose
    for(int i=0;i<n;i++){
        int  sum = 0;
            sum +=arr[j];
        for(int j = i;j<n;j++){
            ans.push_back(sum);
        }
    }

    sort(ans.begin(), ans.end());
    return ans[ans.size() - k];

}


//space complixty is O(K);
int sumheap(vector<int>&arr,int k,int n){
    priority_queue<int ,vector<int>,greater<int>>mini;
    for(int i=0;i<n;i++){
       int sum = 0;
       for(int j = i;j<n;j++){
        sum +=arr[j];
        if(mini.size() < k){
            mini.push(sum);
        }
        else{
           if(sum > mini.top()){
            mini.pop();
            mini.push(sum);
           } 
        }
       }
    }
    return mini.top();
}

int main(){
    vector<int>arr = {1,2,4,5,6,3};
    int n = arr.size();
    int k;
    cout <<"Enter your k for tarvelling "<<endl;
    cin>>k;
    //Approach 1
    // int sum = kthlargestsum(arr,k,n); 
    // cout <<"the sum is "<<sum<<endl;
    // Approach 2
    int sum = sumheap(arr,k,n);
    cout <<"ths sum is "<<sum <<endl;
    return 0;
}
*/
#include <bits/stdc++.h> 



/*
// Merge k Sorted Arrays
class node{
    public:
    int data;
    int row;
    int col;
    node( int data, int row,int col){
        this->data = data;
        this->row = row;
        this->col = col;
    }
};

class compare{
    public:
    bool operator()(node* a,node* b){
        return (a->data > b->data);
    }
};

vector<int> KsortedArrays(vector<vector<int>>&arr , int k){
    vector<int>ans;
    priority_queue<node*, vector<node*>,compare>minheap;

    for(int row=0;row<k;row++){
        node* temp = new node(arr[row][0],row,0);
        minheap.push(temp);
    }

    while(minheap.size() >0){
        node* temp = minheap.top();
        ans.push_back(temp->data);
        minheap.pop();

        int row = temp->row;
        int col = temp->col;

        if(col+1  < arr[row].size() ){
            node* next = new node(arr[row][col+1],row,col+1);
            minheap.push(next);
        }
    }
    return ans;
}    
int main(){
   vector<vector<int>>arr = {{3,5,9},{1,2,3,8},{0,12,34,36,78}};
   int n = arr.size();
   int k = 3;
   vector<int>ans = KsortedArrays(arr,k);
   for(auto i :ans){
    cout<<i <<" ";
   }
   return 0;
}
*/

// Merge k sorted Linked List

// go  to the code studio

// HArd level Quetions

/*
class node{
    public:
    int data;
    int row;
    int col;
    node(int data,int r,int c){
        this->data = data;
        row = r;
        col = c;
    }
};

class compare{
    public:
    bool operator()(node* a,node* b){
        return a->data > b->data;

    }
};
int kthsorted(vector<vector<int>>&arr,int k,int n){
    int mini = INT_MAX;
    int maxi = INT_MIN;
    priority_queue<node* ,vector<node*>,compare>minheap;

    //step1 =create the minheap for starting element of each list and trackingmin/max element
    for(int i=0 ;i<k;i++){
        int element = arr[i][0];
        mini = min(mini , element);
        maxi = max(maxi,element);
        minheap.push(new node(element,i,0));
    } 
    int start = mini; 
    int end = maxi;
    while(!minheap.empty()){
        //for mini fetch
        node* temp = minheap.top();
        minheap.pop();
        mini = temp->data;

        //range or answer updation 
        if((maxi - mini) < (end-start)){
            start = mini;
            end = maxi;
        }
        //next element exits
        if(temp->col+1 < n ){
            maxi = max(maxi,arr[temp->row][temp->col+1]);
            minheap.push(new node(arr[temp->row][temp->col+1] ,temp->row,temp->col+1));
        }
        else{
            //next element exits for not
            break;
        }
 
    }
    return (end-start+1);

}
int main(){
    vector<vector<int>>arr = {{4, 7 ,30},{1 ,2, 12},{20 ,40, 50}};
    int k = 3;
    int n = arr.size();
    int ans;
    ans = kthsorted(arr, k, n);
    cout <<"the range of ans is "<<ans<<endl;
return 0;
}
*/


// median Straeams

/*

int signum(int a, int b) {
    if (a == b) {
        return 0;
    } else if (a > b) {
        return 1;
    } else {
        return -1;
    }
}

void callmedian(int element, priority_queue<int> &maxi, priority_queue<int, vector<int>, greater<int>> &mini, int &median) {
    switch (signum(maxi.size(), mini.size())) {
        case 0:
            if (element > median) {
                mini.push(element);
                median = mini.top();
            } else {
                maxi.push(element);
                median = maxi.top();
            }
            break;
        case 1:
            if (element > median) {
                mini.push(element);
            } else {
                maxi.push(element);
                mini.push(maxi.top());
                maxi.pop();
            }
            median = (mini.top() + maxi.top()) / 2;
            break;
        case -1:
            if (element > median) {
                maxi.push(mini.top());
                mini.pop();
                mini.push(element);
            } else {
                maxi.push(element);
            }
            median = (mini.top() + maxi.top()) / 2;
            break;
    }
}

vector<int> findMedian(vector<int> &arr, int n) {
    vector<int> ans;
    priority_queue<int> maxheap;
    priority_queue<int, vector<int>, greater<int>> minheap;
    int median = 0;
    for (int i = 0; i < n; i++) {
        callmedian(arr[i], maxheap, minheap, median);
        ans.push_back(median);
    }
    return ans;
}

int main() {
    vector<int> arr = {5 ,3, 8};
    int n = arr.size();
    cout<<"the median is "<<endl;
    vector<int> ans = findMedian(arr, n);
    for (auto i : ans) {
        cout << i << " ";
    }
    return 0;
}
*/







void  heapify(int arr[], int n ,int i){
    int largest =i;
    int left = 2*i;
    int right = 2*i+1;
    if(left <=n && arr[largest] <arr[left]){
        largest = left;
    }
    if(right <= n && arr[largest] < arr[right]){
        largest = right;
    }
    if(largest != i){
        swap(arr[largest], arr[i]);
        heapify(arr,n,largest);
    }
}

void heapsort(int arr[],int n){
    int size = n;
    while(size>1){
        swap(arr[size], arr[1]);
        size--;
        heapify(arr,size,1);
    }
}

int main(){
    int arr[9] ={-1,44,33,11,55,77,90,40,99};
    int n = 8;
     //heapify fisrt  //creation of max heap  
     for(int i = n/2;i>0;i--){
        heapify(arr,n,i);
     }
     for(int i=1;i<n;i++){
        cout << arr[i]<<" ";
    }
    //apply the heap sort

    heapsort(arr,n);
    
    cout<<endl;
    //sortted array is 
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
}
#include <iostream>
#include<queue>
#include<stack>
using namespace std;

/*
  
int main(){
  queue<int>q;

  int n,element;
  cout<< "Enter Your Size of Queue Want "<<endl;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>element;
    q.push(element);   
  }
  cout << "the size of Queue is "<< q.size() <<endl;

  while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
    
  }  
  cout << endl;

  if(q.empty()){
    cout << "The Queue is Empty "<<endl;
  }
  else{
    cout << " Queue is Not Empty "<<endl;
  }
  
  return 0;
}

*/


// implimentaion of the Queue Using the Array 

/*
  
class Queue{
  int *arr; 
  int front;
  int rear;
  int size;

  public:
Queue(int n){
  size = n;
  arr = new int [size];
  front = 0;
  rear = 0;
  
}
 bool isempty(){
   if(front == rear ){
     return true;
   }
   else {
     return false;
   }
 }

void push(int data){
  if(rear == size ){
    cout << "Queue is Full "<< endl;
    
  }
  else{
    arr[rear] = data;
    rear ++;
  }
}

int pop(){
  if(isempty()){
    return -1;
  }
  else{
    int ans = arr[front];
    arr[front] = -1;
    front ++;

    if(front == rear ){
      front = 0;
      rear = 0;
    }
    return ans;
  }

}

int Front (){
  if(front == rear ){
     return -1;
  }
  else {
    return arr [front];
  }
}

};

int main(){
  int n,element;
  cout << "Enter how many element store "<<endl;
  cin>>n;
  Queue q(n);
  
  for(int i =0;i<n;i++){
    cin>>element;
    q.push(element);
  }
  while(!q.isempty()){
    cout << q.Front() <<" ";
    q.pop();
  }
    return 0;
}
*/


// ---------------------------------- Circualr Queue -----------------------------

/*
class CircularQueue{
int *arr;
int front;
int rear;
int size;

public:
CircularQueue(int n){
  size = n;
  arr = new int[size];
  front = rear = -1;
}

void Push(int data){
  
  if((front == 0  && rear == (size-1) ) || (rear == (front-1 )%(size-1))){
        cout << "Queue is Overflow "<<endl;
    
  }
  else if (front == -1){
    front = rear = 0;
  }
  else if(rear == (size-1) && front != 0){
       rear = 0;
  }
  else{
    rear++;
  }
  arr [rear] = data;

    }

int Pop(){
  
  if(front == -1){
    return -1;
  }
  
  int ans = arr [front];
  arr [front] = -1;
  
  if(front == rear ){
    front = rear = -1;
    
  }
  else if(front == (size-1) ){
       front = 0;
  }
  else {
    front ++;
  }
  return ans;
}

int Front (){
  if(front == -1){
      return  -1;
  } 
  else{
    return arr [front];
  }
}

bool isempty(){
  if(front == rear ){
    return true;
  }
  else{
    return false;
  }
}

};

int main(){
  int n,element;
  cout <<"Enter your Size Queue "<<endl;
  cin>>n;
  CircularQueue q(n);
  for(int i=0;i<n;i++){
    cin>>element;
    q.Push(element);
  }
  cout <<endl;
  while(!q.isempty()){
    cout << q.Front()<<" ";
    q.Pop();
  }

  cout<<endl;
  
}

*/


//-------------------------------- Doubly Ended Queue ------------------------------------------------------------
/*

// By using stl IMplimentaion of Doubly Ended Queue

int main(){
  deque<int>d;
  
  d.push_front(14);
  d.push_front(12);
  d.push_back(34);
  
  cout<<endl;
  cout<<d.front()<<endl;
  cout <<d.back()<<endl;
  cout<<endl;
  
  d.pop_front();
  cout<<d.front()<<endl;
  cout <<d.back()<<endl;
  d.pop_back();
  cout<<endl;
  
  cout <<d.front()<<endl;
  cout <<d.back()<<endl;
  d.pop_back();
  
  if(d.empty()){
    cout<<"Queue is Empty "<<endl;
  }
  else{
    cout<<"Queue is Not Empty "<<endl;
  }
  return 0;
}

*/


// By using the Implimentaion of doubly ended queue by using class

  /*


class Deque{
  
 int *arr;
 int front;
 int rear;
 int size;

public:

Deque(int n){
  size = n;
  arr =new int [size];
  front = -1;
  rear = -1;
}

void pushFront (int x){

  if(isFull()){
    cout<<" Queue is Full "<<endl;
  }
  else if(isEmpty()){
    front = rear = 0;
    
  }
  else if(front == 0 && rear != (size-1)){
    front = size-1;
  }
  else{
    front--;
  }

  arr[front] = x;
  
}

void PushRear(int x){
  if(isFull()){
    cout<<"Queue is Full "<<endl;
    
  }
  else if(isEmpty()){
    front = rear  = 0;
  }
  else if(rear == (size-1) && front != 0){
    rear = 0;
  }
  else{
    rear++;
  }
  arr[rear] = x;
}



int popFront (){
  if(isEmpty()){
    cout<<"Queue is Empty "<<endl;
    return -1;
    
  }
  int ans = arr [front];
  arr[front] = -1;

  if(front == rear ){
    front = rear = -1;
  }
  else if(front == (size-1)){
    front = 0;
  }
  else{
    front++;
  }
  return ans;
}

int popRear (){
  if(isEmpty()){
    return -1;
  }
  int ans = arr [rear];
  arr [rear] = -1;
  if(front == rear ){
    front = rear = -1;
    
  }
  else if(rear == 0){
    rear = (size-1);
  }
  else{
    rear--;
  }
  return ans;
}


int getFront(){
  if(isEmpty()){
    return -1;
  }
  else{
    return arr[front];
  }
}

int getRear(){
  if(isEmpty()){
    return -1;
  }
  else{
    return arr[rear];
  }
}

bool isEmpty(){
  if(front == -1){
    return true;
  }
  else{
    return false;
  }
}

bool isFull(){
  if((front == 0 && rear == (size-1)) || (front !=0 && rear == (front-1)%(size-1)) ){
    return true; 
  }
  else{
    return false;
  }
}

};

int main(){
  Deque q(5);
  q.pushFront(34);
  q.PushRear(23);
  q.pushFront(56);
  q.PushRear(12);
  q.pushFront(89);
  
  cout<<q.getFront();
  cout<<q.getRear();
  cout<<endl;
  cout<<q.isEmpty();
  cout<<endl;
  cout<<q.isFull();
  cout<<endl;
  q.popFront();
  cout<<q.getFront();
  cout<<endl;
  q.popRear();
  cout<<q.getRear();
}
  */


// Problems on Queue

// Reverse of Queue

/*
 int main() {

  queue<int> q;
  stack<int> reverse;

  cout << "Enter your Size of Queue " << endl;
  int n, element;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> element;
    q.push(element);
  }
  
  while (!q.empty()) {
    int num = q.front();
    reverse.push(num);
    q.pop();
  }
  
  cout << "Reverse of the Queue is " <<endl;
  
    while (!reverse.empty()) {
    cout<<  reverse.top() << " ";
    reverse.pop();
  }
  
  return 0;
}

*/

// Find the negtive integer in every k side window

/*

#include<vector>

vector<long long> pfni(long long arr[],long long int n, long long int k) {
    deque<long long> q;
    vector<long long> ans;

    for (int i = 0; i < k; i++) {
        if (arr[i] < 0) {
            q.push_back(i);
        }
    }

    if (q.size() > 0) {
      
        ans.push_back(arr[q.front()]);
    } 
    else {
        ans.push_back(0);
    }

    for (int i = k; i < n; i++) {
        if (!q.empty() && ((i - q.front()) >= k)) {
          
            q.pop_front();
        }

        if (arr[i] < 0) {
          
            q.push_back(i);
        }

        if (q.size() > 0) {
          
            ans.push_back(arr[q.front()]);
        } 
        else {
            ans.push_back(0);
        }
    }
    return ans;
}

int main() {
  
    long long int  arr[5] = {-8, 2, 3, -6, 10};
    long long int n = 5;
    long long int k;
    cout << "Enter the window size k: ";
    cin >> k;
    vector<long long> ans = pfni(arr,n, k);
  
    for (auto i : ans) {
        cout << i << " ";
    }

    return 0;
}
*/


// Reverse the elemenrt is Queue in k Group :



/*
queue<int> reverse(queue<int>q,int n){
  int k;
  stack<int>s;
  cout << "Enter your Group to Reverse "<<endl;
  cin >> k;
  for(int i=0 ;i<k;i++){
    int value = q.front();
    s.push(value);
    q.pop();
  }

  while(!s.empty()){
    int value = s.top();
    q.push(value);
    s.pop();

  }
    int t = q.size()-k;
  while(t--){
    int value = q.front();
    q.pop();
    q.push(value);
  }
  return q;
  
}

int main(){
  int n ,element;
  queue<int>q;
  cout <<"Enter your size "<<endl;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >>element;
    q.push(element);  
  }


  queue<int>ans = reverse(q,  n) ;
  
  while(!ans.empty()){
    cout <<ans.front()<< " ";
    ans.pop();
  }
  
  return 0;
}
*/



// Non Reapeating character in a stream
/*

#include<map>
string firstNonrepeatingchar(string A){
     map<char,int>m;
     string ans = "";
  queue<char>q;

   for(int i=0;i<A.length();i++){
     char ch = A[i];
     q.push(ch);
     m[ch]++;

     while(!q.empty()){
       if(m[q.front()]>1){
         q.pop();
       }
       else{
         ans.push_back(q.front());
         break;
       }

       
     }
     if(q.empty()){
       ans.push_back('#');
     }
   }
  return ans;
  
}

int main(){
  cout <<"Enter your String "<<endl;
  string str;
  cin >> str;
  cout << "Output String is"<<firstNonrepeatingchar(str);
  return 0;
}

  */



 /*
#include<stack>
 //interleav the first half element into the half of queue with second half 
void interleavQueue(queue<int>&q){

  stack<int>s;
  int mid = q.size()/2;

  //push first half Element in the stack 
  for(int i=0;i<mid ;i++){
    s.push(q.front());
    q.pop();

  }
  //pop the element form the stack and insert into the retuen back in
  // Queu,e
  while(!s.empty()){
    q.push(s.top());
    s.pop();

  }

  //pop the first element form queue push into queue

  for(int i=0;i<mid;i++){
    q.push(q.front());
    q.pop();
  }
  //Again push first half element in the stack
  for(int i=0; i<mid; i++){
    s.push(q.front());
    q.pop();
  }

  //Now the Interleav the elements
  while(!s.empty()){
    q.push(s.top());
    s.pop();
    q.push(q.front());
    q.pop();

  }
}
 int main(){
  queue<int>q;
  cout<<"Enter your size of Queue is "<<endl;
  int n;
  cin>>n;
  int element;
  for(int i=0;i<n;i++){
    cin>>element;
    q.push(element);
  }

  interleavQueue(q);
  int lenght = q.size();
  for(int i=0;i<lenght;i++){
    cout << q.front()<< " ";
    q.pop();

  }
  return 0;
 }
 */




// K Queues in Array 

/*
class KQueue{
  public:
  int n;
  int *front;
  int *rear;
  int *next;
  int *arr;
  int freespot;
  int k;
  public:
  KQueue(int n,int k){
    this->k = k;
    this->n= n;
    front = new int [k];
    rear =new int [k];
    for(int i=0;i<k;i++){
      front[i] = -1;
      rear[i] = -1;
    }
    next = new int[n];
    for(int i=0;i<n;i++){
      next[i]= i+1;

    }
    next[n-1] = -1;
    arr = new int[n];
    freespot = 0;
  }
  void enQueue(int data ,int qn){
    //overflow
    if(freespot == -1){
      cout << "Space is OverFlow "<<endl;
      return;
    }
    //find the first index
    int index = freespot;

    //update the index 
    freespot = next[index];

    //check the whethe first element 
    if(front[qn-1] == -1){
      front[qn-1] = index;

    }
    else{
      next[rear[qn-1]] = index;

    }
    //update the index
    next[index] = -1;
    //update the rear

    rear[qn-1] = index;

    //push element 
    arr[index] = data;

  }

  int Dequeue(int qn){

//overflow
if(front[qn-1] ==-1){
  cout << "Queue is UnderFlow " <<endl;
  return -1;

}
//find the index to pop
  int index = front[qn-1];
//now front will update
  front[qn-1] = next[index];
//freespot ko manage karo
  next[index] = freespot;
  freespot = index;
  return arr[index];
}

};

int main(){
  //q(size,no of queue)
  KQueue q(10,3);
  q.enQueue(10,1);
  q.enQueue(23,2);
  q.enQueue(15,1);
  q.enQueue(20,2);
  q.enQueue(25,1);
  
   cout<<q.Dequeue(1)<<endl;
   cout<<q.Dequeue(2)<<endl;
   cout<<q.Dequeue(1)<<endl;
   cout<<q.Dequeue(2)<<endl;
   cout<<q.Dequeue(1)<<endl;
   return 0;
}
*/







// Sum of Maximum and Minimun element in subArrays of Size; correct ans is 18
/*
int solve(int *arr ,int n,int k){
  deque<int>maxi(n);
  deque<int>mini(n);

  //Addition of First k size Window 
  
  for(int i=0;i<k;i++){
    while(!maxi.empty() && arr[maxi.back()] <=arr[i]){
      maxi.pop_back();
    }
    while(!mini.empty() && arr[mini.back()]>=arr[i]){
      mini.pop_back();
    }
  maxi.push_back(i);
  mini.push_back(i);
}
int ans = 0;
ans += arr[maxi.front()] + arr[mini.front()];

//remaining Element Processing 
for(int i=k;i<n;i++){
  while (!maxi.empty() && (i-maxi.front())>=k){
    maxi.pop_front();
  }
  while(!mini.empty() && (i-mini.front())>=k){
    mini.pop_front();
  }

  //Now Addition dislaying
  while(!maxi.empty() && arr[maxi.back()]<=arr[i]){
    maxi.pop_back();
  }
  while(!mini.empty() && arr[mini.back()]>=arr[i])
  {
    mini.pop_back();
  }
  maxi.push_back(i);
  mini.push_back(i);

  ans += arr[maxi.front()]+arr[mini.front()];

}
return ans;
}
int main(){
  int arr[7] = {2,5,-1,7,-3,-1,-2};
  int k=4;
  cout << "sum is " <<solve(arr,7,k);
  return 0;
}
*/

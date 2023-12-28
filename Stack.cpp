#include<iostream>
#include<stack>
using namespace std;


// By Stl using the Stack is Implimented 
/*
int main(){
    //initiallization of stack
    stack<int>s;
    //insert the element in the stack
    s.push(23);
    s.push(33);
    s.push(67);
    s.push(34);
    cout<<"the top elemenet is "<<s.top()<<endl;
    s.pop();
    cout<<"the top elemet is "<<s.top();
    s.pop();
    cout<<"the element is "<<s.top()<<endl;
    if(s.empty()){
        cout<<"which is Empty "<<endl;
    }
    else{
        cout<<"which is Not A Empty "<<endl;
    }
    return 0;
}
*/

//Stack is Implimented by the UserDefind Class

/*
class Stack{
    public:
    int*arr;
    int top;
    int size;

    Stack(int size){
        this->size=size;
        arr = new int[size];
        top=-1;
    }
    
    void push(int element ){
        //atleast one element space is present
        if((size-top)>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack is OverFlow "<<endl;
        }
    }

    void  pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack is Overflow "<<endl;
        }
    }

    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            return -1;
        }
    }

    bool isEmpty(){
        if(top==-1){
            // cout<<"Stack is Empty "<<endl;
            return true;
        }
        else{
            // cout<<"The Stack is not Empty "<<endl;
            return false;
        }
    }

};

int main(){
    Stack s(5);
    s.push(23);
    s.push(3);
    s.push(34);
    s.push(2);
    s.push(1);

    cout<< s.peek() <<endl;
    if(s.isEmpty()){
        cout<<"Stack is Empyt "<<endl;
    }
    else{
        cout<<"Stack is Not Empty "<<endl;
    }
    return 0;
}

*/


// Implimentation of Two Stacks using the 1 Array

/*
class TwoStack{
    public:
    int *arr;
    int top1;
    int top2;
    int size;

    // bheaviour of Stack
    TwoStack(int size){
        this->size=size;
        arr=new int [size];
        top1 = -1;
        top2 = size;
    }
 //for Stack 1

    void push1(int element ){
        if((top2-top1)>1){
            top1++;
            arr[top1] = element; 
        }

    }

//for the stack 2
    void push2(int element ){
        if((top2-top1)>1){
            top2--;
            arr[top2] = element;
        }
    }

    // pop operation on stack 1
    int pop1(){
        if(top1>=0){
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else{
            return -1;
        }
    }

    //pop from stack 2 
    int pop2(){
        if(top2<size){
            int ans = arr [top2];
            top2++;
            return ans;
        }
        else{
            return -1;
        }
    }

   int peek1(){
    if(top1>=0){
        return arr[top1];

    }
    else{
        return -1;
    }
   }

   int peek2(){
    if(top2<=size){
        return arr[top2];
    }
    else{
        return -1;
    }
   }
};

int main(){
    TwoStack s1(3);
    TwoStack s2(3);
    //stack 1
    s1.push1(23);
    s1.push1(34);
    s1.push1(56);
    s1.push1(12);
    // stack 2
    s2.push2(3);
    s2.push2(21);

    cout<<s1.peek1()<<endl;
    cout<<s2.peek2()<<endl;
    cout<<"pop the element "<<s1.pop1()<<endl;
    cout<<"pop the element "<<s2.pop2()<<endl;
    cout<<s1.peek1()<<endl;
    cout<<s2.peek2()<<endl;
    return 0;
};
*/

// Reverse A string using stack
/*

int main(){
    string str;
    cout<<"Enter your String to reverse "<<endl;
    getline(cin,str);

    stack<char>s;
    for(int i=0;i< str.length();i++){
        char ch = str [ i ];
        s.push(ch);
    }
    
    string ans  = " ";

    while(!s.empty()){
       char ch = s.top();
       ans.push_back(ch);
        s.pop();

    }

    cout<<"The Answer is in the form of Reverse  string "<<ans <<endl;
    return 0;
}
*/

// Delete the Middle Element Form the Stack 

/*
void deleteMiddle(stack<int>&s,int count ,int size){
    //base case
    if(count == (size)/2){
        s.pop();
        return ;
    }

    int num = s. top();

    s. pop();
    //recursive call 
    deleteMiddle(s,count+1,size);

    s.push(num);

}

int main(){
    stack<int>s;
    //take user input push element 
    int n;
    cout<<"how much element you wnat to  insert "<<endl;
    cin>>n;
    int element;
    for(int i=0;i<n;i++){
        cout<<"Enter your Eleement "<<endl;
        cin>>element;
        s.push(element); 
    }
    int size = s.size();

   // now delete the Middle Element
   int count = 0; 
   deleteMiddle(s,count,size);
   cout<<endl<<endl;

   while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
   }
   return 0;
    
}
*/


// Check Valid Parenthesis
/*
bool is_vaild_parenthisis(string &exp ){
    stack<char>s;
    for(int i=0;i<exp.length();i++){
        char ch = exp [i];
        if(ch =='(' || ch == '{' || ch == '['){
            s.push(ch);
        }
        else{
            //closing backets 
            if(!s.empty()){
                char top = s. top();
                if( (ch == ')' && top == '(')  || (ch == '}' && top == '{') ||  (ch == ']' && top == ']')){
                    s.pop();
                }  
           
            }
            else
            {
                return true;
            }
        }
    }

    // if(s.empty()){
    //     return true;
    // }
    // else{
    //     return false;
    // }
}
int main(){
    string exp = "[({})]";
  bool ans = is_vaild_parenthisis(exp);
  cout<<ans<<endl;
    if(is_vaild_parenthisis(exp)){
        cout<<" String is Vaild for Parenthasis  "<<endl;
    }
    else{
        cout<<" String is not is Not Vaild for the Parenthesis "<<endl;
    }
    return 0;
}
*/






// int main(){
//     stack<int>s;
//     int n,element;
//     cout<<"How many element you want to store in the stack "<<endl;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>element;
//         s.push(element);     
//     }

//     while(!s.empty()){
//         cout<<s.top()<<" ";
//         s.pop();
//     }
//     return 0;
// }



























// Largest Rectangular Area of histogram

#include<vector>
/*
vector<int> nextsmallerElement(vector<int>arr,int n){
    stack <int> s;
    s.push(-1);

    vector <int> ans(n);

    for(int i =n-1; i>=0;i-- ){
        int current = arr [ i];
        while( s.top ()  != -1 && arr [ s.top()] >= current){
            s.pop();
        }
      //ans ka Top 
      ans [i] = s. top();
      s. push( -1); 
    }
    return ans;
}

vector<int> prevSmallerElement(vector<int>arr ,int n){
    stack <int >s ;
    s.push(-1);

    vector<int>ans(n);

    for(int i = 0; i<n ;i++){
        int current = arr[i];
        while( s.top() !=-1 && arr [s.top()]>=current){
            s.pop();
        }
        // ans ka top/
        ans [i] = s.top();
        s.push(-1);

    }
    return ans;
}
int largestRectangulrArea(vector<int>&heights, int n){
    vector<int>next(n);

    next = nextsmallerElement(heights,n);

    vector<int>prev(n);

    prev = prevSmallerElement(heights,n);

    int area = 0 ;
    for (int  i=0 ;i<n ;i++){
        int l = heights[i];
        if( next [i] == -1 ){
            next[i] = n;
        }
        int b = next [i] - prev[i] - 1;
        int newarea = l*b;
        area = max (area , newarea);

    }
    return area;
    }

int main(){
    vector<int>heights  = {2,1,5,6,2,3};
    int n = heights.size();

    int area ;

    area = largestRectangulrArea(heights,n);

    cout<<"the Area is "<<area <<endl;
    return 0;
}
*/

// CeleBrity Problem

/*

bool knows(int **&arr , int a,int b ,int n){
    if(arr[a][b] == 1){
        return true;
    }
    else{
        return false;
    }
}
int Celebrity(int **&arr,int n ){
    stack<int>s;

    //step 1 :  Push all Elements in the Sky
    for(int i =0 ;i < n;i++){
        s.push(i);
    }

    //step 2 : get elements to compare them

    while (s.size()>1)
    {
        int a = s. top();
        s. pop();
        int  b = s. top();
        s .pop ();

        if( knows (arr , a ,b, n)){
            s. push (b);
        }
        else{
            s . push (a);
        }
    }
    int ans  = s. top();
    // step 3 : single Element in stack is potential celebrity so verify 
    int zerocount = 0;
    for (int i = 0;i<n;i++){
        if(arr[ans][i] == 0){
            zerocount++;
        }
    }

    // if all Zerose: -
    if( zerocount != n){
        return -1;
    }

    //coloumr check 
    int onecount = 0 ;
    for ( int i = 0;i< n;i++){
        if(arr[i][ans] == 1){
            onecount++;
        }

    }
    if( onecount != n-1){
        return -1;
    }

    return ans;
}

int main(){
    int n;
    cout<<"Enter Your Col and rows "<<endl;
    cin>>n;
    int **arr = new int * [n];
    
    //creating the 2d Array 
    for(int i =0 ;i<n;i++){
        arr[i] = new int [n];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
        
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }

    int ans = Celebrity(arr , n );

    cout<<ans<<" ";
    return 0;
}

*/

// MAX Rectangle in Binary matrix with all 1's

/*

vector<int> nextsmallerElement(int* arr ,int n){
    stack<int>s;
    s.push(-1);
    vector<int>ans;

    for(int i = n-1 ; i>=0;i--){
        int current = arr[i];
        while((s.top() != -1) && (arr[s.top()]>= current)){
            s. pop();
        }
        //ans is stack ka top
        ans [i] = s.top();
        s.push(i);
    }
    return ans;
}
vector<int> prevsmallerElement(int* arr,int n){
    stack<int>s;
    s.push(-1);
    vector<int>ans;
    for(int i = 0; i<n ;i++){
        int current = arr [i];
        while ((s.top()!=-1) && (arr[s.top()] >= current))
        {
            s.pop();
        }

        //ans is stack ka top
        ans [i] = s. top();
        s.push(i);
        
    }
    return ans;

}

int largestRectangleArea(int* heights , int n){
    
    vector<int>next(n);
    next = nextsmallerElement(heights , n);
    vector<int>prev(n);
    prev = prevsmallerElement(heights , n);
    
    int area = 0 ;
    for(int i = 0 ;i<n ;i++){
        int l = heights[i];

        if(next[i] == -1){
            next[i] = n;

        }
        int b = next [i] - prev[i] - 1;
        int newarea = l*b;
        area  =  max(area ,newarea);

    }
    return area;

}

int maxarea (int **arr ,int n ,int m){
    //coompute the area for the first Row 

    int area = largestRectangleArea(arr[0],m);
    for(int i =1 ;i< n; i++){
        for(int j =0 ; j<m ;j++){
            //if update : by using adding the Previous row's value 
            if(arr[i][j] != 0){
                arr[i][j] = arr[i][j] + arr[i-1][j];

            }
            else{
                arr [i] [j] = 0;
            }
        }
        //Entire row is upadted now 
        // int newarea = largestRectangleArea(arr [i], m);
        area  = max(area ,largestRectangleArea(arr [i], m) );
    }
    return area;

} 


int main(){
    cout<<"Enter your size of Col and Rows "<<endl;
    int n,m;
    cin>>n>>m;
    int **arr = new int *[n];
    for(int i=0 ; i<n ; i++){
        arr[i] = new int [n];
    }
    
    for(int i = 0 ; i<n ;i++){
        for(int j = 0 ; j<m ;j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0 ; i<n ;i++){
        for(int j = 0 ; j<m ;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int area = maxarea(arr , n, m);

    cout<<"The maximum area is "<<area<<endl;
    

    return 0;
}

*/


// N Stack s in An Array/

/*
class NStack

{
    int *arr;
    int *top;
    int *next;
    int n,s;
    int freespot;

public:
    // Initialize your data structure.
    NStack(int N, int S)
    {
        n=N;
        s=S;
        arr = new int [s];
        top = new int [n];
        next = new int [s];

        //intialise the top
        for(int i=0 ;i<n;i++){
            top[i] = -1;
        }

        //initialisze the next
        for(int i=0;i<s;i++){
            next[i] = i+1;
        }
        next [s-1] = -1;

        //inttialize the freespot
        freespot = 0;
    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        //check the overflow condition
        if(freespot == -1){
            return false;
        }

        //find Index
        int index = freespot;
        // insert the element 
        arr[index] = x;
        // update the freespot

        freespot = next [index];
        //update the next 

        next[index] = top [m-1];

        //update top
        top [m-1] = index;

        return true;

    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
        if(top[m-1] == -1){
            return -1;
        }
        int index = top[m-1];
        top [m-1] = next [index];

        next [index] = freespot;

        freespot = index;

        return arr[index]; 
    }
};

/*
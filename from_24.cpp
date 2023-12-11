#include <iostream>
using namespace std;

// Learn about Pointer

// int main(){
// two types of Declaration

// int a=3;
// // int *ptr=&a;
// int *ptr=0;
// ptr=&a;
// cout<<"the Address of a "<<&a<<endl;
// cout<<"the address of ptr"<<ptr<<endl;
// cout<<"the value at Addres is  "<<*ptr<<endl;

// int p=4;
// int *ptr=&p;
// cout<<"the size of Normal variable is  "<<sizeof(p)<<endl;
// cout<<"the size of pointer variable is "<<sizeof(*ptr)<<endl;

// pointer Arthimatic

// int i=9;
// int *ptr=&i;

// //now for the value now
// cout<<"the value of i before the Increament is "<<i<<endl;
// (*ptr)=(*ptr)+1;
// cout<<"the value of After the Increament is "<<i<<endl;

// cout<<"the address before Increament is "<<ptr<<endl;
// ptr=ptr+1; // increase by 4 bits
// cout<<"the Address After the Increment is "<<ptr<<endl;

// copy of pointer
//  char t='a';
//  char *pt=&t;
//  char *g=pt;
//  cout<<"the value of t is "<<" "<<t<<endl;
//  cout<<"the Address of ptr "<<" "<<pt<<endl;
//  cout<<"the value at the *pt "<<" "<<*pt<<endl;
//  cout<<"the Address  at the g "<<g<<endl;
//  cout<<"the value at the "<<" "<<*g<<endl;
//  return 0;
// }

// pointer with the Arrays and Fuction

// int main(){
// int arr[10]={0};
// cout<<sizeof(arr)<<endl;
// representaion shows same memory Address with same meaning
// cout<<"the Address at first memory location "<<arr;
// cout<<"the Address at first memory location "<<&arr;
// cout<<"the Address at first memory location "<<&arr[0];
// int *a= &arr[0];
// cout<<sizeof(a)<<endl;
// cout<<sizeof(*a)<<endl;
// cout<<a+1<<endl;
// cout<<*a+1<<endl;
// cout<<*(a+1)<<endl;
// cout<<0[a]<<endl;

// symbol cannot be changed

// int arr[10]={1,23};
// // arr=arr+1;//not possible
// int *ptr=&arr[0];
// cout<<"Before the increament of pointer Adress "<<ptr<<endl;
// cout<<"before the Increament value of pointer  "<<*ptr<<endl;
// ptr=ptr+1;
// cout<<ptr<<endl;
// cout<<"After the Increament the pointer "<<*ptr<<endl;

// charcter pointer

// char ch[5]="abcd";
// cout<<ch<<endl;
// cout<<&ch<<endl;
// cout<<sizeof(ch)<<endl;
// //cout behaviour is different for the characters

// char *c=&ch[0];
// cout<<c<<endl;

// char temp='z';
// cout<<temp<<endl;

// char *p=&temp; //it will show the character up to it does not get the null character
// cout<<p;

//     return 0;
// }

// pointer with Array and Functions

// void print(int *ptr)
// {

//     cout << *ptr << endl;
// }

// int update(int *ptr)
// {
//     return *ptr = *ptr + 1;
// }

// int getSum(int arr[], int n)
// {
//     cout << sizeof(arr) << endl;
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += i[arr];
//         // sum+=arr[i]
//     }

//     return sum;
// }
// int main()
// {

//     int value = 5;
//     int *ptr = &value;
//     cout << ptr << endl;
//     cout << *ptr << endl;
//     // print(ptr);
//     int a = update(ptr);
//     cout << a;

//     int arr[5] = {1, 2, 3, 4, 5};
//     int SUM;
//     // SUM = getSum(arr, 5);
//     // partwise operation on Array
//     SUM = getSum(arr + 2, 3);
//     cout << SUM << endl;
// }

// Double Pointer
// void update(int **p2)
// {
//     // p2 = p2 + 1;  ////no change
//     // *p2 = *p2 + 1; //address at is Increamented
//     **p2 = **p2 + 1;
// }

// int main()
// {
//   int i = 5;
//   int *ptr = &i;
//   int **ptr1 = &ptr;

//   cout << &i << endl;
//   cout << ptr << endl;
//   cout<<&ptr<<endl;
//   cout<<*ptr<<endl;
//   cout<<*ptr1<<endl;
//   cout<<**ptr1<<endl;

// int i = 8;
// int *p = &i;
// int **p1 = &p;

// cout << endl;
// cout << "before" << i << endl;
// cout << "before Address " << p << endl;
// cout << "before Address of p2" << p1 << endl;

// update(p1);

// cout << "After the value is " << i << endl;
// cout << "The Address After Update of p is " << p << endl;
// cout << "The Address After the Update is p1" << p1 << endl;
// cout << endl;

// practise Quetions
// 1
// int first = 8;
// int second=18;
// int *ptr=&second;
// *ptr=9;
// cout<<first<<endl<<second<<endl;

// 2
//  int first=8;
//  int *p=&first;
//  cout<<(*p)++<<endl;
//  cout<<first<<endl;

// //3
// int *p=0;
// int first=110;
// *p=first;
// cout<<*p<<endl;  //segmentation fault

// //4
// int first=9;
// int second=11;
// int *third=&second;
// first=*third;
// second=*third+2;
// cout<<first<<" "<<second<<endl;

// 5

// float f=12.5;
// float p=21.5;
// float *ptr=&f;
// (*ptr)++;
// *ptr=p;
// cout<<*ptr<<" "<<f<<" "<<p<<endl;

// 6
//  int arr[6]={11,21,31};
//  int *p=arr;
//  cout<<p[2]<<endl;

// //7
// int arr[]={11,12,13,14,15};
// cout<<*(arr)<<" "<<*(arr+3)<<endl;

// 8
//  int arr[3]={1,2,4};
//  int *ptr=arr++;  // symbol can t be increamenting or Decrementing at all
//  cout<<*ptr<<endl;

// 9
//  int first =100;
//  int *p=&first;
//  int **q=&p;
//  int second = ++(**q);
//  int *r=*q;
//  ++(*r);
//  cout<<first<<" "<<second<<" "<<endl;

//     return 0;
// }

// reference varable and Dynamic Memory and Static Memeory Allocation

// 1} Reference variables

// void update(int &k){
//   k=k+1;
// }
// int main(){
//   //same Memory Block With different name
//   // int i=9;
//   // int &j=i;
//   // cout<<i<<endl;
//   // cout<<j<<endl;
//   // j++;
//   // cout<<i<<endl;
//   // i++;
//   // cout<<j<<endl;

// int a=8;
//   cout<<"the value Before the Update "<<a<<endl;
//   update(a);
//   cout<<"the Value After the update "<<a<<endl;

//   return 0;

// }

// static  Memory allocation and Dynamic memory Allocation

// 1 D ARRAY DYMAMIC MEMORY ALLOCATION

// void reverse(int *arr,int n){
//   int start=0;
//   int end=n-1;
//   while(start<=end){
//     swap(arr[start++],arr[end--]);
//   }
// }
// int main(){
//   //this is my static Memeory Alloctaion
//   // int arr[8];

//   // Dynamic Memory Allocaation

//   int size;
//   cout<<"Enter your Size of Array is "<<endl;
//   cin>>size;
//   int *arr=new int[size];  // for 1d Array Dyanamic Memory Allocation

//   for(int i=0;i<size;i++){
//     cin>>arr[i];
//   }

//   for(int i=0;i<size;i++){
//     cout<<arr[i]<<" ";
//   }
//   cout<<endl;

//   reverse(arr,size);

//   for(int i=0;i<size;i++){
//     cout<<arr[i]<<" ";
//   }
//   delete []arr;

//   return 0;

// }

// 2D ARRAY DYNAMIC MEMORY ALLOCATION

// int main(){
// // static Memory Allocation
//   // int arr[9][8];

//   // Dynamic Memory Allocation

//   int size;
//   cout<<"Enter your Of row And Coloumn  "<<endl;
//   cin>>size;

//   // createing 2d array by using the Dynamic Memory Allocation

//   int **arr=new int *[size]; //decalring
//   //int **arr=new int*[col/row] and iteration asper the user row/coloumns
//   for(int i=0;i<size;i++){
//     arr[i]=new int[size];

//   }

//   // taking a input

//   for(int i=0;i<size;i++){
//     for(int j=0;j<size;j++){
//       cin>>arr[i][j];
//     }
//   }

//   // printing the Array

//   for(int i=0;i<size;i++){
//     for(int j=0;j<size;j++){
//       cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
//   }
//   for(int i=0;i<size;i++){
//     delete [] arr[i];
//   }
//   delete [] arr;

// }

// jagged array  Quetion

// int main() {
//     int row1[] = {1, 2, 3, 4};
//     int row2[] = {5, 6};
//     int row3[] = {7, 8, 9};
//     int* jagged[] = {row1, row2, row3};
//     int sizes[] = {4, 2, 3};

//     cout << "The entered jagged array is:" << endl;
//     for (int i = 0; i < 3; i++) {
//         int* ptr = jagged[i];
//         for (int j = 0; j < sizes[i]; j++) {
//             cout << *(ptr+j) << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// important keywords in cpp

// 1. macros

// #define PI 3.14  //macros
// int main(){
//   int r=5;
//   double area=PI*r*r;
//   cout<<"the Area is "<<area<<endl;
// return 0;
// }

// 2.> inline Function function calls is replaced by  function bodies
// inline int getmax(int &a,int &b){
//   // if(a!=0){
//   // cout<<"inline function is not called "<<endl;
//   //  return 1;

//   // }
//   // else{
//   //   return -1;
//   // }  //this is no. of lines will not works as inline it should only one
// return a>b?a:b;
// }
// int main(){
//   int a=1;
//   int b=2;
//   int ans=0;
//   ans=getmax(a,b);
//   cout<<ans<<endl;
//   a=a+3;
//   b=b+1;
//   ans=getmax(a,b);
//   // cout<<b<<endl<<endl<<a<<endl;
//   cout<<ans;
//   return 0;

// }

// default Argument
// void print(int a[],int size,int start=0){
//   // for(int i=0;i<size;i++){
//   //   cout<<a[i]<<" ";

//   // }
//   cout<<endl;

//   for(int i=start;i<size;i++){
//     cout<<a[i]<<" ";
//   }
//   cout<<endl;

// }

// int main(){
//   int a[5]={1,3,4,5,6};
//   int size=5;
//   // print(a,size);
//   print(a,size,NULL);
//   return 0;
// }

// const variable

// void print(int a){

//   cout<<a<<endl;
//   a++;
//   cout<<a; //for only this scope
// }

// int main(){
//   const int  a=0; // vlaue for const variable cant be modefied
//   cout<<a;

//   print(a);
//   return 0;
// }

// Recursion - Function Call itself

// int factorial(int n){
//   //base condtions
//   if(n==0){
//     return 1;
//   }

//   return n*factorial(n-1);
// }

// int main(){
//   int n;
//   cout<<"Enter your to find the Factorial of number "<<endl;
//   cin>>n;
//   int ans;
//   ans=factorial(n);
//   cout<<"the factorial "<<n<<"is "<<ans<<endl;
//   return 0;
// }

// Combination by using Recursion

// int fact_n(int n){
//   //base condition
//   if(n==0){
//     return 1;
//   }

//   return n*fact_n(n-1);
// }

// int fact_r(int r){
//   if(r==0){
//     return 1;
//   }

//   return r*fact_r(r-1);
// }

// int fact_n_r(int n,int r ){
//   int ans=n-r;
//   if((ans)==0){
//     return 1;
//   }

//   return ans*fact_n(ans-1);
// }

// int main(){
//   cout<<"Enter value of n"<<endl;
//   int n;
//   cin>>n;
//   cout<<"Enter your value of r"<<endl;
//   int r;
//   cin>>r;

// int f_n,f_r,f_n_r;
//  f_n= fact_n(n);
//  f_r= fact_r(r);
//  f_n_r= fact_n_r(n,r);
//  int ans;
//  ans=(f_r)*(f_n_r);
//  cout<<"the factorial "<<n<<"C"<<r<<" is "<<(f_n)/ans<<endl;
//  return 0;
// }

// power of 2

// int power(int n){
//   //base case
//   if(n==0){
//     return 1;
//   }
//   int smallerproblem=power(n-1);
//   int biggerproblem=2*smallerproblem;
//   return biggerproblem;
// }
// int main(){
//   int n;
//   cout<<"Enter your power"<<endl;
//   cin>>n;
//   int ans;
//   ans=power(n);
//   cout<<ans;
// }

// print counting

// int  print(int n){
//   //base case
//   if(n==0){
//     return 1;
//   }

//  print(n-1);
//  cout<<n<<endl;

// }

// int main(){
//   int num;
//   cout<<"Enter your NUmber "<<endl;
//   cin>>num;
//   print(num);

// }

// to reach home

// void reachhome(int src,int dest){
//   cout<<"the sourc is "<<src<<" the destination is "<< dest  <<endl;
//   if(src==dest){
//     cout<<"to reach Home"<<endl;
//     return;
//     }
//     src++;
//     return reachhome(src,dest);

// }

// int main(){
//   int dest=10;
//   int src=1;
//   cout<<endl;
//   reachhome(src,dest);
// }

// Fibonacchi series

// int fibonacchi(int n){
//   //base condition
//   if(n==0){
//     return 0;
//   }
//   if(n==1){
//     return 1;
//   }

//   int ans=fibonacchi(n-1)+fibonacchi(n-2);
//   return ans;

// }

// int main(){
//   int n;

//   cout<<"the fibonacchi series is term index "<<endl;
//   cin>>n;
//   int ans;
//   ans=fibonacchi(n);
//   cout<<ans<<endl;
// }

// N stairs

// int wayclimborbystair(long long stairs ){
//   //base condition
//   if(stairs<0){
//     return 0;

//   }
//   if(stairs==0){
//     return 1;
//   }

//   int ans=wayclimborbystair(stairs-1)+wayclimborbystair(stairs-2);
//   return ans;
// }
// int main(){
//   cout<<"ENter Your destination to reach you want reach "<<endl;
//   int step;
//   cin>>step;
//  int ans;
//  ans= wayclimborbystair(step );
//  cout<<ans<<endl;
//   return 0;
// }

// calling of Digts by Letter of Arrray by wording

// void  say_digit(int n,string arr[]){
//   //base condition
//   if(n==0){
//     return ;

//   }
//   int digit=n%10;
//   n=n/10;
//   say_digit(n,arr);
//   cout<<arr[digit]<<endl;
// }

// int main(){
// string arr[10]={"zero","one","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
// int num;
// cout<<"Enter your NUmber is "<<endl;
// cin>>num;
// say_digit(num ,arr);
// return 0;

// }

// Check Array is Sorted Or not

// bool is_Sorted(int arr[],int n){

//   //base condtion
//   if(n==0 || n==1){
//     return true;
//   }

//   if(arr[0]>arr[1]){
//     swap(arr[0],arr[1]);
//     return false;
//   }
//   else{
//     bool remaining_part=is_Sorted(arr+1,n-1);
//     return remaining_part;

//   }

// }

// int main(){
//   int arr[5]={2,4,9,9,9};
//   int size=5;
//   bool ans;
//   ans=is_Sorted(arr,size);
//   cout<<endl;
//   // cout<<"Answer is "<<ans<<endl;
//   if(ans){
//     cout<<"Array is Sorted"<<endl;
//   }
//   else{
//     cout<<"Array is Unsorted "<<endl;
//   }
//   return 0;
// }

// Sum of Element in Array

// int sum(int arr[],int n){
//   //base condition
//   if(n==0){
//     return 0;

//   }
//   if(n==1){
//     return arr[0];
//   }
//     int ans=0;
//     ans=arr[0]+sum(arr+1,n-1);
//     return ans;
//   }

// int main(){
//   int arr[5]={1,2,3,4,5};
//   int size=5;

//   int ans=sum(arr,size);
//   cout<<"The sum Is  "<<ans;
//   return 0;

// }

// Linear Search

// bool linear_search(int arr[],int size,int key){
//   //base condition
//   if(size==0){
//     return false;
//   }

//   if(arr[0]==key){
//     return true;
//   }

//   int reamaingpart=linear_search(arr+1,size-1,key);
//   return reamaingpart;
// }

// int main(){
//   int arr[5]={1,45,5,6,78};
//   int  size  = 5;
//   int key;
//   cout<<"Enter your key "<<endl;
//   cin>>key;

// bool ans;

//   ans=linear_search(arr,size,key);
//   if(ans){
//     cout<<"Element is Present "<<endl;

//   }
//   else{
//     cout<<"Element is Absent "<<endl;
//   }
//   return 0;

// }

// Binary search

// bool binary_search(int arr[],int size,int start,int end,int key){
//     //base condition
//     if(start>end)
//     {
//       return false;
//     }

//     int mid=start+(end-start)/2;

//     if(arr[mid]==key){
//       return true;
//     }
//     if(arr[mid]<key){
//       return binary_search(arr,size,mid+1,end,key);

//     }
//     else{
//       return binary_search(arr,size,start,mid-1,key);
//     }

// }

// int main(){
//   int size;
//   cout<<"Enter your Size "<<endl;
//   cin>>size;
//   int key;

//   int *arr= new int[size];
//   for(int i=0;i<size;i++)
//   {
//     cin>>arr[i];
//   }
//   for(int i =0 ; i<size; i++ ){
//     cout<<arr[i]<<" ";
//   }
//   cout<<endl;

// cout<<"Enter your key "<<endl;
// cin>>key;
//   bool ans;
//   int start=0;
//   int end=size-1;
//   ans=binary_search(arr,size,start,end,key);

//   if(ans){
//     cout<<"Present"<<endl;
//   }
//   else{
//     cout<<"Absent"<<endl;
//   }
// for(int i=0;i<size;i++){
//       delete [ ]arr;
// }
//   return 0;

// }

// Recusrsion In String

// Reverse of string

// void reverse(string str,int i,int j,int n){
//   if(i>j){
//     return;
//   }

//   swap(str[i],str[j]);
//   i++;
//   j--;
//   reverse(str,i,j,n);

//   cout<<str<<" ";

// }
// int main(){
//   string  str;
//   getline(cin,str);
//   int len=str.length();

//   int i=0;
//   int j=len-1;

//   reverse(str,i,j,len);

//   return 0;
// }

// Check Pallindrome
// bool  check_pallindrome(string str,int i,int j ){
//   //base condition
//   if(i>j){
//     return true;
//   }
//   if(str[i]>='a' && str[j]<='z'){
//     return true;
//   }
//   else{
//     str[i]=str[i]-'A'+'a';
//   }
//   if(str[i]!=str[j]){
//     return false;

//   }
//   else{
//     return  check_pallindrome(str,i+1,j-1);
//   }
// }

// int main(){
//   string str;
//   getline(cin,str);
//   int len=str.length();
//   int i=0;
//   int j=len-1;

//   bool is_pallindrome;

//   is_pallindrome= check_pallindrome(str,i,j);

//   if(is_pallindrome){
//     cout<<"Its the pallindrme "<<endl;
//   }
//   else{
//     cout<<"Its is not pallindrome "<<endl;
//   }
//   return 0;

// }

// find the Exponent of Any Number is

// int power_value(int number,int power ){
//   if(power==0){
//     return 1;
//   }
//   if(power==1){
//     return number;
//   }

//   int ans=power_value(number,power/2);
//   //if power is even
//   if(power%2==0){
//     return ans*ans;
//   }
//   else{  //power is odd
//     return number*ans*ans;
//   }
// }

// int main(){
//   int num,power;
//   cout<<"Enter your Number "<<endl;
//   cin>>num;
//   cout<<"Enter your power "<<endl;
//   cin>>power;
//   int value;
//   value = power_value(num,power );
//   cout<<"the value at num and power   "<<num<<" and "<<power<<" is "<<value<<endl;
//   return 0;
// }

// Bubble sort

// void sort(int arr[],int n){
//   if(n==0 || n==1){
//     return;
//   }
//   for(int i=0 ;i<n-1;i++){
//     if(arr[i]>arr[i+1]){
//       swap(arr[i],arr[i+1]);
//     }
//   }
//   //remaining part is done by
//   sort(arr,n-1);

// }

// int main(){
//   int size;
//   cout<<"Enter your Size "<<endl;
//   cin>>size;

//   int *arr=new int [size];
//   for(int i=0;i<size;i++){
//     cin>>arr[i];
//   }
//   cout<<endl;
//   for(int i=0;i<size;i++){
//     cout<<arr[i]<<" ";
//   }
//   cout<<endl;

//   sort(arr,size);

//   for(int i=0;i<size;i++){
//     cout<<arr[i]<<" ";
//   }
//   delete []arr;
//   return 0;
// }

// merge Sort

/*
void merge(int *arr, int start, int end)
{
  int mid = (start + end) / 2;
  int len1 = mid - start + 1;
  int len2 = end - mid;

  int *first = new int[len1];
  int *second = new int[len2];

  // copy values

  int mainArrayIndex = start;
  for (int i = 0; i < len1; i++)
  {
    first[i] = arr[mainArrayIndex++];
  }

  mainArrayIndex = mid + 1;
  for (int i = 0; i < len2; i++)
  {
    second[i] = arr[mainArrayIndex++];
  }

  // merge 2 sorted Arrays

  int i = 0;
  int j = 0;
  mainArrayIndex = start;
  while (i < len1 && j < len2)
  {
    if (first[i] < second[j])
    {
      arr[mainArrayIndex++] = first[i];
      i++;
    }
    else
    {
      arr[mainArrayIndex++] = second[j];
      j++;
    }
  }

  // cpoy remaining Element
  while (i < len1)
  {
    arr[mainArrayIndex++] = first[i++];
  }

  while (j < len2)
  {
    arr[mainArrayIndex++] = second[j++];
  }

  delete[] first;
  delete[] second;
}

void merge_sort(int *arr, int start, int end)
{

  // base case
  if (start >= end)
  {
    return;
  }

  int mid = start + (end - start) / 2;
    for (int i = 0; i < end; i++)
  {
    cout << arr[i] << " ";
    cout<<endl;
  }

  // for the left side sort
  merge_sort(arr, start, mid);
  // for the right part sort
  merge_sort(arr, mid + 1, end);

  // merge
  
  merge(arr, start, end);
}

int main()
{
  int size;
  cout << "enter your size of Array " << endl;
  cin >> size;
  int *arr = new int[size];
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  cout << endl;

  // printting the Array
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  merge_sort(arr, 0, size - 1);

  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  delete[] arr;
  return 0;
}
*/

// Quick Sort  : -

/*

int partition(int arr[],int s,int e ){

  int pivot =arr[s];
  int cnt=0;
  for(int i=s+1;i<=e;i++){
    if(arr[i]<=pivot){
      cnt++;
    }
  }

  int pivotIndex=s+cnt;
  //for repalce at the pivot Index
  swap(arr[pivotIndex],arr[s]);

  int i=s;
  int j=e;
  
  cout<<endl;
  while(i<pivotIndex && j>pivotIndex){
    //for less than or equal to pivot element
    while(arr[i]<=pivot){
      i++;
    }
    //for greatter than the pivot element
    while(arr[j]>pivot){
      j--;
    }
  // if left side some element are the grater theh

    if(i<pivotIndex && j>pivotIndex){
    swap(arr[i++],arr[j--]);
    } 

  }
  

  return pivotIndex;

}

void quicksort(int arr[],int s,int e){
  if(s>=e){
    return ;
  }

  int p;

  p=partition(arr,s,e);


  //for left part sort
  quicksort(arr,s,p-1);
  //for right part
  
  quicksort(arr,p+1,e);
}

int main(){
  int arr[8]={20,54,48,37,12,92,86,7};
  int n=8;
  quicksort(arr,0,n-1);

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  return 0;
}
*/
// Subset And Subsequences

// 1> power set/subsets

#include <vector>
#include <algorithm>

// void powerset(vector<int>&nums,vector<vector<int>>&result,vector<int>&subset,int index){
//   //add current subset to the result
//   result.push_back(subset);

// // iterates by array elements
//   for(int i=index;i<nums.size();i++){

//     //include the element
//     subset.push_back(nums[i]);

// //recursively its working and start to end
//  powerset(nums,result,subset,i+1);

// //exclude the element (backtrack)
//   subset.pop_back();
//   }

// }
// int main(){
//   vector<int>nums={1,2,3};
//   vector<vector<int>>result;
//   vector<int>subset;

//   //call for the Power Set
//   powerset(nums,result,subset,0);

//   //result

//   cout<<"The power set is "<<endl;
//   for( const auto&set:result){
//     cout<<"{";
//     for(int num:set){
//       cout<<num<<"";
//     }
//     cout<<"}";
//   }
//   return 0;
// }

// subsequences of Characters

// void generateSubsequences(string &str,vector<string>&result,string &current,int index){

//   //add subsequenes to result
//   result.push_back(current);

//   //iterate the string charaters

//   for(int i=index;i<str.length();i++){
//     //include the current characters
//     current.push_back(str[i]);

//     //recuresion is going on
//     generateSubsequences(str,result,current,i+1);

//     // now exclude the current charaters (backtrack)
//     current.pop_back();
//   }
// }
// int main(){
//   string i="abc";
//   vector<string>result;
//   string current="";

//   //call the Subsequences function

//   generateSubsequences(i,result,current,0);

//   cout<<"Display result "<<endl;

//   for(const auto &subseq:result){
//     cout<<subseq<<endl;
//   }
//   return 0;
// }

// Phone KEy pad Problem

// void solve(string digit,string result,int index,vector<string>&ans,string mapping[]){
//   //base case
//   if(index>=digit.length()){
//     ans.push_back(result);
//     return;
//   }

//   int number=digit[index]-'0';
//   string value=mapping[number];

//   for(int i=0;i<value.length();i++){
//     result.push_back(value[i]);
//     solve(digit,result,index+1,ans,mapping);
//     result.pop_back(); //backtracking
//   }

// }

// int main(){
//  string digit="23";
//  vector<string>ans;
//   if(digit.length()==0){
//     return 0;
//   }
//   string result=" ";
//   int index=0;
//   string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

//   solve(digit,result,index,ans,mapping);
//  for(auto i:ans){
//     cout<<i<<endl;
//   }

//   return 0;
// }

// Permutaion of  String
// void permutation(vector<int>nums,int index,vector<vector<int>>&ans){
//   if(index>=nums.size()){
//     ans.push_back(nums);
//     return ;
//   }

//   for(int i=index;i<nums.size();i++){
//     swap(nums[index],nums[i]);
//     permutation(nums,index+1,ans);
//     //backtracking
//     swap(nums[index],nums[i]);
//   }
// }

// int main(){
//   vector<int>nums={1,2,3};
//   vector<vector<int>>ans;

//   int index=0;
//   permutation(nums,index,ans);
//   //printing the output
//   cout<<endl;
//    for( const auto i :ans){
//     cout<<"{";
//     for(int num:i){
//       cout<<num<<" ";
//     }
//     cout<<"}"<<" ";
//   }

// return 0;
// }

// Rat in maze problem 1

// bool is_safe(int x,int y,int n,vector<vector<int>>visited,vector<vector<int>>m){
//   if((x>=0 && x<n) && (y>=0 && y<n) && visited[x][y]==0 && m[x][y]==1){
//     return true;
//  }
//  else{
//     return false;
//  }

// }
// void solve(vector<vector<int>>&m,int n,vector<string>&ans,int x,int y,vector<vector<int>>visited,string path){
//   //base case
//   //your reach to the destination
//   if(x==(n-1) && y==(n-1)){
//     ans.push_back(path);
//     return ;
//   }

//   visited[x][y]=1;
//   //4 choises
//   //down
//   int newx=x+1;
//   int newy=y;
//   if(is_safe(newx,newy,n,visited,m)){
//     path.push_back('D');
//     solve(m,n,ans,newx,newy,visited,path);
//     path.pop_back();
//   }
//   //left
//    newx=x;
//    newy=y-1;
//   if(is_safe(newx,newy,n,visited,m)){
//     path.push_back('L');
//     solve(m,n,ans,newx,newy,visited,path);
//     path.pop_back();
//   }
//   //Right
//   newx=x;
//    newy=y+1;
//   if(is_safe(newx,newy,n,visited,m)){
//     path.push_back('R');
//     solve(m,n,ans,newx,newy,visited,path);
//     path.pop_back();
//   }
//   //UP
//    newx=x-1;
//    newy=y;
//   if(is_safe(newx,newy,n,visited,m)){
//     path.push_back('U');
//     solve(m,n,ans,newx,newy,visited,path);
//     path.pop_back();
//   }

//    visited[x][y]=0;

// }

// int main(){
//   int n=4;
//   vector<vector<int>>m={{1,0,0,0},
//   {1,1,0,1},
//   {1,1,0,0},
//   {0,1,1,1}};
//   vector<string>ans;
//   int srcx=0;
//   int srcy=0;
//   vector<vector<int>>visited=m;
//   for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//       visited[i][j]=0;
//     }
//   }

//   string path=" ";
//   solve(m,n,ans,srcx,srcy,visited,path);
//   sort(ans.begin(),ans.end());
//  for(auto i:ans){
//   cout<<i<<" ";
//  }
//   cout<<endl;
//   return 0;
// }

// Object oriented progarmming/
// part 1

// #include<cstring>

// class Hero{

//   private:
//   int health;
//   // static int time;  //for the Accecss by static function
//   public:
//   // static int time;
//   char *name;
//   char level;
// //creating a constructor
// //1 default constructor
// Hero(){
//   cout<<"the constructor is Called "<<endl;
//    name=new char[100];
// }

// //parameterized constructor
// Hero(int health,char level){
//   // using this keywod here
//   cout<<"the value can now Acces"<<endl;
//   this->health=health;
//   this->level=level;
// }

// // copy construtor for by passing the object
// Hero (Hero& temp){
//   char *ch=new char [strlen(temp.name)+1];
//   strcpy(ch,temp.name);
//   this->name=ch;
//   this->health=temp.health;
//   this->level=temp.level;
//   cout<<"this is Called "<<endl;
// }
// void print(){
//   cout<<endl;
//   cout<<"[ name :  "<<this->name<<",";
//   cout<<"health "<<this->health;
//   cout<<"level is "<<this->level<<" ]";
//   cout<<endl<<endl;
// }
// // getters
//   int gethealth(){
//     return health;
//   }

//   char getlevel(){
//     return level;
//   }

// //setters
//   void set_health(int h){
//     health=h;
//   }
//   void set_level(char ch){
//     level=ch;
//   }

//   void setname(char name[] ){
//     // strcpy(this->name,name);
//     this->name=name;

//   }

//   ~Hero(){
//     cout<<"the destructor is Called "<<endl;
//   }

// //  static function is use for the access the value at the public and privte places
// // static int random(){
// //   return time;
// // }
// };

// // int Hero::time=67;   //static variable declaring

// int main(){
//   //static memory Allocation
//   // cout<<"now for h1 obj "<<endl;
//   // Hero h1(23,'t');
//   // h1.level='A';
//   // h1.set_health(100);
// //   cout<<h1.gethealth()<<endl;
// //  cout<<h1.getlevel()<<endl;;

// // Dynamic Memory Allocation
// // cout<<"Now for h2 Object "<<endl;
// //  Hero *h2=new Hero;
//  Hero *h2=new Hero(67,'o');
// //  h2->set_health(78);
// //  h2->set_level('B');
// //  cout<<h2->gethealth()<<endl;
// //  cout<<h2->getlevel()<<endl;

// //  Hero h3(h1);//implicitly copiing
// cout<<endl;
// Hero h3;
// h3.set_health(47);
// h3.set_level('k');
// char name[6]="Akash";
// // h3.setname(name);
// h3.setname(name);

// h3.print();

// Hero h4(h3);
// // Hero h4=h3;
// h4.print();

// h3.name[0]='p';
// h3.print();
// h4.print();
// h4=h3;  //copy Assinment  operator
// h3.print();
// h4.print();
// delete h2;

// //static keyword
// // cout<<"the static time is "<<Hero::time<<endl;  //through out the public Places

// // cout<<"the value of time by function Accesss which is private time is "<<Hero::random()<<endl;

// // cout<<"the function called Explicitly "<<endl;
// //  cout<<"the value is After copy is "<<h3.gethealth()<<endl;
// //  cout<<"the value after the copy is "<<h3.getlevel()<<endl;

//   return 0;
// }

// OOP __ part 2

// Inheritance by modes public ,private,protected

// class  Human{
//   // private:
//   // int height;
//   public:
//   int height;
//   int weight;
//   int age;

//   int getAge(){
//     this->age;
//   }

//   void setweight(int w){
//     this->weight=w;
//   }
// };

// class Male:public  Human{
//   public:
//   string color;

//   void sleep(){
//     cout<<"Man is Sleeping "<<endl;
//   }

// //  By using function can Access the protected memebers of parent Class/
//   int setheight(){
//     return this->height;
//   }
// };

// int main(){

// All date at the public Specifires Conversion
/*  //private
Male m2;
// cout<<m2.height; //not Accessible
cout<<m2.setheight()<<endl;
*/

/*//protected Specifiers
Male m1;
// cout<<m1.height; //not Accessible
cout<<m1.setheight()<<endl;
*/

/*   //public specifiers
 Male obj1;
cout<< obj1.age<<endl;
cout<<obj1.height<<endl;
cout<<obj1.weight<<endl;
obj1.setweight(67);
cout<<obj1.weight<<endl;
obj1.sleep();
*/

// protected data
// public mode
/*
Male m1;
// cout<<m1.height<<endl; //not Accessible in protected and private
cout<<m1.setheight()<<endl;
*/

// Male m1;
//  cout<<m1.height<<endl;

//  private Data members Cannot be Accessible by or inherited by the class

//  return 0;
// }

// Inheritance its Types
// single inheritance

// class Animal{
//   public:
//   int age;
//   int weight;

//   void Bark(){
//     cout<<"BArking "<<endl;
//   }
// };

// class Dog:public Animal
// {

// };

// int main(){
//   Dog d1;
//  cout<< d1.age<<endl;
//   d1.Bark();
//   return 0;
// }

// Mutilevel Inheritance

// class Animal{
//   public:
//   void Bark(){
//     cout<<"barking "<<endl;
//   }
// };

// class Dog :public Animal{

// };

// class BoolDog: public Dog{

// };

// int main(){
//   BoolDog d1;
//   d1.Bark();
//   return 0;
// }

// Multiple Inheritance

// class Animal{
//   public:
//   void bark(){
//     cout<<"Barking"<<endl;
//   }
// };

// class Human{
//   public:
//   void speak(){
//     cout<<"speaking "<<endl;
//   }
// };

// class Hybrid:public Animal,public Human{

// };

// int main(){
//   Hybrid h1;
//   h1.speak();
//   h1.bark();
//   return 0;
// }

// Herichical Inheritance

// class Animal{
//   public:
//   void speak(){
//     cout<<"I am in Animal Class"<<endl;
//     cout<<"speaking "<<endl;
//   }
// };

// class Dog :public Animal{
//   public:
//   void bark(){
//     cout<<"i ma inside the Dog Class "<<endl;
//     cout<<"barking"<<endl;
//   }
// };

// class Cat:public Animal{
//   public:

//   void crying (){
//     cout<<"I am Inside the cat class"<<endl;
//     cout<<"crying "<<endl;
//   }
// };

// int main(){
//   // Animal a1;
//   // a1.speak();

//   // Dog d1;
//   // d1.bark();
//   // d1.speak();

//   // Cat c1;
//   // c1.speak();
//   // c1.crying();

//     return 0;
// }

// hybrid Inheritance - combination of the multievel inheritance and Heririchal inheritance

// class A{
//   public:
//   void func(){
//     cout<<" I am Inside the class A "<<endl;
//   }
// };

// class D{
//   public:
//   void func2(){
//     cout<<"I am Inside the class D "<<endl;
//   }
// };

// class B:public A{
//   public:
//   void func3(){
//     cout<<"I am Inhrits form A now in B"<<endl;
//   }
// };

// class C:public A,public D{
//   public:
//   void func4(){
//     cout<<"I am in the  class c and Inherits form the A and D "<<endl;
//   }
// };

// int main(){
// //   A obj1;
// //   obj1.func();

//   // B obj2;
//   // obj2.func3();
//   // obj2.func();

//   C obj3;
//   obj3.func();
//   obj3.func2();
//   obj3.func4();
//   return 0;
// }

// Inheritance Ambiguity

// class A{
//   public:
//   void sayhello(){
//     cout<<"Hi  am Akash "<<endl;
//   }
// };

// class B{
//   public:
//   void sayhello(){
//     cout<<"Hi am Ram "<<endl;
//   }
// };

// class C:public A,public B{
// };

// int main(){
//   C obj1;
//   // obj1.sayhello();
//   obj1.A::sayhello();
//   obj1.B::sayhello();
//   return 0;
// }

// Polymorphism

// Function Overloading

// class A{
//   public:
//   void hello(){
//     cout<<"hello Am Akash "<<endl;
//   }

//   void hello(string name){
//     cout<<"hello I am Repeat "<<endl;
//   }
// };

// int main(){
//   A obj1;
//   obj1.hello("Akash");
//   obj1.hello();
//   return 0;

// }

// Operator Overloading

// class B{
//   public:
//   int a;
//   int b;

//   void operator +(B &obj){
//     int value;
//     value=this->a+obj.b;
//     cout<<"the value is "<<value <<endl;

//   }

//   void operator ++(){
//     int value;
//     value=this->a;
//     ++value;
//     cout<<"the value after is increament  "<<value<<endl;
//   }

//   void operator  == (B &obj){
//     int value=this->a;
//     if(value==obj.b){
//       cout<<"the value is Same "<<endl;
//     }
//     else{
//       cout<<"the value is not Same "<<endl;
//     }
//   }
// };

// int main(){
//   // B obj1;
//   // obj1.a=3;
//   // obj1.b=9;
//   // obj1+obj1;

//   // B obj2;
//   // obj2.a=3;
//   // ++obj2;

//   B obj3;
//   obj3.a=4;
//   obj3.b=3;
//   obj3==obj3;

//   return 0;
// }

// Run time Polymorphism

// function override

// class Animal{
//   public:
//   void speak(){
//     cout<<"Speaking "<<endl;
//   }
// };

// class Dog:public Animal{
//   public:
//   void speak(){
//     cout<<"Dog is Barking "<<endl;
//   }
// };

// int main(){
//   Dog obj1;
//   obj1.speak();
//   return 0;
// }


#include <iostream>
#include <vector>

// int partition(vector<int>& arr, int start, int end) {
//     int pivot = arr[end];
//     int i = start - 1;

//     for (int j = start; j < end; ++j) {
//         if (arr[j] < pivot) {
//             ++i;
//             swap(arr[i], arr[j]);
//         }
//     }

//     std::swap(arr[i + 1], arr[end]);
//     return i + 1;
// }

// void quickSort(vector<int>& arr, int start, int end) {
//     if (start < end) {
//         int pivotIndex = partition(arr, start, end);

//         quickSort(arr, start, pivotIndex - 1);
//         quickSort(arr, pivotIndex + 1, end);
//     }
// }

// int main() {
//  vector<int> arr = {20,54,48,37,12,92,86,7};
//     int n = arr.size();

//     cout << "Original array: ";
//     for (int i = 0; i < n; ++i) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     quickSort(arr, 0, n - 1);

//     cout << "Sorted array: ";
//     for (int i = 0; i < n; ++i) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }


#include <iostream>
using namespace std;

/*
void insertion_sort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] < arr[j]) {

                int temp = arr[i];
                int k = i;
                while (k > j) {
                    arr[k] = arr[k-1];
                    k--;
                }
                arr[k] = temp;
            }
        }
    }
}

int main() {
    int arr[8] = {8, 2, 5, 3, 1, 0, 9, 10};
    insertion_sort(arr, 8);
    for (int i = 0; i < 8; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
*/

// Buccket Sort


#include <iostream>
#include <vector>
/*

void insertionSort(vector<int>& bucket) {
    int n = bucket.size();
    for (int i = 1; i < n; ++i) {
        int key = bucket[i];
        int j = i - 1;

        while (j >= 0 && bucket[j] > key) {
            bucket[j + 1] = bucket[j];
            --j;
        }

        bucket[j + 1] = key;
    }
}

void bucketSort(vector<int>& arr) {
    // Find the maximum and minimum values in the array
    int max_val = arr[0];
    int min_val = arr[0];

    for (int num : arr) {
        max_val = max(max_val, num);
        min_val = min(min_val, num);
    }

    // Calculate the range of each bucket
    int bucket_range = (max_val - min_val) / arr.size() + 1;

    // Create empty buckets
    vector<vector<int>> buckets(arr.size());

    // Distribute elements into buckets
    for (int num : arr) {
        int index = (num - min_val) / bucket_range;
        buckets[index].push_back(num);
    }

    // Sort each bucket using insertion sort
    for (auto& bucket : buckets) {
        insertionSort(bucket);
    }

    // Concatenate sorted buckets to get the sorted array
    arr.clear();
    for (const auto& bucket : buckets) {
        arr.insert(arr.end(), bucket.begin(), bucket.end());
    }
}

int main() {
    vector<int> arr = {3, 1, 8, 6, 4, 2, 5};

    cout << "Original array: ";
    for (int num : arr) {
       cout << num << " ";
    }
       cout << endl;

    bucketSort(arr);

     cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
*/


#include <iostream>
#include <vector>
#include <algorithm>

// Function to find the maximum number in the array
int findMax(std::vector<int>& arr) {
    int max = arr[0];
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Using counting sort to sort elements based on significant places 
void countingSort(vector<int>& arr, int exp) {
    const int n = arr.size();
    vector<int> output(n, 0);
    vector<int> count(10, 0);

    // Count occurrences unit places is the present 
    for (int i = 0; i < n; i++) {
        count[(arr[i] / exp) % 10]++;
    }

    // Update count[i] to store actual position of this digit in output[]
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    // Build the output array
    for (int i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    // Copy the output array to arr[], so that arr[] now contains sorted numbers
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

// Radix Sort function
void radixSort(std::vector<int>& arr) {
    int max = findMax(arr);

    // Do counting sort for every digit
    for (int exp = 1; max / exp > 0; exp *= 10) {
        countingSort(arr, exp);
    }
}

int main() {
    // Example usage
    // std::vector<int> arr = {170, 45, 75, 90, 802, 24, 2, 66};
    vector<int>arr = {3,6,1,8,4,2,0,5,12};
    
    std::cout << "Original array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    radixSort(arr);

    std::cout << "Sorted array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

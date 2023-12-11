#include <iostream>
using namespace std;

// void printarray(int Arr[],int size){
//     cout<<"printing the array"<<endl;
//     // print array

//     for(int i=0;i<size; i++){
//         cout<<Arr[i]<<" ";


//     }
//     cout<<"th printing  done "<<endl;

// }

//  void display(char ch[],int value){
//     cout<<"your chracters are the "<<endl;

//     for(int i=0;i<value; i++){
//         cout<<ch[i]<<" ";
//     }
//     cout<<"the printing is done now";
// }

// int main(){
    // declare
    // int number[9];
    // cout<<"value of index " <<number[3];
    // cout<<"value of index " <<number[20];
    // cout<<"Everything is fine"<<endl<<endl;

    // initializing the array

    // int second[3]={1,2,4};
    // cout<<"the value of array is "<<second[0]<<endl;
    // int third[14]={2,3};
    // cout<<third[0]<<endl;
    // by function access the/ array
    // int third[12]={2,3};
    // int n=15;
    // printarray(third,n);
    // cout<<"the size of array is "<<sizeof(third)/sizeof(int);   //how much length is thst i can find out but actual present element length not found
    // initiallizing array with 0  its possible initializing with 1 is not possible

    // int Arr[5]={1};
    // int s=5;
    // printarray(Arr,s);


    // the array of other data type

    // char ch[5]={'a','k','a','s','h'};
    // int v=5;
    // display(ch,v);

    // double firstDouble[5]={1.23,1.33,232.433};
    // cout<<firstDouble[0];
    // float j[5]={1.2,2.4,4.3,2,8};
    // cout<<"the value of array is "<<j[0];

    // bool t[3]={true,0,false};
    // cout<<"the value of the of the bool is "<<t[2];

    // cout<<"every thing is fine"<<endl;

    
//     return 0;

// }

// int getmax(int num[],int n){
//     int max=__INT_MAX__;
    
//     for(int i=0;i<n;i++){
//         if(num[i]>max){
//             max=num[i];

//         }
//     }
//     return max;

// }

// int getmin(int num[],int n){
// int min=WINT_MIN;
// for(int i=0;i<n;i++){
//     if(num[i]<min){
//         min=num[i];

//     }
// }

// }

// int main(){
//     int size;
//     cin>>size;
//     int num[100];
//     for(int i=0;i<size;i++){
//         cin>>num[i];
//     }
//     cout<<"the maximum of element in array is "<<getmax(num,size);
//     cout<<"the minimum element in array is "<<getmin(num,size);

//     return 0;

    
//}

// linear search

// bool Search(int Arr[],int size,int key){
//     for(int i=0;i<size;i++){
//         if(Arr[i]==key){
//             return 1;
//         }
//     }
//     return 0;
// }

// int main(){
//     int Arr[10]={1,34,-2,5,7,9,32,56,2,90};
//     int key;
//     cout<<"Enter your key"<<endl;
//     cin>>key;
//     cout<<"Call the function"<<endl;
//     // make on varibale by name found
//      bool found=Search(Arr,10,key);
//      if(found){
//         cout<<"key is present"<<endl;
//      }
//      else{
//         cout<<"Key is not present"<<endl;
//      }
//      return 0;  
// }


// Reverse of Aarray

// void reverse(int Arr[],int size){

//      for(int i=0;i<(size-1);i++){
//         int temp=Arr[i];
//         Arr[i]=Arr[size-i-1];
//         Arr[size-i-1]=temp;

// }
// }
// void printarray(int Arr[],int n){
//     for (int i=0;i<n;i++){
//         cout<<"["<<Arr[i]<<"]"<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     // int arr[5]={1,23,45,6,7};
//     int Arr[8]={1,23,45,6,7,90,56,12};
    

//     // int n;
//     // cout<<"Enter your Array size"<<endl;
//     // cin>>n;
    
//     // reverse(arr,n);
//     reverse(Arr,8);
//     // printarray(arr,n);
//     printarray(Arr,8);


//     return 0;
// }


// void reverse(int Arr[],int n){
//     int start=0;
//     int end=n-1;

//     while(start<=end){
//         swap(Arr[start],Arr[end]);
//         start++;
//         end--;
//     }
// }

// void printarray(int Arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<Arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     // int Arr[6]={1,4,0,5,-2,15};
//     int Arr[8]={1,23,45,6,7,90,56,12};

    
//     reverse(Arr,8);
//     printarray(Arr,8);
//     return 0;
// }

// It s My logic reevrse of an array

// void reverse(int arr[],int n){
//     cout<<"[ ";
//     for(int i=0;i<=(n-1);i++){
//         cout<<arr[(n-1)-i]<<" ";

//     }
//     cout<<" ]";
// }
// int main(){
//     int arr[10]={1,4,67,78,90,45,32,3,5,87};

//     cout<<"Enter your Size of Array "<< endl;

//     int size;
//     cin>>size;

//     reverse(arr,size);
//     return 0;

// }

// swap aleternate

// void printarray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";

// }cout<<endl;
//     }

// void swappAternate(int arr[],int n){
//     for(int i=0;i<n;i+=2){
//         if(i+1<n){
//             swap(arr[i],arr[i+1]);
//         }
//     }
// }



// int main(){
//     int even[8]={12,34,56,78,80,54,33,3};
//     swappAternate(even , 8);
//     printarray(even ,8);
//     return 0;

// }


// Unique element :


// int finduniqeElement(int arr[],int n){
//     int ans=0;
//     for(int i=0;i<n;i++){
//         ans=ans^arr[i];
//     }cout<<ans;

// }

// int main(){
//     int un[7]={12,12,45,87,78,45,87};
//     int n=7;
//     finduniqeElement(un,n);
//     return 0;
// }





// unique occurance of an element present :

// void occurance(int arr[],int n){
//     int brr[n];
//     int c[n];
//     int count=1;
//     for(int i=0;i<n;i++){    
//         count-=count;
//         for(int j=0;j<n;j++){
//             if((arr[i]^arr[j])==0)
//             count=count+1;
//             brr[i]=arr[i];
//             c[i]=count;


//         }
    

//     }
//     for( int i =0 ;i<n;i++){
//         if(brr[i]!=brr[i+1] && c[i]!=c[i+1]){
//             // cout<<brr[i]<<endl;
            
//         cout<<"the element of array   "<< brr[i]<<endl;
//         cout<<"the array element occurance is unique "<<c[i]<<endl;
        
//         }
        
         
// }
// }
// int main(){
//     int arr[7]={1,3,3,4,4,4};
//     int size;
//     cout<<"Enter your Size of Array"<<endl;
//     cin>>size;
//     occurance(arr,size);

//     return 0;

// }


// Duplicate element  0 to n-1;

// void dupli(int arr[],int n){
//     int ans=0;


//     for(int i=0;i<n;i++){
//     ans=ans^(arr[i]);

//     }
//     for(int j=0;j<n;j++){
//         ans=ans^j;
//     }
    
//     cout<< ans;
    
// }
// int main(){
//     int arr[7]={4,2,1,3,1,8,8};
//     int size=7;
//     dupli(arr,size);
    

// }

// Find the Duplicate Element

// void Dupli(int arr[],int n){
//     int b [5];
//     for (int i =0 ; i<n ;i++){
//         for ( int j =0; i!=j ; j++){
//             if((arr[i]==arr[j])){

//             b[i]=arr[i];
//             cout<<"[ "<<b[i]<<" ]"<<" ";
            
//             }
//         }
//     }
//     cout<<"the Duplicate Elements are the ";
//     }

// int main( ){
//     int arr [12]={1,2,3,2,4,5,6,6,12,33,34,12};

//     int size;
//     cout<<"Enter your Size"<<endl;

//     cin >> size;
     
//     Dupli(arr,size);
//     return 0;

// }




// intersection of two element

// int main(){
//     int arr1[7]={1,2,3,4,5,6,8};
//     int arr2[7]={2,4,6,78,45,3,5};
//     int arr3[7];
//     int n;
//     cout<<"Enter the Size of Array"<<endl;
//     cin>>n;

//     for(int i=0;i<7;i++){
//         for (int j=0;j<7;j++){ 
//             if(arr1[i]==arr2[j]){
//                 arr3[i]=arr1[i];
//                 cout<<"[ " <<arr3[i]<<" ] ";
//             } 
//             // else if(arr1[i]!=arr2[j]){
            
                
//             // }
//         }

//     }
    
//     return 0;
// }



// Find the  two pair whose sum is 5
// int main(){
//     int sum[6]={1,2,4,6,3};
//     for (int i=0;i<6;i++){
//         for(int j=0;j<6;j++){
//             if((sum[i]+sum[j])==5){
//                 cout<<"( "<<sum[i]<<" "<<sum[j]<<" )";
//             }
            
//         }
//     }
//     return 0;
// }

// for Triple pair sum is 12


// int main(){
//     int sum[6]={1,2,4,6,3};
//     for (int i=0;i<6;i++){
//         for(int j=0;j<6;j++){
//             for(int k=0;k<6;k++){

//             if((sum[i]+sum[j])+sum[k]==12){
//                 cout<<"( "<<sum[i]<<" "<<sum[j]<<" "<<sum[k]<<" )";
//             }
//             }
//         }
//     }
//     return 0;
// }



// Sorting 0 and 1

// int main(){
//     int arr[8]={1,0,0,0,1,1,0,1} ,n,size=8,brr[8];
//     cout<<"Enter your Array size"<<endl;
//     cin>>n;
//     //Enter the size 0
//     cout<<"Apply the first Loop"<<endl;
//     int count = 1;
//      //this for Right side 
//     for(int i=0;i<size;i++){
//         if(arr[n]==arr[i]){
//             brr[size-count]=arr[i];
//             count++;
            
//         }
//     }

//     //now for Left side All Zeros Aside left
//     count=8;
//     int left=0;
//     for(int i=0;i<size;i++){
//         if(left==arr[i]){
//             brr[size-count]=arr[i];
//             count--;
//         }
//     }

// //    NOW Print The array /


// for(int i=0;i<size;i++){
// cout<<"[ "<<brr[i]<<" ]" ;

//     // cout<<brr[i]<<endl;
// }
//     return 0;
// }


// Homework quetions

// int main(){
//     int arr[9]={0,2,2,1,0,1,1,0,2},n,brr[9];
//     cout<<"Enter the size of array"<<endl;
//     cin>>n;
//     //enter the present array element size 3
//     for(int i=0;i<n;i++){
//         cin>>brr[i];
    

//     }
//     int f[9];
//     int count=0;
//     for(int i=0;i<n;i++)
// {   
//     for(int j=0;j<9;j++){
//         if(brr[i]==arr[j]){
//             f[count]=arr[j];
//             count++;

//         }
//     }

// }
// cout<<"[ ";
// for(int k=0;k<9;k++){

//     cout<<" "<<f[k];
// }
// cout<<" ]";
// return 0;

// }


// note
// Every time After the deltion the Array size will be decreses n=n-1
// delete the Array element from begin   n=n-1

// int main(){
//     int arr[4]={2,4,6,8};
//     for(int i=0;i<4;i++){

//     cout<<arr[i]<<endl;
//     }
//     cout<<"Enter the Size of new to be created begining element is deleted"<<endl;
//     int n;
//     cin>>n;
//     cout<<"the array after deleted element from beginning "<<arr[0]<<endl;
    
//     for(int i=0;i<(n-1);i++){
//         cout<<(arr[i]=arr[i+1])<<endl;
    
//     }
//     return 0;
// }



// By Using the Location delete an Element


// int main(){
//     int arr[4]={2,4,6,8};
//     cout<<"Enter the size of Array "<<endl;
//     int n;
//     cin>>n;
//     cout<<"Enter your Location to delete an Element "<<endl;
//     int loc;
//     cin>>loc;
//     //for location shifting
//     while(loc<n){
//         arr[loc]=arr[loc+1];
//         loc++;
//     }

//     cout<<"the New Array will be the "<<endl;
//     int i=0;
//     while(i<n-1){   // 4-1 =3 because one element is deleted
//         cout<<arr[i];
//         i++;
//     }
//     return 0;

// }



// New Topic -- Array (  Binary Search   )

// pg 1:


// int binarysearch(int arr[],int size,int key){
//     //set the position for entire Array
//     int start =0;
//     int end=size-1;
//     //find mid element Index 
//     int mid= start+(end-start)/2;

//     while(start<=end){
//         //if the array element same as the key then return mid-- index
//         if(arr[mid]==key){
//             return mid;

//         }
//         else if(key >arr[mid]){   // mid element is 6  key is 18
//             //right side of Array further mid
//             start=mid+1;
//         }
//         else{
//             //left of Array from mid 
//             end=mid-1;

//         }
//         //After this will Update due to given condition then on top mid will not consider
//         mid=start+(end-start)/2;

//     }
//         return -1;


// }

// int main(){
//     //declaring two array
//     int even[6]={2,4,6,8,12,18};
//     int odd[5]={3,7,11,14,16};

//     //form here Calling the Function

//     int evenIndex=binarysearch(even,6,18);
//     cout<<"the Index of Element 18 is "<<evenIndex<<endl;
//     int oddIndex=binarysearch(odd,5,3);
//     cout<<"The Index of 3 is "<<oddIndex<<endl;
//     return 0;
// }


// Quetion 2  --- peak in Mountain

// int peak(int arr[],int n){
//     //declaring the Initializing the Index
//     int start=0;
//     int end=n-1;

//     //finding the Mid of Index At present element 

//     int mid=start+(end-start)/2;

//     //Comparing Mid 
//     while(start<=end){
//         if(arr[mid]<arr[mid+1]){
//             start=mid+1;    // next element in from mid for cheacing purpose  

//         }
//         else{

//             return mid;   //return the index here that represents the peak point
//         }
//             mid=start+(end-start)/2;
//     }
//         return start;




// }

// int main(){
//     int arr[6]={3,4,5,6,14,13};
//     int size;
//     cout<<"enter your Size for to find out the element in present in the  Peak "<<endl;
//     cin>>size;
//     int ans=peak(arr,size);
//     cout<<"the value of " <<ans;
//     return 0;

// }


// Quetion 3/  Pivot in array  (binary search)

// int getpivot(int arr[],int n){
//     int start=0;
//     int End=n-1;
//     int mid=start+(End-start)/2;
//     while(start<End){
//         if(arr[mid]>=arr[0]){
//             start=mid+1;

//         }
//         else{
//             End=mid;

//         }
//         mid=start+(End-start)/2;

        
//     }
//     // return arr[start] ; 
//      // give he Index that element is present
//      return start;
// }

// int main(){
//     int arr[5]={3,8,10,17,1};
//     cout<<"The value of the Pivot is "<<getpivot(arr,5);
//     return 0;

// }



// Quetion 4: Search In Sorted Rotated Array

// int get_pivot(int arr[],int n){
//     int start=0;
//     int end=n-1;
//     int mid=start+(end-start)/2;
//     while(start<end){
//         if(arr[mid]>=arr[0]){
//             start=mid+1;
//         }else{
//             end=mid;
//         }
//         mid=start+(end-start)/2;


//     }
//     return start;
// }

// int Binary_Search(int arr[],int s ,int e,int key){
//     int start=s;
//     int end=e;
//     int mid=start+(end-start)/2;
//     while(start<=end){
//         if(arr[mid]==key){
//         return mid;
//         }
//         if(key>arr[mid]){
//             start=mid+1;
//         }else{
//             end=mid-1;

//         }
//         mid=start+(end-start)/2;

//     }
//     return -1;
// }
// int main(){
//     int arr[5] ={7,8,1,2,3};
//     int n;
//     cout<<"Enter your array size "<<endl;
//     cin>>n;
//     int target;
//     cout<<"Enter your target "<<endl;
//     cin>>target;
//     int pivot=get_pivot(arr,n);
//     cout<<pivot<<endl;
//     if(target>=arr[pivot] && target<=arr[n-1]){   // our target should be lies between the  arr[pivot]<=target<=arr[n-1]
//              cout<< Binary_Search(arr,pivot,n-1,target);
//     }
//     else{
//         cout<< Binary_Search(arr,0,pivot-1,target);
//     }
//     return 0;
// }


// Find the square root of Element using binary search

// long long int squrtInteger(int n){
//     int s=0;
//     int e=n;
//     long long  int mid= s+ (e-s)/2;
//     long long int ans=-1;
//     while(s<=e){
//         long long int sqaure = mid *mid;
//         // cout<<sqaure<<endl;       //traking purpose
//         if(sqaure==n){
//             return mid;

//         }
//         if(sqaure<n){
//             ans=mid;
//             s=mid+1;

//         }
//         else{
//             e=mid-1;

//         }
//     mid=s+(e-s)/2;}
    
//     return ans;
// }

// double morepercision(int n,int percision ,int tempsol){

//     double factor=1;
//     double ans =tempsol;
//     for (int i=0;i<percision;i++){
//         factor=factor/10;


//     }
//     for(double j=ans;j*j<n; j=j+factor){
//         ans=j;

//     }
//     return ans;
// }

// int main(){
//     int n;
//     cout<<"Enter your Number to  find the square root  "<<endl;
//     cin>>n;
//     int tempsol=squrtInteger(n);
//     // cout<<tempsol;
//     cout<<"Answer is "<<morepercision(n,3,tempsol)<<endl;
//     return 0;
// }


// very Important Book Allocation

// bool is_possible(int arr[],int n,int m ,int mid){
//     int studentcount=1;

//     int pagesum=0;
    

//     // Apply the loop

//     for(int i=0;i<n;i++){
//         if(pagesum+arr[i]<=mid){
//             pagesum+=arr[i];
//         }
//         else
//         {
//             studentcount++;
//             if(studentcount>m || arr[i]>mid)
//             {
//                 return false;
//             }
//             pagesum=arr[i];
        
//             cout<<pagesum<<endl;

//         }
//     }

// return true;

// }

// int allocation_books(int arr[],int n,int m){
//     int s=0;
//     int sum=0;
//     for(int i=0;i<n;i++)
//     {
//         s+=arr[i];
//     }
//     int e=sum;
//     int ans=-1;
//     int mid=s+(e-s)/2;
//     while (s<=e)
//     {
//         if(is_possible(arr, n, m, mid)){
//             ans=mid;
//             e=mid-1;
        
//         }
//         else{
//           s=mid+1;

//         }
//         mid=s+(e-s)/2;
//     }


//   return ans;  
    
// }


// int main(){
//     int arr[4] = {10,20,30,40};
//     int student;
//     int n;
//     cout<<"Enter your Number of students"<<endl;
//     cin>>student;
//     cout<<"Enter your Number of books "<<endl;
//     cin>>n;
//     //to find the mid of Array is 
//     int start=1;
//     int end=100;


//    int  MId=start+(end-start)/2;
//     cout<<MId;


//     int allocation=is_possible(arr,n,student,MId);
//     cout<<allocation<<endl;
//     int done=allocation_books(arr,n,student);
//     cout<<done<<endl;
//     return 0;
// }

// Painters Partition quetion


//  Quetion Aggresive cow




// New Topic  Sorting

// Selection Sort

// int main(){
//     int arr[5]={7,8,4,9,1};
//     int n;
//     cout<<"Enter your size of Array "<<endl;
//     cin>>n;

//     for(int i=0;i<n-1;i++){
//       int  minindex=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[minindex]){
//                 //here we get new minIndex
//                 minindex=j;
//             }
//             swap(arr[minindex],arr[i]);
//         }
//     }
//     cout<<"[ ";
//     for(int i=0;i<n;i++){

//         cout<<arr[i]<<" ";
//     }
//     cout<<" ]";
 

//     return 0;
// }



// Bubble Sort

// int main(){
//     int arr[5]={12,11,23,45,34};

//     int n;
//     cout<<"Enter your Array Size"<<endl;
//     cin>>n;
    
//     for(int i=1;i<n;i++){
//         //for round 1 to n-1
//         bool swapped =false;
//         for(int j=0;j<n-i;j++){
//             //process element till n-i th Index
//             if(arr[j]>arr[j+1]){
//             //we write like this block 
//             swap(arr[j],arr[j+1]);
//             swapped =true;
//             }  
                
//         }
//     if(swapped==false){
//         //Already sorted
//         break;
//     }
//     }

//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// bubble sort is working on the element by element one to next

// Insertion sort

// int main(){
//     int arr[5]={12,45,34,31,29};
//     int n;
//     cout<<"Enter Your Size of Array here "<<endl;
//     cin>>n;
//      for (int i=1;i<n;i++)
//      {
//         int temp=arr[i];
//         int j=i-1;        
//         while(j>=0)
//         {
//             if(arr[j]>temp)
//             {
//                 //shift
//                 arr[j+1]=arr[j];
//             }
//             else
//             {
//                 break;
//                 //stop
//             }
//             j--;
//         }
//         arr[j+1]=temp;

//     }
//     cout<<"The given sorted Array is "<<endl;
//   for(int k=0;k<n;k++){
//     cout<<arr[k]<<" ";
//   }
//   return 0;
// }


// For the stl Go to raplit



// insert the element 
// int main(){
//     int arr[5]={2,4,5,7,9};

//     int n;
//     cout<<"Enter your Sizeof Arry is "<<endl;
//     cin>>n;

//     cout<<"Enter your location for to  Insert the Element  "<<endl;
//     int loc;
//     cin>>loc;

//     //space creation 
//     for(int i=n-1;i>=loc-1;i--){
//         arr[i+1]=arr[i];

//     }

//     // insert the element at
//     arr[loc-1]=89;

//     // print the Array 

//     for(int i=0;i<n+1;i++){
//         cout<<arr[i+1]<<" ";
//     }

// }


// class Average{
//     int num1;
//     int num2;
//     int sum;
//     int avg;
//     public:
//     void process(int a,int b){
//         num1=a;
//         num2=b;
//         sum=num1+num2;
//         avg=sum/2;
//     }
//     void print(){
//         cout<<"The Average is "<<avg<<endl;
//     }
// };

// int main(){
//     Average A1;
//     cout<<"Enter your NUmber "<<endl;
//     int n,n1;
//     cout<<"Enter your Number "<<endl;
//     cin>>n;
//     cout<<"Enter your NUmber "<<endl;
//     cin>>n1;
//     A1.process(n,n1);
//     A1.print();
//     return 0;

// }

// Enumeration

// enum week{mon,tue,wed,thu,fri,sat,sun};

// int main(){
//     week day;
//     day=mon;
  
//     cout<<day;
//     return 0;
// }


// int main(){

//     int i=0;
//     do{
//         i++;
//         cout<<i<<endl;
//     }   
    
//     while(i<5);
//     return 0;   
// }


// #include <string>

// int main(){
//     string s1("Akash");
//     string s2("Rohan");
//     // cout<<s1+s2;
//     //nowinserting  the new String 
//     s1.insert(0,s2);
//     cout<<" "<<s1<<" ";
//     //erase the Anything in string 
//     s1.erase(0,1);
//     cout<<s1<<endl;
//     //replaceing the Elment is string 
//     s1.replace(1,2,s2);
//     cout<<s1;
//     return 0;
// }



// function overloading 

// void swap(int m,int n);
// void swap(float k,float l);
// void swap(char p ,char q);

// int main(){
//     int a,b;
//     cout<<"Enter your Number i "<<endl;
//     cin>>a;
//     cout<<" /";
//     cin>>b;
//     swap(a,b);

//     float k,l;
//     cout<<"Enter your Number i "<<endl;
//     cin>>k;
//     cout<<" /";
//     cin>>l;
//     swap(k,l);

//     char x,y;
//     cout<<"Enter your Number i "<<endl;
//     cin>>x;
//     cout<<" /";
//     cin>>y;
//     swap(x,y);

// }

// void swap(int m,int n)
// {
//     int temp;
//     temp=m;
//     m=n;
//     n=temp;
//     cout<<m;
//     cout<<n;

// }
// void swap(float  k,float l)
// {
//     float temp;
//     temp=k;
//     k=l;
//     l=temp;
//     cout<<k;
//     cout<<l;
// }
// void swap(char p,char q)
// {
//     char temp;
//     temp=p;
//     p=q;
//     q=temp;
//     cout<<p;
//     cout<<q;

// }
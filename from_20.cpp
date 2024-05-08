#include<iostream>
#include<vector>
#include<string>
using namespace std;


// Now reverse of an array y using the stl./

// vector<int> reverse(vector<int>v){

//     int i=0;
//     int j=v.size()-1;  //we can give the position as per the reverse

//     while(i<=j){
//         swap(v[i],v[j]);
//         i++;
//         j--;

//     }
//     return v;
// }

// void print(vector<int>v){
//     cout<<"the new reverse array is "<<endl;
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }cout<<endl;

// }

// int main(){

//     vector<int > v;
    

//     v.push_back(23);
//     v.push_back(45);
//     v.push_back(56);
//     v.push_back(1);
//     v.push_back(12);

//     for(auto i:v){
//         cout<<i<<" "<<endl;
//     }
    
//     vector <int> ans=reverse(v);
//     print(ans);
    
  

    
// return 0;
// }


// Merge two sorted Array


// void merge(int arr1[],int m,int arr2[],int n,int arr3[])
// {
//     int i=0,j=0;
//     int f=0;
    
//     while(i<m && j<n)
//     {
//         if(arr1[i]<arr2[j])
//         {
//             arr3[f++]=arr1[i++];
           

//         }
//         else{
//             arr3[f++]=arr2[j++];
//         }
//     }

//     //copy after half of the fill 

//     while(i<m){
//         arr3[f]=arr1[i];
//         i++;
//         f++;
//     }
// //  some remaining element
//     while(j<n)
//     {
//         arr3[f++]=arr2[j];
//         j++;
        
//     }
//      cout<<" [";

//     for(int k=0 ; k<f;k++){
//         cout<<arr3[k]<<" ";
//     }
//      f++;
//     cout<<" ]";




// }

// // void print(int arr3[],int f){

// //     cout<<" [";

// //     for(int k=0 ; k<f;k++){
// //         cout<<arr3[k]<<" ";
// //     }
// //     cout<<" ]";

// // }

// int main(){
//     int arr1[6]={1,2,3,4,5,6};
//     int arr2[3]={7,8,9};

//     int arr3[9];

//     int m;
//     cout<<"Enter the first array size "<<endl;
//     cin>>m;

//     int n;
//     cout<<"Enter your second Array size "<<endl;
//     cin>>n;
    

//     merge(arr1,m,arr2,n,arr3);
 

//     return 0;
// }


// MOves zeroes

// void moves_zeroes(int arr[],int n){
//         int i=0;
//         for(int j=0;j<n;j++){   //for thr right side shifting apply the two loops
//             if(arr[j]!=0)
//             {
//                int  temp=arr[j];
//                 arr[j]=arr[i];
//                 arr[i]=temp;
//             // swap(arr[j],arr[i]);
//             i++;

//             }

//         }

//         for (int i = 0; i <n; i++)
//         {
//             cout<<arr[i]<<" ";
//         }
        
    

    
// }

// int main(){
//     int arr[6]={0,1,45,0,5,0};
//     int n;
//     cout<<"Enter your Size of AAraaY"<<endl;
//     cin>>n;
//     moves_zeroes(arr,n);
//     return 0;
// }


// Rotate the Array 

// void rotate(int arr[],int n,int k){
//     int temp[n];
//     int final[n];

//     //to copy the element in  the main at new postions 

//     for(int i=0;i<n;i++){
//         temp[(i+k)%n]=arr[i];

//     }

//     //
//     for(int i=0;i<n;i++){
//           final[i]=temp[i];
//     }

//     for(int j=0;j<n;j++){
//         cout<<final[j]<<" ";
//     }


// }

// int main(){
//     int arr[5]={1,2,3,4,5};
//     int n;
//     cout<<"Enter your size of the array "<<endl;
//     cin>>n;
//     cout<<"Enter the how many values you want rotate "<<endl;
//     int k;
//     cin>>k;


//     rotate(arr,n,k);
//     return 0;
// }



// Check the Array is sorted Rotated or Not 



// bool  check_rotate(int arr[],int n){
//     int count=0;
    
//     for(int i=1;i<n;i++)
//     {
//         if(arr[i-1]>arr[i]){   //when the last element is comapare with the first element  always in the sorted array is smalle first element
//             count++;
//         }
//     }
//     if(arr[n-1]>arr[0]){

//         count++;
    
//     }
//      return count<=1;

    

    
// }

// int main(){
//     // int arr[5]={4,5,1,2,3}; 
//     int arr[5]={1,1,1,1,1};   //for the same condition  also this allow 
//     int n;
//     cout<<"the size of the array "<<endl;
//     cin>>n;
//    int ans= check_rotate(arr,n);
//    if(ans==1){
//     cout<<"the given array is Sorted rotated "<<endl;

//    }
//    else{
//     cout<<"this array is not rotatd "<<endl;
//    }
//    return 0;
// }





// Add two Array   for the most solution go to lect 21 love babber

// void add_Array(int arr1[],int arr2[],int n,int k,int g){

//     int i=n-1;
//     int j=k-1;
     
//     int ans[g];
//     int carry=0;
//     int start =1;

//     while(i>=0 && j>=0)
//     {
//         int value1=arr1[i];
//         int value2=arr2[j];

//         int sum=value1 +value2 +carry;
//         carry=sum/10;
//         sum=sum%10;
//         ans[g-start]=sum;
//         i--;
//         j--;
//         start++;
        
//     }
    

//     //for the adding the Carry in the first array 

//     while (i>=0)
//     {
//      int sum=arr1[i]+carry;
//      carry=sum/10;
//      sum=sum%10;
//      ans[g-start]=sum;
//      i--;
//      start++;
//     }

//     //for the carry in the  complete one

//     while(j>=0)
//     {
//         int sum=arr2[j]+carry;
//         carry=sum/10;
//         sum=sum%10;
//         ans[g-start]=sum;
//         j--;
//         start++;
        
//     }
    
//     while(carry!=0)
//     {
//         int sum=carry;
//         carry=sum/10;
//         sum=sum%10;
        
//         ans[g-start]=sum;
//         start++;
//     }

//     for(int i=1;i<g;i++){
//         cout<< ans[i]<<" ";
        
//     }



// }

// int main(){
//     int arr1[5]={9,10,3,4,7};
//     int arr2[5]={0,3,7,8,1};

//     int n,k,g;

//     cout<<"Enter your size of arrays "<<endl;
//     cin>>n>>k>>g;

//     add_Array(arr1,arr2,n,k,g);
//     return 0;
// }





// string and Array of Character


// first find the length of the string

// void length(char name[]){
//     int count =0;
//     for(int i=0;(name[i])!='\0';i++){

//         count ++; 

        
//     }
//     cout<<"the length of the string is  : "<<count<<endl;
// }

// // //Now find the Reverse of the String is 

// void reverse(char name[] ){
//     int n;
//     cout<<"Enter your Size of Array "<<endl;
//     // cin>>n;
//     // for(int i=1;i<=n;i++){
//     //    cout<< name[n-i]<<" ";
//     // }
//     int start=0;
//     int end=n-1;
//     while (start<end)
//     {
//         swap(name[start],name[end]);
//         start++;
//         end--;
//     }
    
//     for(int i=0;i<n;i++){
//         cout<<name[i];
//     }
   
// }


// int main(){
//     char name[5];
//     cout<<"Ente your Name "<<endl;
//     cin>>name; 

//     length(name);
//     reverse(name);
//     return 0;
// }


// To check Given String is pallinDrome Or Not


// void check_is_pallindrome(char p[],int n){

//     //to convert the upper case to Lower case
//     for(int i=0;i<n;i++){
//         if(p[i]>='a' && p[i]<='z'){
//         p[i];
//         }
//         else{
//             p[i]=p[i]-'A'+'a';
         
           
//         }
//     }

//     //is pallindrome or not 

//   int start =0;
//   int end=n-1;
//   while(start<=end){
//     if(p[start++]!=p[end--]){
//         cout<<"Its Not Pallindrome "<<endl;
//         break;     
//     } 
//   }

//    if(p[start++]==p[end--]){
       
//         cout<<"Its pallindrome"<<endl;
//     }

// }

// int main(){
// cout<<"Enter your String "<<endl;
// char  p[30];
// cin>>p;
// int count=0;
// for(int i=0;p[i]!='\0';i++){
//     count++;
// }



// check_is_pallindrome(p,count);

// return 0;

// }


// revrsing of complte stri/ng

// void reverse(string str,int n){
//     int start=0;
//     int end=n-1;
//     while(start<=end){
        
//         swap(str[start++],str[end--]);
        

//     }
//     for (int i=0;i<n;i++){
//         cout<<str[i];
//     }


// }


// int main(){
//     cout<<"Enter your String "<<endl;
//     string str;
//     getline(cin,str);
 
//     int count =str.length();
//     // cout<<count;

//     reverse(str,count);
//     return 0;

// }

// Reversing part 3 :: reversing of word in entire string

// void reverse_word(string str,int n){
//   int start=0 ,end=0;
//   while(start<n)
//   {
//     while(end<n && str[end]!=' '){


//         swap(str[start],str[end]);
        
//         end++;

//     }
//         end=start+1;
//         start=end;
//   }
//     for(int i=0;i<n;i++){
//         cout<<str[i];
//     }
// }

// int main(){
//     cout<<"enter your string "<<endl;
//     string str;
//     getline(cin,str);
//      int count=str.length();
//     // cout<<count;


   
//     reverse_word(str,count);
//     return 0;
   
// }




// find the Occurance Charater in String   input in Lower CAse Only



// void Max_occurance(string str,int n){
//     int  p[n];
//     char col[n];
//     int count=0;
//     for(int i=0;i<n;i++){
//         count-=count;

//     for(int j=0;j<n;j++){
//         if(str[i]>='a' && str[i]<='z'&& str[i]==str[j]){
//             count++;
//             col[i]=str[i];
//             p[i]=count;
            
//      }

//     }
//     }
//   int  higest=0;
//     for(int i=0;i<n;i++){
//         if(p[i]!=p[i+1] && col[i]!=col[i+1]){

//         cout<<col[i]<<"-->"<<p[i]<<" "<<endl;
// //find out the higest Occurance 
//         if(p[i]>higest){
//             higest=p[i];
//           }
//         }
            
//     }
//     cout<<"the higest occurance is " <<higest<<endl;

    
// }

// int main(){
//     cout<<"enetr your String "<<endl;
//     string str;
//     getline(cin,str);
//     int len=str.length();
//     cout<<len;
    
//     Max_occurance(str,len);
//     return 0;
// }



// replace the All spaces

/*
 void replace(string str,int n){

    //to check the given srtring lies in lower or upper case
    for(int i=0;i<n;i++){
        if(str[i]>='a' && str[i]<='z')
        {
          str[i];
        }
        else{
            str [i]=str[i]-'A'+'a';
            // cout<<str[i];
            
        }
    }

    for(int i=0;i<n;i++){
        if(str[i] != ' ')
        {
           str='@';
            }
    }
    
    for(int i=0;i<n;i++){
        cout<<str[i];
    }


}
int main(){
    cout<<"Enter your String "<<endl;
    string str;
    getline(cin,str);
    //now find the length of the string 
    int len = str.length();
    replace(str,len);
    
    return 0;

}
*/


// remove All same occurance of the substring

// string remove(string str,string part,int n){
//     while (n!=0 && str.find(part)<n)
//     {
//         str.erase(str.find(part),part.length());

        
//     }
//     return str;
    
    
// }

// int main(){
    
//     cout<<"Enter your String "<<endl;
//     string str="daabcbaabcbc";  //for answer check
//     // string str;
//     string part="abc";
//     // getline(cin,str);
//     int len=str.length();

//    string ans;

//    ans= remove(str,part,len);
//    cout<<ans;
//     return 0;
    
// }

// 
 
//  remove the all Adjecent Duplicate


//  string remove(string str ,int n){
//     int start=0;
//     for(int i=0;i<n;i++){
//         if(start>0 && str[start-1]==str[i]){
//             start--;
//         }
//         else{
//             swap(str[start] ,str[i]);
//             start++;
//         }


//     }return str.substr(0,start);
    
// }
// int main(){
//     // for exmple == daadaacf  ==>cf
//     string str;
//     getline(cin,str);
//     int len=str.length();
//     string ans;

//     ans=remove(str,len);
//     cout<<ans;
//     return 0;
// }

// Permutation of String 

// bool permutations(string s1,string s2){
//     int m[26]={0};//character array
//     for(char col:s1){
//         m[col-'a']++;
        
//     }
//     int i=0;
//     int j=0;
//     int total_chars=s1.size();
//     while (j<s2.size())
//     {
//         if(m[s2.at(j++)-'a']-- > 0){
//             total_chars--;
//         }
//         if(total_chars==0){
//             return true;

//         }
//         //shifting the Window
//         if(j-i==s1.size() && m[s2.at(i++)-'a']++  >= 0){
//             total_chars++;
//         }
//     }
//     return false;
    

// }

// int main(){
//     cout<<"Enter your First String "<<endl;
//     string s1;
//     getline(cin,s1);
//     cout<<"Enter your Second String "<<endl;
//     string s2;
//     getline(cin,s2);
// bool ans;

//     ans= permutations(s1,s2);
//     cout<<ans;
//     return 0;
    

// }

// String Compression


// void compress(char str[],int n){
// int i=0;
// int ansindex=0;
//  while(i<n){
//     int j=i+1;
//     while(j<n && str[i]==str[j]){
//         j++;
//     }


//     //when it will come here 
//     //complete traversing of array
//     //different character
//     str[ansindex++]=str[i];
//     int count=j-i;
//     if(count>1){
//         //converting couting to single digit and saving into answer
//         string cnt=to_string(count);
//         for(char i: cnt){
//             str[ansindex++]=i;
//         }


//     }
//     i=j;
//  }

// for(int i=0;i<ansindex;i++){

//  cout<<str[i]<<" ";
// }

// }
    



// int main(){
//     // cout<<"Enter your String "<<endl;
//     char str[12]={'a','a','a','b','col','col','d','d','d','d','d'};
//     int count=0;
//     for(int i=0;str[i]!='\0';i++){
//         count++;


//     }
//     // cout<<count;

//     compress(str,count);
//     return 0;
// }


// 2D Array QueTions

// how to take input for the 2d Array




// int main(){
//     cout<<"Enter your row "<<endl;
//     int n,m;
//     cin>>n;
//     cout<<"Enter your Coloumn "<<endl;
//     cin>>m;
//     int arr[3][3];
// //input row wise
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<"arr["<<i<<"]"<<"["<<j<<"]"<<" ";
//             cin>>arr[i][j];

            
//         }
    // }
    
//   for(int i=0;i<m;i++){
//     for(int j=0;j<n;j++){
//         cout<<"arr["<<i<<"]"<<"["<<j<<"]";
//         cin>>arr[j][i];
//     }
//   }  

// printing the Array

// for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }

// 
// return 0;
// }



// Searching of the Element in 2d Array



// bool Found(int arr[][3],int target,int row,int col){
//     //now the apply thr loop 
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             if(arr[i][j]==target){
//                 return 1;
//             }
            
//         }
//     }
//     return 0;


// }

// int main(){
//     cout<<"the array is "<<endl;
//     int arr[3][3];

// for(int row=0;row<3;row++){
//     for(int col=0;col<3;col++){

//          cout<<"arr["<<row<<"]"<<"["<<col<<"]"<<" ";
//         cin>>arr[row][col];

        
//     }
    
// }

// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }
    
//  int target;
// cout<<"Enter your Target "<<endl;
//  cin>>target;

//  if(Found(arr,target, 3,3)){
//      cout<<"the Element is Found  "<<endl;
// }else{
//      cout<<"the element is Not Found  "<<endl;
//       }
//       return 0;
// }



// sum of the element by Row

// int main(){
//     int array[3][3];
//     cout<<"Your Matrx is "<<endl;
    
//     for(int row=0;row<3;row++){
//         for(int col=0;col<3;col++){
//             cout<<"Matrix"<<"["<<row<<"]"<<"["<<col<<"]"<<" ";
//             cin>>array[row][col];
//         }
//     }

//     // now  the Printing with the Sum of Rows
//     int max=0;
//     for(int i=0;i<3;i++){
//         int sum=0;
//         for(int j=0;j<3;j++){
//             sum=sum+array[i][j];
//         }
//         cout<<endl;
//         cout<<sum<<endl;
//         if(sum>max){
//             max=sum;
//         }
        
//     }
//     cout<<"the maximum Sum is Along Row is"<<max<<endl;
//     return 0;
// }


// coloumn wise sum 

// int main(){
//     cout<<"Your Matrix is "<<endl;
//     int array[3][3];
// //    take the Coloumn Value its Should be Fixed
//     for(int i=0;i<3;i++ ){
//         for(int j=0;j<3;j++){
//             cout<<"Matrix["<<j<<"]"<<"["<<i<<"]"<<" ";
//             cin>>array[j][i];
//         }
//     }

//     // printing the array 

//     int max =0;
//     for(int i=0;i<3;i++){
//         int sum=0;
//         for(int j=0;j<3;j++){
//             cout<<array[i][j]<<" ";
//             sum=sum+array[j][i];
//         }
//         cout<<sum;
//         cout<<endl;
        
//         if(sum>max){
//             max=sum;

//         }
        
//     }
//     cout<<"the maximum sum is "<<max<<endl;

    
//     return 0;
// }


// Search the Element is using the Binary search


// bool binary_s(int array[][3],int target,int row,int col){
//     //define the Start and End
//     int start=0;
//     int end=row*col-1;

//     int mid=start+(end-start)/2;

//     while(start<=end){
//         int midelement=array[mid/col][mid%col];
//         if(midelement==target){
//             return 1;
//         }
//         if(midelement<target){
//             start=mid+1;

//         }else{
//             end=mid-1;
//         }

//         mid=start+(end-start)/2;

//     }
//     return 0;
// }

// int main(){
//     int array[3][3];
//     cout<<"Your Matrix is "<<endl;
//     // input 

//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<"Matrix["<<i<<"]"<<"["<<j<<"]"<<" ";
//             cin>>array[i][j];
//         }
//     }

//     // print 
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<array[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//      int target ;
//     cout<<"Enter your target "<<endl;
//      cin>>target;

//     if(binary_s(array,target,3,3)){

//         cout<<"The Element is present"<<endl;

//     }
//     else{
//         cout<<"The Element is Not Present "<<endl;
//     }
//     return 0;
// }


// Wave print the Array 

// void wave(int arr[][3],int rows ,int cols){

//     int ans[9];
//     int k=0;
//      //now goung to as pr the coloumnss
//      for(int col=0;col<cols;col++){
//         if(col%2==0){   // if even then go top to bottom 
//             for(int row=0;row<rows;row++){
//                 ans[k]=arr[row][col];
//                 k++;
//             }
//         }
//         else{ // go bottom to top
//             for(int row=rows-1;row>=0;row--){
//                 ans[k]=arr[row][col];
//                 k++;
//             }
//         }
//      }

//      for(int i=0;i<9;i++){
//         cout<<ans[i]<<" ";
//      }


// }
// int main(){
//     int arr[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>arr[i][j];
//         }
//     }
//     // pr/int THE aRRAY

//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }


//  wave(arr,3,3);

// return 0;
// }



// spiral print of Array


void spiral(int arr[][3],int rows,int cols){
    int k=0;
    int ans[k];
    int count=0;
    int total=rows*cols;

    int startingRow=0;
    int endingRow=rows-1;
    int startingCol=0;
    int endingCol=cols-1;

    while(count<total){
        //print the element in starting row

        for(int index=startingCol;count<total && index<=endingCol;index++)
        {
            ans[k]=arr[startingRow][index];
            k++;
            count++;
        }
        startingRow++;

        //print the element in last coloumn

        for(int index=startingRow;count<total && index<=endingRow;index++){
            ans[k]=arr[index][endingCol];
            k++;
            count++;
        }
        endingCol--;

        //now print the ending row
        for(int index=endingCol;count<total && index>=startingCol;index--){
            ans[k]=arr[endingRow][index];
            k++;
            count++;

        }
        endingRow--;

        //print the staring col

        for(int index=endingRow; count<total && index>=startingRow;index--){
            ans[k]=arr[index][startingCol];
            k++;
            count++;

        }
        startingCol++;

     
    }
    for(int i=0;i<k;i++){

     cout<<ans[i]<<" ";
    }
    
}

int main(){
    int arr[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];


        }

    }

    // printing the Array

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    

    spiral(arr,3,3);
    return 0;
}


// rotate the Array by 90 degree

/*
void rotate(int arr[][3],int rows,int cols)
{
    int ans[3][3];
    int startingRow=0;
    int endindcol=cols;

    for(int i=0;i<rows;i++){
        startingRow=0;
        endindcol--;
        for(int j=0 ;j<cols;j++){
            if(startingRow<rows && endindcol>=0){

            ans[startingRow][endindcol]=arr[i][j];
            startingRow++;
            }
        
        }
    }

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[3][3];

    // input of Array

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    //print the Array

    cout<<"Your given Array "<<endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }

    cout<<"Your Rotate Array "<<endl;

    rotate(arr,3,3);
}
*/



// Search in 2d Array version 2

// bool found(int arr[][5],int row,int col , int target ){
//     int rowIndex=0;
    // int colindex=col-1;

//     while(rowIndex<row && colindex>=0){
//         int element =  arr[rowIndex][colindex];
//         if(element==target){
//             return 1;
//         }
//         if(element<target){
//             rowIndex++;
//         }
//         else{
//             colindex--;
//         }
//     }
//     return 0;
// }

// int main(){
//     // input ==> 1 4 7 11 15 2 5 8 12 19 3 6 9 16 22 10 13 14 17 24 18 21 23 26 30                   
//     int arr[5][5];
//     for(int i=0;i<5;i++){
//         for(int j=0;j<5;j++){
//             cin>>arr[i][j];
//         }


//     }

//     // print the Array
//     for(int i=0;i<5;i++){
//         for(int j=0;j<5;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     int target;
//     cout<<"Enter your target "<<endl;
//     cin>>target;

//     if(found(arr,5,5,target)){
//         cout<<"the Element is present "<<endl;
//     }
//     else{
//         cout<<"the Element is not Present "<<endl;
//     }
//     return 0;
// }



// to find the gcd of the NUmber 

// int gcd(int a,int b){
//     if(a==0){
//         return b;
//     }
//     if(b==0){
//         return a;
//     }

//     while(a!=b){
//         if(a>b){

//         a=a-b;
//         }
//         else{
//             b=b-a;
//         }

//     }
//     return a;
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     int ans=gcd(a,b);
//     cout<<"gcd of "<<a<<"and"<<b<<"is"<<ans<<endl;

// }




















// sentinal search
/*
bool sentinal_Search(int arr[],int n,int key){
    int last = arr[n-1];
    arr[n-1] = key;
    int i=0;
    while(arr[i] != key){
        i++;
    }
    if(i<n-1 || arr[i] == key ){
        return 1;
    }
    else{
        return 0;
    }
    
}
int main(){
    int arr[6] ={3,6,10,12,5,18};
    int n = 6;
    int key;
    cout<<"ENter your key "<<endl;
    cin>>key;

    cout <<(sentinal_Search(arr,n,key)?"the element is found ":"ELement is not found ")<<endl;
    return 0;

}
*/

// Fabonacchi search

// #include <iostream>
// #include <vector>



// // Fibonacci Search function
// int fibonacciSearch(const vector<int>& arr, int target) {
//     int n = arr.size();
//     int fibMMinus2 = 0;  // (k-2)th Fibonacci number
//     int fibMMinus1 = 1;  // (k-1)th Fibonacci number
//     int fibM = fibMMinus1 + fibMMinus2; // kth Fibonacci number

//     // Find the smallest Fibonacci Number greater than or equal to n
//     while (fibM < n) {
//         fibMMinus2 = fibMMinus1;
//         fibMMinus1 = fibM;
//         fibM = fibMMinus1 + fibMMinus2;
//     }

//     // Marks the eliminated range from the front
//     int offset = -1;

//     // Compare target with the last Fibonacci numbers
//     while (fibM > 1) {
//         int i = min(offset + fibMMinus2, n - 1);

//         // If target is greater than the value at index fibMMinus2,
//         // cut the subarray from offset to i
//         if (arr[i] < target) {
//             fibM = fibMMinus1;
//             fibMMinus1 = fibMMinus2;
//             fibMMinus2 = fibM - fibMMinus1;
//             offset = i;
//         }

//         // If target is less than the value at index fibMMinus2,
//         // cut the subarray after i+1
//         else if (arr[i] > target) {
//             fibM = fibMMinus2;
//             fibMMinus1 = fibMMinus1 - fibMMinus2;
//             fibMMinus2 = fibM - fibMMinus1;
//         }

//         // If target is found
//         else {
//             return i;
//         }
//     }

//     // Compare the last element
//     if (fibMMinus1 && arr[offset + 1] == target) {
//         return offset + 1;
//     }

//     // If the element is not present in the array
//     return -1;
// }

// // Driver code
// int main() {
//     vector<int> arr = {10, 22, 35, 40, 45, 50, 80, 82, 85, 90, 100};
//     int target = 40;

//     int result = fibonacciSearch(arr, target);

//     if (result != -1) {
//         cout << "Element found at index ," << result << endl;
//     } else {
//         cout << "Element not found in the array" <<endl;
//     }

//     return 0;
// }

// // sentinal search
// /*
// bool sentinal_Search(int arr[],int n,int key){
//     int last = arr[n-1];
//     arr[n-1] = key;
//     int i=0;
//     while(arr[i] != key){
//         i++;
//     }
//     if(i<n-1 || arr[i] == key ){
//         return 1;
//     }
//     else{
//         return 0;
//     }
    
// }
// int main(){
//     int arr[6] ={3,6,10,12,5,18};
//     int n = 6;
//     int key;
//     cout<<"ENter your key "<<endl;
//     cin>>key;

//     cout <<(sentinal_Search(arr,n,key)?"the element is found ":"ELement is not found ")<<endl;
//     return 0;

// }
// */

// // Fabonacchi search

// #include <iostream>
// #include <vector>



// // Fibonacci Search function
// int fibonacciSearch(const vector<int>& arr, int target) {
//     int n = arr.size();
//     int fibMMinus2 = 0;  // (k-2)th Fibonacci number
//     int fibMMinus1 = 1;  // (k-1)th Fibonacci number
//     int fibM = fibMMinus1 + fibMMinus2; // kth Fibonacci number

//     // Find the smallest Fibonacci Number greater than or equal to n
//     while (fibM < n) {
//         fibMMinus2 = fibMMinus1;
//         fibMMinus1 = fibM;
//         fibM = fibMMinus1 + fibMMinus2;
//     }

//     // Marks the eliminated range from the front
//     int offset = -1;

//     // Compare target with the last Fibonacci numbers
//     while (fibM > 1) {
//         int i = min(offset + fibMMinus2, n - 1);

//         // If target is greater than the value at index fibMMinus2,
//         // cut the subarray from offset to i
//         if (arr[i] < target) {
//             fibM = fibMMinus1;
//             fibMMinus1 = fibMMinus2;
//             fibMMinus2 = fibM - fibMMinus1;
//             offset = i;
//         }

//         // If target is less than the value at index fibMMinus2,
//         // cut the subarray after i+1
//         else if (arr[i] > target) {
//             fibM = fibMMinus2;
//             fibMMinus1 = fibMMinus1 - fibMMinus2;
//             fibMMinus2 = fibM - fibMMinus1;
//         }

//         // If target is found
//         else {
//             return i;
//         }
//     }

//     // Compare the last element
//     if (fibMMinus1 && arr[offset + 1] == target) {
//         return offset + 1;
//     }

//     // If the element is not present in the array
//     return -1;
// }

// // Driver code
// int main() {
//     vector<int> arr = {10, 22, 35, 40, 45, 50, 80, 82, 85, 90, 100};
//     int target = 40;

//     int result = fibonacciSearch(arr, target);

//     if (result != -1) {
//         cout << "Element found at index ," << result << endl;
//     } else {
//         cout << "Element not found in the array" <<endl;
//     }

//     return 0;

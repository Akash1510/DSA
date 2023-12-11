#include<iostream>
using namespace std;
/*
int fabonacchi_search(int arr[],int target){
      int n = 10;
      //to find number nearest to the size in fabonachi NUmber 
      int a = 0;
      int b = 1;
      int c =  a+b;
      while(c<n){
       b = a;
       a = c;
       c = a+b;
      }
      int offset = -1;
      while(c>1){
        int i =min(offset+b , n-1);

        if(arr [i] < target ){
            c = a;
            a = b;
            b = c-a;
            offset = i;
        }
        else if( arr[i] > target ){
            c = b;
            a = a-b;
            b = c - a;
            
        }
        else{
            return i;
        }
      }

      if( a && arr [ offset+1] == target ){
        return offset + 1;
      }
      else{
        return -1;
      }
}


int main(){
    int arr [10] = {10,22,35,40,45,80,82,85,90,100};
    int target;
    cout<<"ENter youe target "<<endl;
    cin>>target;
    int result = fabonacchi_search(arr,target);
    if(result == -1){
        cout <<"Element is not found  " <<endl;
    }
    else{
        cout <<"the Element is found at  index "<<result<<endl;
    }
    return 0;
}
*/

// bool BS(int arr[],int key,int n){
//     int start = 0;
//     int end = n-1;
//     int  mid =(start+end)/2;
//     while(start<end){
//         if(arr[mid] == key){
//             return 1;
//         }
//         if(arr[mid] < key ){
//             start = mid +1;
//         }
//         else{
//             end = mid-1;
//         }
//         mid = (start+end)/2;
//     }
//     return false;
// }

// int main(){
//     int arr [10 ] ={10 ,22,30 ,35,40,45,67,89,122,234}; 
//     int target;
//     cout<<"ENter your target "<<endl;
//     cin>>target;
//     cout<<(BS(arr,target ,10)?"element is found ":"lement is not found ")<<endl;

// }
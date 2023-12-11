#include <iostream>
#include <math.h>
using namespace std;

// int main(){
//     int num;
//     cout<<"Enter your Number "<<endl;
//     cin>>num;
//     if(num%2!=0){
//         cout<<"your number is prime "<<endl;

//     }
//     else{
//         cout<<"your number is not prime"<<endl;
//     }
//     return 0;
// }

// int main(){
//     cout<<"hi I am Akash"<<endl;
//     int s1=123;
//     cout<<s1<<endl;
//     char ch='2';    //single inverted '' contains only one character
//     cout<<ch<<endl;

//     bool d = true;  
//     cout << d << endl;

//     float f = 1.23;
//     cout<<f<<endl;

//     double dub=1.2323;
//     cout<<dub<<endl;

    // cout<<"size of integer is "<<sizeof(s1)<<" bytes "<<endl;
    // cout<<"size of integer is "<<sizeof(ch)<<" bytes "<<endl;
    // cout<<"size of integer is "<<sizeof(d)<<" bytes "<<endl;
    // cout<<"size of integer is "<<sizeof(f)<<" bytes "<<endl;
    // cout<<"size of integer is "<<sizeof(dub)<<" bytes "<<endl;
    // int g='s1';   convert the character into asscii value
    // cout<<g;
    // char c=121;
    // cout<<c<<endl;
    // int neg_num=-12;
    //  unsigned int neg_num=-12;   //it produces the garbage value
    // cout<<neg_num;
    // rthimatic operator +,-,*,/
    // relationanl operator <,>,<=,>=,==,!=

    // bool n=true;
    // cout<<(!n);
    // return 0;

// }

// find he odd number in between for n/

// int main(){
//     int n;
//     cout<<"enter your number "<<endl;
//     cin>>n;
//     cout<<endl;
    
//     for(int number=0 ; number<n; number++)
//     {
//         // cout<<(number+1)<<endl;
//         if((number+1)%2!=0){
            
//             // cout<<"the number is odd"<<number+1<<" "<<endl;
//             cout<<(number+1)<<endl;

//             // for(int sum =0 ; sum<(number+1); sum++){
//             //     int Add=sum+(number+1);
//             //     cout<<Add<<endl;
//             // }
            
//             }
        
    
//     }
//     cout<<"this all are odd number from 1 to "<<n<<endl;


//     return 0;
// }


// to find the factorial of any number

// int factorial(int s1);
// int main(){
//     int num;
//     cout<<"Enter your Number" <<endl;
//     cin>>num;
//     cout<<"the factorial of number is "<<factorial(num)<<endl;
//     return 0;
// }

// int factorial(int s1){
//     if(s1<=1){
//         return 1;
//     }
//     return s1*factorial(s1-1);  //recursion  method is used
// }

// Coditional statement
// programme 1

// int main(){
//     int n;
//     cout<<"Enter your Number "<<endl;
//     cin>>n;

//     // if n is positive

//     if(n>0){
//         cout<<" n is positive"<<endl;
//     }
//     else{
//         cout<<"  n is  negative"<<endl;
//     }
//     return 0;
// }

// int main(){
    // int s(1,b);
    // // cin>>s1(>>b);
    // s1=cin.get();

    // // cout<<"value of s1 an(d b) is"<<s1<<" "(<<b)<<endl;
    // cout<<"value of s1 is "<<s1<<endl;
    // // cin.get()--->which considerd the spaces , tabs,newline values also

//     int s(1,b);
//     cout<<"enter the value of s1 is "<<endl;
//     cin>>s1;
//     cout<<"Enter the value o(f b) is "<<endl;
//     cin(>>b);
//     if(s(1>b)){
//         cout<<"A ia grater tha(n b)"<<endl;
//     }
//     if(s(1<b)){
//         cout<(<"b) is greater thean s1"<<endl;
//     }
//     return 0;

// }   //multiple condition check by the if-else  if-else-if-else 

// while loop
// from 1 tO N

// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         cout<<i<<endl;
//         i++;
//     }
//     return 0;
// }

// sum of first n natuarl number

// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     int sum=0;

//     while(i<=n){
//         sum=sum+i;
//         i=i+1;
//     }
//     cout<<"the value of sum is "<<sum<<endl;
//     return 0;
// }

// number is prime or not 1 to n/

// int main(){
//     int n;
//     cin>>n;
//     int i=2;

//     while(i<n){
//         if(n%2==0){
//             cout<<"given number is not prime"<<i<<endl;
//         }
//         else{
//             cout<<"given Number is prime"<<i<<endl;
//         }
//         i=i+1;   //check every number in gien series
//     }
// }

// pattern making.

// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<"*";
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<i;
//             j=j+1;
//         }
//         cout<<endl;  
//         i=i+1;
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for (int j=1; j<=n;j++){
//             cout<<j;

//         }
//         cout<<endl;
//     }
//     return 0;
// }

// With while loop
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<j;
//             // j++
//             j=j+1;

//         }
//         cout<<endl;
//         i=i+1;
//     }
//     return 0;
// }

// Reverse this patter  formula (n-j+1)

// int main(){
//     int n;
//     cout<<"enter Your number";
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<(n-j+1);
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }

// count the Number

// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     int count=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<count;
//             count++;
//             j++;

//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while(row<=n){
//         int col=1;
//         while(col<=row){
//             cout<<"*";
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;

//     }
//     return 0;
// }

// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while(row<=n){
//         int col=1;
//         while(col<=row){
//             cout<<col;    //reverse (n-col+1)
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while(row<=n){
//         int col=1;
//         while(col<=row){
//             cout<<(n);     //revers ulta n-row+1
//             col++;

//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while(row<=n){
//         int col=1;
//         int value=row;
//         while(col<=row){
//             cout<<(value);
//             value=value+1;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;

// }

// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<i-j+1;
//             j=j+1;
        
//         }
//         cout<<endl;
//         i=i+1;

//     }
//     return 0;

// }

// printing the character

// int main(){
//     // char ch='a'+1;
//     // cout<<ch;
//     cout<<ch+1;
//     return 0;
// }

// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while(row<=n){
//         int col=1;
//             char ch='A'+row-1;
//         while(col<=row){
//             cout<<ch;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }


// print a-z

// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     char ch='A';
//     while(row<=n){
//         int col=1;
//         while(col<=n){
//             cout<<ch;
//             ch=ch+1;
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while(row<=n){
//         int col=1;
//         while(col<=row){
//             char ch=('A'+row+col-2);
//             cout<<ch;
//             col++;
//         }
//         cout<<endl;
//         row=row+1;
//     }
//     return 0;
// }

// int main(){
//     char i=97;
//     // cout<<i;
//     while(i<=122){
//         cout<<i<<endl;
//         i=i+1;
//     }
//     cout<<endl;
// }

// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while(row<=n){
//         int col=1;
//         char start=('A'+n-row);
//         while(col<=row){
//             cout<<start;
//             start=start+1;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cin>>n;
//     for(int row=1;row<=n;row++){
//         char start=('A'+n-row);
//         for(int col=1; col<=row; col++ ){
//             cout<<start;
//             start++;
            
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// spacs and indent problem
// int main(){
//     int n;
//     cin>>n;
//     int row =1;
//     while(row<=n){

//     // white spaces
//     int space=n-row;
//     while(space){
//         cout<<" ";
//         space=space-1;

//     }
//     //stars *
//     int col=1;
//     while(col<=row){
//         cout<<"*";
//         col++;
//     }
//     cout<<endl;
//     row++;
//     }
//     return 0;


// }

// int main(){
//     int n;
    // cin>>n;
    // int row=1;
    // while(row<=n){
    //     int space =n-row;
    //     while(space){
    //         cout<<" ";
    //         space=space-1;
    //     }
    //     int i=1;
    // while(i<=row){
    //     cout<<(n+i-7);
    //     i++;
    // }

//         int j=1;
//         while(j<=row){
//             cout<<j;
//             j=j+1;

//         }

//         int start = row-1;
//         while(start){
//             cout<<start;
//             start=start-1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     int count=1;
//     while(i<=n){
//         int j=1;
//     while(j<=i){
//         cout<<count;
//         count++;
//         j++;

//     } 
//     cout<<endl;
//     i++;
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//     char ch=('A'+j-1);
//         while(j<=n){
//             cout<<ch;
//             ch++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }


// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     char ch='A';
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<ch;
//             ch++;
//             j++;


//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=(n-i+1)){
//             cout<<"*";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }

// int main(){
//     int n=5;
//     for(int i=0;i<n;i++){
//         for(int space=0;space<i; space++){
//             cout<<" ";
//         }
//         for(int j=n; j>i; j-- ){
//             cout<<i;
//         }
//         cout<<endl;
//     }
//     return 0;

// }   //check this program under stand it


// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         int space=0;
//         while(space<=n+i-j-1){
//             cout<<" ";
//             space++;
//         }
//         while(j<=n-i){
//             cout<<i;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     int count=1;
//     while(i<=n){
//         int j=1;
//         int space=i+1;
//         while(space<=n){
//             cout<<" ";
//             space++;

//         }
//         while(j<=i){
//             cout<<count;
//             count++;
            
//             j++;

//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }

// Bitwisee operator


// int main(){
//     int a=4;
//     int b=6;
//     cout<<"(a&b) is"<<(a&b)<<endl;
//     cout<<"(a|b) is "<<(a|b)<<endl;
//     cout<<"~a "<<~a<<endl;   //1's compliment for check the number is -ve or not find then take 2' compliment with 1' compliment in second step binary check process
//     cout<<" (a^b) "<<(a^b)<<endl;
//     // left shift and Right shift
//     cout<<(b<<2)<<endl;   // //n<<m  ==> ans(n*2^m)
//     cout<<(b>>4);   // // formula direct find right shift  n>>m ===>Ans (n/2^m)    
//     return 0;
// }


// incrementation 

// int main(){
//     int a=1;
//     int b=2;
//     if(a-- >0 && ++b>2){
//         cout<<"stage inside if"<<endl;
//     }
//     else{
//         cout<<"stage 2 -inside else";
//     }
//     cout<<a<<" "<<b<<endl;
//     int number=3;
//     cout<<(25*(++number))<<endl;

//     return 0;
// }
// int main(){
//     int i=5;

//     cout<<i++;
//     cout<<++i;
//     cout<<i--;
//     cout<<--i;
//     return 0;
// }


// for loop
// sum of first number

// int main(){
//     int n;
//     cout<<"Enter Your Value"<<endl;
//     cin>>n;
//     int sum=0;
//     for(int i=1;i<=n; i++){
//        sum=sum+i;
//        }
//     cout<<sum<<endl;

// }
// sumof Odd Number
// int main(){
//     int n;
//     cout<<"Enter your number:";
//     cin>>n;

//     int sum=0;
//     for(int i=1;i<=n;i++){
//         if(i%2!=0){
//             cout<<i<<endl;
//             sum=sum+i;

//         }
        
//     }
//     cout<<"the sum of first n odd number "<<sum;
//     return 0;
// }

// fabonachi series

// int main(){
//     int n;
// cin>>n;
// int a=0;
// int b=1;
// cout<<a<<" "<<b<<" ";
// for(int i=1;i<=n; i++){
//     int nextnumber=a+b;
//     cout<<nextnumber<<" ";
//     a=b;
//     b=nextnumber;
// }
// return 0;
// }

// int main(){    //infinite loop
//   1  for(int i=0;i<=5;i--){
//         cout<<i;
//         i++;
//     }

// for(int i=0;i<=15;i+=2){
    // cout<<i<<" ";
    // if(i&1){
    //     continue;
    // }
// }

// for(int i=0;i<5;i++){
//     for(int j=0;j<=5;j++){
//         cout<<i<<" "<<j<<endl;
//     }
// }

// for(int i=0;i<5;i++){
//     for(int j=0;j<=5; j++){
//         if(i+j==10){
//             break;
//         }
//         cout<<i<<" "<<j<<endl;
//     }
// }

// }
// int main(){
    // int n;
    // cout<<"enter your number "<<endl;
    // cin>>n;
    // int i=1;
    // for(; ;){
    //     if(i<=n){
    //         cout<<i<<endl;
    //     }
    //     else{
    //         break;
    //     }
    //     i++;
    // }

    // for(int a=1, b=1, c=1; a>=n,b>=n,c>=n;a--,b--,c--){
    //     cout<<a<<" "<<b<<" "<<c;     //we can write like this
    // }
// }



// check given number is prime or not

// int main(){
//     int n;
//     cout<<"enter your number";
//     cin>>n;
//     bool isprime=1;
//     for(int i=2;i<n;i++){


//     // reminder is zero means not prime

//     if(n%i==0){
//         //cout<<"the number is not prime"
//         isprime=0;
//         continue;
//     }

// }
// if(isprime==0){
//     cout<<"Not prime Number "<<endl;

// }
// else{
//     cout<<"is a prime number"<<endl;
// }


// }



// int main(){
//     for (int i=0;i<5;i++){
//         cout<<"hi"<<endl;
//         cout<<"hey"<<endl;
//         // continue;
//         // break;
//         cout<<"not considerde after continue";
//     }
// }

// variable scope

// int main(){
//     int a=3;
//     cout<<a<<endl;
//     if(true){
        // int b=5;
//         cout<<b<<endl;   //this value is lies within this block { }
//     }
//     int b=9;   //this value is lies in main block { }
//     cout<<b;

//     // int b;  //this will not work because we cannot declare the same variable in same block
//     // cout<<b;

//     int i=1;
//     for(; i<8; i++){
//         cout<< "H i "<<endl;

//     }
    
//     if(1){
//         int b=3;
//         if(1){
//             // int b;
//             cout<<b;   //we can access this through the inheritence
//             if(1){
//                 int b;
//                 // cout<<b;  //pyramid dom
//             }
//         }
//     }
// }




// Qu.1
//  sub and prod from digits of an integer

// int main(){
//     int n;
//     cout<<"Enter your Number"<<endl;
//     cin>>n;

//     int prod=1,sum=0;
//     for(; n!=0;){
//         int digits=n%10;
//         prod=prod*digits;
//         sum=sum+digits;
//         n=n/10;
//     }
//     cout<<endl;
//     cout<<prod-sum;

//     return 0;

    

    
// }

// int main(){
//     int n;
//     cout<<"enter your Number:";
//     cin>>n;
//     int prod=1;
//     int sum=0;
//     while(n!=0){
//         int digitd=n%10;     //divider is grater than divisor then value divisior as it IS IN modulo
//         prod=prod*digitd;
//         sum=sum+digitd;

//         n=n/10;

//     }
//     cout<<endl;
//     cout<<prod-sum;
//     return 0;
// }
// how many times 1 bits is appering
// int main(){
//     int n;
//     cin>>n;
//     int count=0;
//     while(n!=0){
//         if(n&1){
//             count++;
//         }
//         n=n>>1;
//     }
//     cout<<count;
//     // cout<<(3>>1);
//     return 0;
// }


// binary to decimal



// int main(){
//     int n;
//     cin>>n;
//     int i=0,ans=0;

//     while(n!=0){
//         int digits=(n%10);
//         if(digits==1){
//             ans=ans+pow(2,i);
//         }
//         n=n/10;
//         i++;
//     }
//     cout<<ans<<endl;
//     return 0;
// }

// decimal to// binary
// int main(){
//     int n;
//     cin>>n;

//     int ans=0;
//     for(int i=0;n!=0 ;i++){
//         int bit=(n)&1;
//         bit=bit%10;
//         ans=(bit*pow(10,i))+ans;
//         n=n>>1;

//     }
//     cout<<ans<<endl;
// }

// int main(){
//     int c,b;
//     cin>>c;
//     while(c>0){
//         b=c%2;
//         cout<<b;
//         c=c/2;

//     }
//     return 0;
// }

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<=n;i++){


//     if(i%2!=0){
//         cout<<i<<endl;
//         // cout<<"its a prime number";
//     }
//     }
//     return 0;
// }

// TO reverse the Integers/

// int main(){
//     int n;
//     cin>>n;

//     int ans=0;
//         int INT_MAX=2147483647;
//         int INT_MIN=-2147483648;
//     while(n!=0){
//         int digit=n%10;
        
//         ans=(ans*10)+digit;
//         if((INT_MIN)/10>ans ||((INT_MAX)/10<ans)){
//         cout<<0;
//         }
//         n=n/10;


//     continue;
//     }
//     cout<<ans;
    
//     return 0;
// }

// value of user is power of two is or not/

// int main(){
//     int n;
//     cin>>n;
//     int ans=1;

// for(int i=0;i<=30; i++){
//     int ans=pow(2,i);
//     if(ans==n){
//         cout<<true;
//     }
// }

    
//  return 0;   
// }

// compliment of Number
// int main(){
//     int n;
//     cin>>n;
//     int m=n;
//     int mask=0;
//     if(n==0){
//         cout<< 1;
//     }
//     while(m!=0){
//         mask=(mask<<1)|1;
//         m=m>>1;

//     }
//     int ans=(~n)&mask;
//     cout<<ans;
//     return 0;
// }

// switch case

// int main(){
//     char ch='a';
//     int num;
//     cin>>num;

//     cout<<endl;
//     switch(num){   //we can write only one input at time but we can use instead of nested loop
//         case 1:
//         cout<<"your are the first"<<endl;
//         cout<<"first will be executed"<<endl;
//         break;

//         case 2:
//         cout<<"second"<<endl;
//         cout<<"your are good"<<endl;
//         break;

//         case 3:
//         cout<<"your are done "<<endl;
//         break;
//         case 'a':
//         cout<<"your name start with ";
//         break;

//         default:
//         cout<<"your not eligible"<<endl;
//     }
//     return 0;
// }

// using exit() function in infinte loop
// int main(){
//     int num;
//     cin>>num;
//     while ((true))
//     {
//         switch (num)
//         {
//         case 1:
//             cout<<"your are good";
//             exit(0);
//             // break;
        
//         default:
//         cout<<"you  cannot access";
//             break;
//         }
        
//     }
//     return 0;
// }

// simple calculator using switch case

// int main(){
//     int num1,num2;
//     char ch;
//     cout<<"Enter your choise"<<endl;
//     cout<<"1.Addition"<<endl;
//     cout<<"2.substraction"<<endl;
//     cout<<"3.multiplication"<<endl;
//     cout<<"4.Division"<<endl;
//     cout<<endl;
//     cout<<"Enter your num1"<<endl;
//     cin>>num1;
//     cout<<"Enter your num2 "<<endl;
//     cin>>num2;
//     cout<<"Enter your Choise"<<endl;
//     cin>>ch;
    

//     switch(ch){
//         case '+':
//         cout<<"the Addition of two number is "<<num1+num2<<endl;
//         break;
//         case '-':
//         cout<<"the substraction of two number is"<<num1-num2<<endl;
//         break;
//         case '*':
//         cout<<"the multiplication of two number is "<<num1*num2<<endl;
//         break;
//         case '/':
//         cout<<"the division of two number is "<<num1/num2<<endl;
//         break;
//         default:
//         cout<<"your not enter as per the choise"<<endl;
//     }
//     return 0;


// }
// the power of number is

// int  main(){
//     int a,b;
//     cin>>a>>b;
//     int ans=1;
//     for(int i=1;i<=b;i++){
//         ans=ans*a;
//     }
//     cout<<"the answer is "<<ans<<endl;
//     return 0;
// }


// factorial of number is 

// int main(){
//     int n;
//     cout<<"Enter your number"<<endl;
//     cin>>n;

//     int ans=1;
//     for(int i=0;i<n;i++){
//         ans=ans*(n-i);

//     }
//     cout<<"the factorial of number is "<<n<<" is "<<ans<<endl;
//     return 0;
// }

// combination samelike we can make
// condition is n>=r   n is element and r is bunching this element

// int main(){
//     int n;
//     cin>>n;
//     int r;
//     cin>>r;
//     int c;
//     c=(n-r);
//     int fact_n=1;
//     int fact_r=1;
//     int fact_c=1;
//     int value;
//     for(int i=0; i<n;i++){
//         fact_n=fact_n*(n-i);
//     }
//     for(int i=0; i<r ; i++){
//         fact_r=fact_r*(r-i);
//     }
//     for(int i=0; i<c;i++){
//         fact_c=fact_c*(c-i);
//     }
//     value=(fact_r*fact_c);
//     cout<<"the value of combinatio is "<<(fact_n/value);
//     return 0;
// }



// powerof two using function

// int power(int a,int b){
//     int ans=1;
//     for(int i=1;i<=b;i++){
//         ans=ans*a;
//     }
//     return ans;
// }

// int main(){
//     int a,b;
//     cin>>a>>b;

//     int answer=power(a,b);
//     cout<<"the power of numer is "<<answer<<endl;
//     int n,m;
//     cin>>n>>m;
//     int an=power(n,m);
//     cout<<"the power of numer is "<<an<<endl;
//     return 0;
// }

// counting function
// void printCounting(int n){
//     for (int i=1;i<=n;i++){
//         cout<<i<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     printCounting(n);
//     return 0;
// }

// after some time checking/
// void numberbit(int a,int b){
//     int n;
//     int count =0;
//     for(int i=0; n=0;i++){
//     n=a&b;
//     count++;
//     n=n>>1;

//     }
//     cout<<count;
// }
// int main(){
//     int a;
//     cin>>a;
//     int b;
//     cin>>b;
//     numberbit(a,b);

// }

// check the number is prime or not/

// bool isprime(int n){
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             return 0;
//         }
//     }
//     return 1;
// }

// int main(){
//     int n;
//     cin>>n;
//     if(isprime(n)){
//         cout<<"is the prime number "<<endl;
//     }
//     else{
//         cout<<"Not a prime Number"<<endl;
//     }
// }

// void update(int n){
//     n=n/2;

// }

// int main(){
//     int a=10;
//     update(a);
//     cout<<a;
// }  //block wise variation

// int update(int n){
//     n-=5;
//     return n;
// }
// int main(){
//     int a=15;
//     update(a);  //not storing anywhere
//     cout<<a;
// } //block variation

// int update(int a){
//     int ans=a*a;
//     return ans;
// }

// int main(){
//     int a=12;
//     a=update(a);
//     cout<<a;

// }
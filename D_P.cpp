#include <iostream>

#include <bits/stdc++.h>
using namespace std;

/*
step 1 -> recursion + memoization(T-B-A);
step2 -> Tabulation (B-U-A);
step 3 -> Space Optimization

*/

// problem no 1  --> Fibonacchi series

/*

int fib1(int n ){
    //base case
    if(n ==1 || n == 0){
        return n;
    }

    return fib1(n-1)+fib1(n-2);
}

int fib2(int n,vector<int>&dp){
    if(n<=1){
        return n;
    }

    if(dp[n]  != -1){
        return dp[n];
    }

    dp[n] = fib2(n-1,dp) + fib2(n-2,dp);

    return dp[n];

}

int fib3(int n,vector<int>&dp){
    dp[0] = 0;
    dp[1] = 1;

    for(int i =2;i<=n;i++){
        dp[i] = dp[i-1]+dp[i-2];
    }
    return dp[n];
}


int fib4(int n ){
    int a = 0;
    int b = 1;
    if(n == 0){
        return a;
    }
    if(n == 1){
        return b;
    }

    for(int i = 2;i<=n;i++){
        int c = a+b;
        a = b;
        b = c;

    }

    return b;


}
int main(){
    int n;
    cout<<"Enter your value of n "<<endl;
    cin>>n;

    // cout<<fib(n)<<endl;  1

    // vector<int>dp(n+1 , -1);

    // cout<<fib2(n,dp)<<endl;

    // vector<int>dp(n+1);

    // cout<<fib3(n,dp)<<endl;

    cout<<fib4(n)<<endl;
    return 0;
}
*/

// PRoblem 2 --> MInimum Cost to Climbing the Stair

/*
int solve1 (vector<int>&cost,int n,vector<int>&dp)
{
    //base case

    if(n == 0){
        return cost[0];
    }
    if(n == 1){
        return cost[1];
    }

    //step3

    if(dp[n] != -1){
        return dp[n];
    }

    dp[n] = cost[n] + min(solve1(cost,n-1,dp),solve1(cost,n-2,dp));
    return dp[n];
}

int solve3(int n,vector<int>&cost){
    //step 1;
    vector<int>dp(n+1);
    //step 2;
    dp[0] = cost[0];
    dp[1]  = cost[1];

    //3rd Step

    for(int i =2;i<n;i++){
        dp[i] = cost[i]+min(dp[i-1],dp[i-2]);
    }
    return min(dp[n-1],dp[n-2]);

}

int solve4(int n,vector<int>&cost){
    int a = cost[0];
    int b = cost[1];

    for(int i=2;i<n;i++){
        int c = cost[i] +min(a,b);
        a = b;
        b = c;
    }

    return min(a,b);
}
int main(){
    vector<int>cost ={1,100,1,1,1,100,1,1,100,1};

    int n = cost.size();

    // vector<int>dp(n+1 ,-1); //1

    // int ans   = min(solve1(cost,n-1,dp),solve1(cost,n-2,dp));

    // cout<<"the MIinmum cost is "<<ans<<endl;

    // cout<<solve3(n,cost)<<endl;

    cout<<solve4(n,cost)<<endl;
    return 0;
}

*/

// Minimum Number of Coins Are Need to Genrate the Amount

/*
int solverec(vector<int>&coins,int x){
    //base case
    if(x == 0){
        return 0;
    }
    if(x<0){
        return INT_MAX;
    }

    int mini = INT_MAX;

    for(int i = 0;i<coins.size();i++){
       int ans = solverec(coins,x-coins[i]);

       if(ans != INT_MAX){
        mini = min(mini,1+ans);
       }
    }
    return mini;
}

int solveMEM(vector<int>&coins,int x,vector<int>&dp){
    //base case
    if(x == 0){
        return 0;
    }
    if(x<0){
        return INT_MAX;
    }

    if(dp[x] != -1){
        return dp[x];
    }

    int mini = INT_MAX;

    for(int  i=0;i<coins.size();i++){
        int ans = solveMEM(coins,x-coins[i],dp);
        if(ans  != INT_MAX){
            mini = min(mini,1+ans);
        }

    }
    dp[x] = mini;
    return dp[x];
}



int solveTab(vector<int>&coins,int x){
    vector<int>dp(x+1,INT_MAX);
    dp[0] = 0;
    for(int  i=1;i<=x;i++){
        //for every1 to x;

        for(int j=0; j<coins.size(); i++){
            if(i-coins[j] >=0 && dp[i-coins[j]] != INT_MAX){
               dp[i] = min(dp[i],1+dp[i-coins[i]]);
            }
        }

    }

    if(dp[x] == INT_MAX){
        return -1;
    }
    else{
        return dp[x];
    }
}

int main(){
    vector<int>coins = {1,2,5,10,20,50};
    int x = 13;

    int ans = solverec(coins,x);  // 1
    if(ans == INT_MAX){
        cout<< -1;
    }
    else{
        cout<<"the Element Are Required to Generate the Amount " <<x<<"is " <<ans;
    }

//     vector<int>dp(coins.size() +1 ,-1);  //  2
//    int ans =  solveMEM(coins,x,dp);
//   if(ans == INT_MAX){
//     return -1;
//   }
//   else{
//     return ans;
//   }

// 3

// int ans = solveTab(coins,x);
// cout<<ans<<endl;

return 0;
}
*/
// Maximum Sum of Non Adjancent

/*

int (vector<int>&nums,int n){
    if(n == 0){
        return nums[0];
    }
    if(n<0){
        return 0;
    }

    int include = (nums , n-2)+nums[n];
    int exclude = (nums,n-1)+0;

    return max(include,exclude);
}

int sloveMem(vector<int>&nums,int n,vector<int>dp){
    //baase case
    if(n == 0){
        return nums[0];

    }
    if(n < 0){
        return 0;
    }
    if(dp[n] != -1){
        return dp[n];
    }

    int include = sloveMem(nums,n-2,dp)+nums[n];
    int exclude = sloveMem(nums,n-1,dp)+0;

    dp[n] = max(include,exclude);

    return dp[n];
}

int solveTab(vector<int>&nums){
int n = nums.size();
   vector<int>dp(n,0);
   dp[0] = nums[0];

   for(int i =1;i<=n;i++){

    if(i-2>=0){

       int include = dp[i-2]+nums[i];
      int exclude = dp[i-1]+0;
      dp[i] = max(include,exclude);
    }
   }
   return dp[n-1];


}

int SolveSpace_optimaization(vector<int>&nums,int n){
    int a = 0;
    int b = nums[0];

    for(int i=1;i<n;i++){
        int include =a+ nums[i];
        int exclude = b+0;
        int ans =  max(include,exclude);
        b = a;
        a = ans;
    }

    return b;
}

int main(){
    vector<int>nums ={9,9,8,2};
    int n = nums.size();

    // cout<<"the maximum Sum  is "<<(nums,n)<<endl; // 1

    // vector<int>dp(n+1,-1);  // 2
    // cout<<"the maximum sum using the Memoization is "<<sloveMem(nums,n,dp)<<endl;

//    cout<<"The maximum Using the tabulation "<<solveTab(nums)<<endl;  //3

// cout<<"the Maximum Sum  using the Space optimization "<<SolveSpace_optimaization(nums,n)<<endl;

    return 0;
}

*/

// House In Robbary

/*

long long int solve(vector<int>&cost){
    long long  a = 0;
   long long  int b = cost[0];

    for(int i = 1;i<cost.size();i++){
       long long  int include = a + cost[i];
        long long int exclude = b+0;
       long long  int ans = max(include,exclude);
        a = b;
        b  = ans;
    }
    return b;
}
int main(){

    vector<int>r = {1,3,2,1,1};
    int n = r.size();

    if(n == 1){
        return  r[0];
    }
    vector<int>first,second;
    for(int i =0;i<n;i++){
        if(i != n-1){
            first.push_back(r[i]);
        }
        if( i!=0){
            second.push_back(r[i]);
        }
    }

    cout<<"The Maximum Cost is "<<max(solve(first),solve(second));
}
*/

// Cut Rod Into Segment (x,y,z);

/*


int solverec(int n,int x,int y,int z){
    //base case
    if(n==0){
        return 0;
    }
    if(n<0){
        return INT_MIN;
    }

    int a = solverec(n-x,x,y,z)+1;
    int b = solverec(n-y,x,y,z)+1;
    int c = solverec(n-z,x,y,z)+1;
    return max(a,(b,c));
}

int solveMEM(int n,int x,int y,int z,vector<int>&dp){
    if(n == 0){
        return 0;
    }
    if(n<0){
        return INT_MIN;
    }
    if(dp[n] != -1){
        return dp[n];
    }

    int a = solveMEM(n-x,x,y,z,dp)+1;
    int b = solveMEM(n-y,x,y,z,dp)+1;
    int c = solveMEM(n-z,x,y,z,dp)+1;


    dp[n] = max(a,(b,c));
    return dp[n];
}

int solveTab(int n, int x,int y,int z){
    vector<int>dp(n+1,-1);
   dp[0] = 0;
   for(int i =1;i<=7;i++){
    if(i-x>=0 && dp[i-x]!= -1){
        dp[i] = max(dp[i],dp[i-x]+1);
    }

    if(i-y >=0 && dp[i-y] != -1){
        dp[i] = max(dp[i],dp[i-y]+1);
    }
    if(i-z>=0 && dp[i-z] != -1){
        dp[i] = max(dp[i],dp[i-z]+1);
    }
   }

   if(dp[n] < 0){
    return  0;
   }
   else{
    return dp[n];
   }
}
int main(){
    int n;
    cout<<"Enter Rod Size "<<endl;
    cin>>n;

    int x,y,z;
    cout<<"Enter your Segement Do ypu Want To Divide "<<endl;
    cin>>x>>y>>z;

    //By Recursion
    // cout<<solverec(n,x,y,z);

    //by Memoization
    // vector<int>dp(n+1,-1);
    // cout<<"The Segment Are Possible are the "<<solveMEM(n,x,y,z,dp);

    //by tabulation

    // cout<<solveTab(n, x,y, z);
    return 0;
}
*/

// Count The DerangeMent
/*
#define mod 10000000007

int solverec(int n ){
    if(n == 1)
    {
        return 0;
    }

    if( n == 2){
        return 1;

    }
    int a = ((n-1)%mod);
    int b = (((solverec(n-1))%mod) + (solverec(n-2)%mod));
    int ans = (a*b)%mod;

    return ans;
}

long long int solveMEM(int n,vector<long long int>&dp){
    if(n == 1){
        return 0;
    }
    if(n == 2){
        return 1;
    }

    if(dp[n] != -1){
        return dp[n];
    }

  long   int a = ((n-1)%mod);
    long int b = (((solveMEM(n-1,dp))%mod) + (solveMEM(n-2,dp)%mod));
    long int ans = (a*b)%mod;

    dp[n] = ans;
    return dp[n];
}


long long int solveTab(int n){
    vector<int>dp(n+1,-1);
    dp[1] = 0;
    dp[2] = 1;
    for(int i =3;i<=n;i++){
        long long int a = dp[i-1]%mod;
        long long int b = dp[i-2]%mod;

        long long int sum = (a+b)%mod;

        long long int ans = ((i-1)*sum)%mod;
        dp[i] = ans;
    }
    return dp[n];

}

long long int SolveSpace_optimaization(int n){
     long long int a = 0;
     long long int b =1;
     for(int  i = 3;i<=n;i++){
        long long int  first = a%mod;
        long long int second = b%mod;

        long long sum = (first+second)%mod;

        long long int ans = ((i-1)*sum)%mod;

        a = b;
        b = ans;

     }
     return b;
}

int main(){
    vector<int>D = {0,1,2,3};
    int n = D.size();

    // cout<<"the count Using the Recusrsion "<<solverec(n)<<endl;

    //Memoization
    // vector<long long int>dp(n+1,-1);
    // cout<<"USing the Memoization is  "<<solveMEM(n,dp)<<endl;

    // cout<<"the Count using the "<<solveTab(n)<<endl;

    cout<<"Space optimaization using the "<<SolveSpace_optimaization(n)<<endl;
    return 0;
}

*/

// Ninja and fence (painting fence algorithm );

#define MOD 10000000007

/*
int add(int a,int b){
    return ((a%MOD)+(b%MOD))%MOD;
}
int mul (int a,int b){
    return ((a%MOD)*1LL*(b%MOD))%MOD;
}

int solverec(int n,int k){
    if(n == 1){
        return k;
    }
    if(n == 2){
        return add(k,mul(k,k-1));
    }


    int ans = add( mul(solverec(n-2,k),k-1) ,mul(solverec(n-1,k),k-1));
    return ans;
}

int solveMem(int n,int k,vector<int>&dp){
    if(n == 1){
        return k;
    }

    if( n == 2){
        return add(k,mul(k,k-1));
    }
    if(dp[n] != -1){
        return dp[n];
    }

    int ans = add(mul(solveMem(n-2,k,dp),k-1),mul(solveMem(n-1,k,dp),k-1));
    dp[n] = ans;
    return dp[n];
}


int SolveTab(int n,int k){
    vector<int>dp(n+1,0);

    dp[1] = k;
    dp[2] = add(k,mul(k,k-1));

    for(int  i = 3;i<=n;i++){
        dp[i] = add(mul(dp[i-2],k-1),mul(dp[i-1],k-1));
    }

    return dp[n];

}


int SolveSpace_optimaization(int n,int k){
    int a = k;
    int b  = add(k,mul(k,k-1));

    for(int i = 3;i<=n;i++){
        int ans = add(mul(a,k-1),mul(b,k-1));
        a = b;
        b = ans;
    }
    return b;
}
int main()
{
    int n;
    cout << "Enter your Number of post to color " << endl;
    cin >> n;

    int k;
    cout<<"Enter your Colors "<<endl;
    cin>>k;
   //by recusrsion

    // cout<<solverec(n,k)<<endl;

    //by the Memoization
    vector<int>dp(n+1,-1);

    // cout<<solveMem(n,k,dp);
    // cout<<Solvetab(n,k);
    cout<<SolveSpace_optimaization(n,k);


    return 0;
}
*/

// Knap_Sack Problem

/*
int solve(vector<int>&weight,vector<int>&values,int index,int capacity){
    if(index == 0){
        if(weight[0] <= capacity){
            return values[0];
        }
        else{
            return 0;
    }
    }


    int include = 0;
    if(weight[index] <= capacity){
        include = values[index] +solve(weight,values,index-1,capacity-weight[index]);
        int exclude = 0+solve(weight,values,index-1,capacity);
        int ans = max(include,exclude);
        return ans;
    }

}

int solveMem(vector<int>&w,vector<int>&Values,int index,int capacity,vector<vector<int>>&dp){
    //base case
    if(index == 0)
    {
        if(w[0] <= capacity){
            return Values[0];
        }
        else{
            return 0;
        }
    }

    if(dp[index][capacity] != -1){
        return dp[index][capacity];
    }

    int include = 0;
    if(w[index]<=capacity){
     include  = Values[index] +solveMem(w,Values,index-1,capacity-w[index],dp);
     int exclude = 0 + solveMem(w,Values,index-1,capacity,dp);

     dp[index][capacity] = max(include,exclude);
     return dp[index][capacity];
    }

}

int solveTab(vector<int>&w,vector<int>&values,int n, int capacity ){
    vector<vector<int>>dp(n+1,vector<int>(capacity+1,0));

    for(int i = w[0];i<=capacity;i++){
        if(w[0] <=capacity){
            dp[0][i] = values[0];
        }
        else{
            dp[0][i] = 0;
        }
    }

    for(int index = 1;index<=n;index++){
        for(int j = 0;j<=capacity;j++){
            int include = 0;
            if(w[index] <= j){
                include = values[index] + dp[index-1][j-w[index]];
                int exclude = 0+ dp[index-1][j];
            dp[index][j] = max(include,exclude);
            }
        }
    }
   return  dp[n][capacity];
}

int SolveSpace_optimaization(vector<int>&w,vector<int>&values,int n,int capacity){
    //step
    vector<int>prev(capacity+1,0);
    vector<int>curr(capacity+1,0);

    //step 2;
    for(int W = w[0];W<=capacity;W++){
        if(w[0] <= capacity){
            prev[W] = values[0];
        }
        else{
            prev[W] = 0;
        }
    }

    //step 3: remaining recuesive calls
    for(int index = 1;index<=n;index++){
        for(int j = 0;j<=capacity;j++){
            int include = 0;

            if(w[index] <= j){
                include = values[index] + prev[j-w[index]];
                int exclude = 0 + prev[j];
                curr[j] = max(include,exclude);
            }
        }
        prev = curr;

    }
    return prev[capacity];
}

int solve_more_optimizd(vector<int>&w,vector<int>&values,int n,int capacity){
    //create the Array
    vector<int>curr(capacity+1,0);

    for(int i = w[0];i<=capacity;i++){
        if(w[0]<=capacity){
            curr[i] = values[0];
        }

        else{
            curr[i]  = 0;
        }
    }

    //step 3;

    for(int index = 1 ;index<n;index++){
         for(int j = capacity;j>=0;j--){
            int include = 0;

            if(w[index] <= j){
                  include = values[index] + curr[j-w[index]];
                  int exclude = 0 + curr[j];
                  curr[j] = max(include,exclude);
            }
         }
    }
    return curr[capacity];
}
int main(){

vector<int>w = {1,2,4,5};
vector<int>values = {5,4,8,6};

int index = w.size();

// cout<<solve(w,values,index-1,5);

//Memomization
// vector<vector<int>>dp(index,vector<int>(6,-1));
// cout<<solveMem(w,values,index-1,5,dp);

// Tabulation
// cout<<solveTab(w,values,index-1,5);

//space optimization
// cout<<SolveSpace_optimaization(w,values,index-1,5);

//more space optimization
cout<<solve_more_optimizd(w,values,index-1,5);
return 0;

}
*/

// Combnation of the Sum IV problem

/*
int solverec(vector<int>&num,int tar){
    if(tar<0){
        return 0;
    }
    if(tar==0){
        return 1;
    }


    int ans  = 0;
    for(int i = 0; i<num.size();i++){
      ans+= solverec(num,tar-num[i]);
    }
    return ans;
}

int solveMem(vector<int>&num,int tar,vector<int>&dp){
    if(tar<0){
        return 0;
    }
    if(tar == 0){
        return 1;
    }
    //step 3;
    if(dp[tar] != -1){
        return dp[tar];
    }

    int ans = 0;
    for(int i = 0;i<num.size();i++){
        ans+=solveMem(num,tar-num[i],dp);
    }
    //step 2;
    dp[tar] =ans;
    return dp[tar];
}

int solveTab(int tar,vector<int>&nums){
    vector<int>dp(tar+1,0);

    dp[0] = 1;

    for(int  i = 1;i<=tar;i++){
        //1 to tar;
        for(int j = 0;j<nums.size();j++){
            if( i - nums[j] >= 0){
                dp[i] += dp[i-nums[j]];
            }
        }
    }
    return dp[tar];
}

int main(){
    vector<int>num = {1,2,5};

    int tar;
    cout<<"Enter your target"<<endl;
    cin>>tar;

    //by Recursion
    // cout<<"Answer by the recursion is "<<solverec(num,tar)<<endl;

    //by memomization

    // vector<int>dp(tar+1,-1);   //step 1;
    // cout<<"The number of possible ways to answer is "<<solveMem(num,tar,dp)<<endl;

    //by tabulation
    cout<<"the answer by the tabulation  is "<<solveTab(tar,num)<<endl;
    return 0;

}

*/

// Get Minimum Square  by possible ways

/*

int solveMem(int n, vector<int>&dp){
    if( n == 0){
        return 0;
    }

    if(dp[n] != -1){
        return dp[n];
    }

    int  ans = n;
    for(int  i=1 ; i*i<=n;i++){
        int temp = i*i;

        ans = min(ans,1+solveMem(n-temp,dp));
    }
    dp[n ] = ans;
    return dp[n];
}

int Solvetab(int n ){
    vector<int>dp(n+1,INT_MAX);

    dp[0] = 0;

    for(int i = 1;i<=n;i++){
        for(int j = 1;j*j<=n;j++){
            int temp = j*j;
            if(i-temp>=0){
                dp[i] = min(dp[i] , 1+dp[i-temp]);
            }
        }
    }
    return dp[n];
}
int main(){
    int n;
    cout<<"ENter your Number to find the Square "<<endl;
    cin>>n;

    //by recursion +memoization
    // vector<int>dp(n+1,-1);
    // cout<<"the answer is using the Memoization "<<solveMem(n,dp)<<endl;

    //tabulation

    cout<<"the answer using the tabulation is "<<Solvetab(n)<<endl;
}
*/

// Maximum Cost of Tickets  Problem

/*


int solverec(int n,vector<int>&days,vector<int>&cost,int index){

    if(index >= n){
        return 0;
    }

    //1 days
    int op1 = cost[0] + solverec(n,days,cost,index+1);

    //7 days
      int i = 0;
    for(i = index;i<n && days[i] <days[index]+7;i++);
         int op2 = cost[1] + solverec(n,days,cost,i);

    // 30  days
    for(int i = index;i<n && days[i] <days[index]+30;i++ );
        int op3 = cost[2] + solverec(n,days,cost,i);

    return min(op1 , min(op2,op3));

}

int solveMem(int n,vector<int>&days,vector<int>&cost,int index,vector<int>&dp){

    //base case
    if(index >= n){
        return 0;
    }


    if(dp[index] != -1){
        return dp[index];
    }

    int op1 = cost[0] + solveMem(n,days,cost,index+1,dp);

    //7 days
    int i;
    for(i = index ;i<n && days[i] <days[index]+7;i++);
        int op2 = cost[1] + solveMem(n,days,cost,i,dp);


   //30 days

   for( int i = index; i<n && days[i] < days[index]+30;i++);
        int op3 = cost[2] + solveMem(n,days,cost,i,dp);

dp[index] = min(op1 ,min(op2,op3));
return dp[index];

}

int SolveTab(int n,vector<int>&days,vector<int>&cost,int index){
    vector<int>dp(n+1,INT_MAX);

    dp[n] = 0;

    for(int k = n-1;k>=0;k-- ){
        int op1 = cost[0] + dp[k+1]; // for days 1
        int i;
        for(i = k ; i<n && days[i] < days[k] + 7 ;i++);
            int op2 = cost[1] + dp[i];
    for(int i = k ;i<n && days[i] < days[k] + 30 ; i++);
            int op3 = cost[2] + dp[i];
    dp[k] = min(op1 ,min(op2,op3));

    }
    return dp[0];

}


int SolveSpace_optimaization(int n,vector<int>&days,vector<int>&cost ){


    //using the queue
    int ans = 0;
    queue<pair<int,int>>month;
    queue<pair<int,int>>week;

    // iterating the days

    for(int day : days){
        //step1 : removed the expired days

        while(!month.empty() && month.front().first + 30 <= day){
            month.pop();
        }

        while(!week.empty() && week.front().first + 7 <= day){
            week.pop();
        }

        //step 2 : add cost of the current days

        week.push(make_pair(day,ans+cost[1]));
        month.push(make_pair(day,ans+cost[2]));

        //step 3 : ans update

        ans = min( ans + cost[0] ,min(week.front().second,month.front().second));
    }
    return ans;
}
int main(){
    vector<int>days = {1,3,4,5,7,8,20};
    vector<int>cost = {2,7,15};
    int n = days.size();
    int index  = 0;

    // cout<<"Answer using the Recursion "<<solverec(n,days,cost,index);

    //using the Memoization
    // vector<int>dp(n+1,-1);
    // cout<<"Answer is After using the Memoization  "<<solveMem(n,days,cost,index,dp)<<endl;

    //using the Tabulation

    // cout<<" Answer is After the tabulation is  " <<SolveTab(n,days,cost,index)<<endl;

    //Space Optimization
    // cout<<"minimum cost after the space optimization "  <<SolveSpace_optimaization(n,days,cost)<<endl;

    return 0;
}

*/

// Maximum Square

/*


int solveRec(vector<vector<int>>&mat,int i,int j,int &maxi){

    if(i  >= mat.size() || j>=mat[0].size()){
        return 0;
    }

    int right = solveRec(mat,i,j+1,maxi);
    int digonal = solveRec(mat,i+1,j+1,maxi);
    int down = solveRec(mat,i+1,j,maxi);

    if(mat[i][j] == 1){
        int ans = 1+ min(right ,min(digonal,down));
        maxi = max(ans,maxi);
        return maxi;
    }
    else{
        return 0;
    }

}

int solveMem(vector<vector<int>>&mat,int i,int j,int &maxi,vector<vector<int>>&dp ) {

    if(i>=mat.size() || j>=mat[0].size()){
        return 0;
    }


    int right = solveMem(mat,i,j+1,maxi,dp);
    int digonal = solveMem(mat,i+1,j+1,maxi,dp);
    int down = solveMem(mat,i+1,j,maxi,dp);

    //step 3
    if(dp[i][j] != -1){
        return dp[i][j];
    }

   if(mat[i][j] == 1){
        dp[i][j] = 1 + min(right , min(digonal,down));
        maxi = max(maxi,dp[i][j]);      //step 2;
       return dp[i][j];
    }
    else{
        return dp[i][j] = 0;
    }

}

int solveTab(vector<vector<int>>&mat,int &maxi){
    //creationo of dp arry
    int n = mat.size();
    int m = mat[0].size();

   vector<vector<int>>dp(n+1,vector<int>(m+1,0));

   for(int i = n-1 ; i>=0 ;i--){
    for(int j = m-1 ;j>=0;j--){
        int right = dp[i][j+1];
        int digonal = dp[i+1][j+1];
        int down = dp[i+1][j];

        if(mat[i][j] == 1){
            dp[i][j] = 1 + min(right,min(digonal,down));
            maxi = max(maxi,dp[i][j]);
        }
        else{
            dp[i][j] = 0;
        }
    }

   }

    return dp[0][0];

}


int SolveSo(vector<vector<int>>&mat,int &maxi){
    int n = mat.size();
    int m = mat[0].size();

    vector<int>curr(m+1,0);
    vector<int>next(m+1,0);


    for(int i = n-1 ;i>=0;i--){
        for(int j = m-1;j>=0;j--){
            int right = curr[j+1];
            int digonal = next[j+1];
            int down = next[j];

            if(mat[i][j] == 1){
                curr[j] = 1 + min(right,min(digonal,down));

                maxi = max(maxi , curr[j]);
            }
            else{
                curr[j] = 0;
            }
        }
        next = curr;
    }
    return curr[0];
}
int main(){
    int n,m;
    cout<<"Enter the Row and col"<<endl;
    cin>>n>>m;
    vector<vector<int>>mat(n,vector<int>(m));
    for(int i = 0;i<n;i++){
        for(int j  = 0;j<m;j++){
            cin>>mat[i][j];
        }
    }

    cout<<"The Matrix is  "<<endl;
    for(auto i : mat){
        for(auto j : i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    int maxi = 0;

    // cout<<"the maximum Sqauare  are formed is "<<solveRec(mat,0,0,maxi); // by recursion

    //by Memoization
    // vector<vector<int>>dp(n,vector<int>(m,-1));
    // cout<<"the maximum Square Is Formed Is "<<solveMem(mat,0,0,maxi,dp);

    //by Tabulation botttom top approach

    // cout<<"Answer Using the Bottom To Approach "<<solveTab(mat,maxi);

    //by Space optimization

    cout<<"Answer Using the Space Optimization "<<SolveSo(mat,maxi);

   return 0;

}
*/

// Minimum Score of Trigulation  ( 2D Dp)

/*


int solverec(vector<int>&v,int i,int j){
    //base case
    if(i+1 == j){
        return 0;
    }

    int ans = INT_MAX;

    for(int k = i+1;k<j;k++){
       ans = min( ans ,v[i]*v[j]*v[k] + solverec(v,i,k) + solverec(v,k,j));

    }
    return ans;
}

int solveMem(vector<int>&v,int i,int j,vector<vector<int>>&dp){
    //base case
    if(i+1 == j){
        return 0;
    }


//   step 3
   if(dp[i][j] != -1){
    return dp[i][j];
}
    int ans = INT_MAX;

    for(int k = i+1 ; k<j; k++){
        ans = min(ans , v[i]*v[j]*v[k] + solveMem(v,i,k,dp) + solveMem(v,k,j,dp));
    }
    //step 2;
    dp[i][j] = ans;
    return dp[i][j];

}

int Solvetab(vector<int>&v){
    int n = v.size();

    vector<vector<int>>dp(n,vector<int>(n,0));

    for(int i = n-1;i>=0;i--){
        for(int j = i+2;j<n;j++){
            int ans = INT_MAX;
            for(int k = i+1;k<j;k++){
                ans = min(ans,v[i]*v[j]*v[k] + dp[i][k] + dp[j][k]);
            }
            dp[i][j] = ans;
        }
    }
    return dp[0][n-1];
}

int main(){
    vector<int>v = {1,2,3};
    int n = v.size();
    //by recursion
    cout<<"The Minimum Score using  the Trigulation is "<<solverec(v,0,n-1)<<endl;
    //by Memoization

    vector<vector<int>>dp(n,vector<int>(n,-1));
    cout<<"the answer by the Memoization is "<<solveMem(v,0,n-1,dp)<<endl;

    //by the Tabulation
    cout<<"THe answer by the tabulation is "<<Solvetab(v)<<endl;
}

*/

// Minimum SideWays For Jump

/*
int solverec(vector<int>&obs ,int currlane,int currpos){
    //base case
    int n = obs.size();
    if(currpos == n){
        return 0;
    }

    if(obs[currpos+1] != currlane ){
        return  solverec(obs,currlane,currpos+1);
    }
    else{
        //always jump
        int ans = INT_MAX;

        for(int i = 1;i<=3; i++){
            if(currlane != i && obs[currpos] != i){
                ans = min( ans ,1+solverec(obs,i,currpos));
            }
        }
            return ans;
    }
}

int solveMem(vector<int>&obs,int currlane,int currpos,vector<vector<int>>&dp,int n){
    //base case
    if(currpos == n){
        return 0;
    }

    if(dp[currpos][currlane] != -1){
        return dp[currpos][currlane];
    }

    if(obs[currpos+1] != currlane){
        return solveMem(obs,currlane,currpos+1,dp,n);
    }
    else{

        //always jump
        int ans = INT_MAX;
        for(int i = 1;i<=3;i++){
            if(currlane != i && obs[currpos] != i){
              ans = min(ans,1+solveMem(obs,i,currpos,dp,n));
            }
        }
        dp[currpos][currlane] = ans;
        return dp[currpos][currlane];
    }
}

int solveTab(vector<int>&obs ){
    int n = obs.size();
    vector<vector<int>>dp(4,vector<int>(n,1e9));
    dp[0][n] = 0;
    dp[1][n] = 0;
    dp[2][n] = 0;
    dp[3][n] = 0;

    for(int currpos = n-1;currpos >=0;currpos--){
       for(int currlane = 1 ;currlane <=3 ; currlane++){
        if(obs[currpos+1] != currlane ){
            dp[currlane][currpos] = dp[currlane][currpos+1];
        }
        else{
            //always jump
            int ans = 1e9;
            for(int i = 1;i<=3;i++){
                if(currlane != i && obs[currpos] != i){
                    ans = min(ans ,1+dp[i][currpos+1]);
                }
            }
            dp[currlane][currpos] = ans;
        }

       }
    }
    return min(dp[2][0] , min(dp[0][1]+1 ,dp[3][0]+1) );

}

int solveSO(vector<int>&obs,int currpos,int currlane){
    int n = obs.size();

    vector<int>curr(4,1e9);
    vector<int>next(4,1e9);

    next[0] = 0;
    next[1] = 0;
    next[2] = 0;
    next[3] = 0;

    for(int currpos = n-1;currpos>=0 ; currpos--){
        for(int currlane = 1; currlane <= 3;currlane++){
            if(obs[currpos+1] != currlane){
                curr[currlane] = next[currlane];
            }
            else{
                int ans = 1e9;

                for(int i = 1;i<=3;i++){
                    if(currlane != i && obs[currpos] != i){
                        ans = min(ans,1+next[i]);
                    }
                    curr [currlane] = ans;
                }
            }
            next = curr;
        }
    }
    return min(next[2] ,min(1+next[1] , 1+next[3]));
}
int main(){

    vector<int>obs = {0,1,2,3,0};

    int n = obs.size()+1;

    //by Recursion
    // cout<<"the Answer Form the Recursion is "<<solverec(obs,2,0)<<endl;

    //by Memoization

    // vector<vector<int>>dp(n,vector<int>(n,-1));
    // cout<<"the answer by the Memoization "<<solveMem(obs,2,0,dp,n-1)<<endl;

    //by the tabulation

    // cout<<"The answer by the tabulation is "<<solveTab(obs)<<endl;
    cout<<"The answer by the tabulation is "<<solveSO(obs,2,0)<<endl;
    return 0;
}

*/

// Reducing the Dishes

/*
int solverec(vector<int>&statis , int index,int time){
    //base case
    if(index == statis.size()){
        return 0;
    }

    int include = statis[index] *(time+1) +solverec(statis,index+1,time+1);
    int exclude = 0 + solverec(statis,index+1,time);

    return max(include,exclude);


}


int solveMem(vector<int>&statis,int index,int time ,vector<vector<int>>&dp){
    //base case
    if(index == statis.size()){
        return 0;
    }

    int include = statis[index] * (time+1) + solveMem(statis,index+1,time+1,dp);
    int exclude = 0 + solveMem(statis,index+1,time,dp);

    return dp[index][time] = max(include,exclude);

}

int solvetab(vector<int>&statis){
    //step 1:create the dp array
    int n = statis.size();
    vector<vector<int>>dp(n+1,vector<int>(n+1,0));

     //apply loop for the bottom -up Approach
     for(int index = n-1;index>=0;index--){
       for(int time = index ; time>=0;time--){

        int include = statis[index]*(time+1) + dp[index+1][time+1];
        int exclude = 0 + dp[index+1][time];
        dp[index][time] = max (include,exclude);
       }
     }
     return dp[0][0];
}

int solveSO(vector<int>&statis){
    int n = statis.size();

    // create the storage array
    vector<int>curr(n+1,0);
    vector<int>next(n+1,0);

    for(int index = n-1;index>=0;index--){
        for(int time= index ; time>=0;time--){
            int include = statis[index]*(time+1) + next[time+1];
            int exclude = 0 + next[time];

            curr[time] = max(include,exclude);
        }
        next = curr;
    }
    return next[0];
}
int main(){

    vector<int>s = {-1,-8,0,5,-9};

  int n = s.size();

    // cout<<"The Answer is By the "<<solverec(s,0,0)<<endl;
 // By Memoization
//   vector<vector<int>>dp(n+1,vector<int>(n+1 ,-1));
//   cout<<"the Answer  by the Memoization is "<<solveMem(s,0,0,dp);

//by the Tabulation
// cout<<"the answer by usig the tabulation "<<solvetab(s)<<endl;

cout<<"Answer By using the Space OPtimization "<<solveSO(s)<<endl;
return 0;
}

*/

// Longest Increasing Sequence

/*
int solverec(int n, vector<int> &a, int current, int prev)
{
    if (current == n)
    {
        return 0;
    }
     int include = 0;
    if (prev == -1 || (a[current] > a[prev])){

           include = 1 + solverec(n, a , current + 1, current);
    }

    int exclude = 0 + solverec(n, a, current + 1, prev);
    int ans = max(include, exclude);
    return ans;
}

int solveMem(int n,vector<int>&a,int current,int prev,vector<vector<int>>&dp){
    //base case
    if(current == n){
        return 0;
    }

    if(dp[current][prev+1] != -1){
        return dp[current][prev+1];
    }

    int include = 0;
    if(prev == -1 || a[current] > a[prev] ){
        include = 1 + solveMem(n,a,current+1,current,dp);
    }
    int  exclude = 0 + solveMem(n,a,current+1,prev,dp);
    dp[current][prev+1] = max (include,exclude);
    return dp[current][prev+1];
}


int solvetab(int n,vector<int>&a){
    //step 1: create the dp Array
    vector<vector<int>>dp(n+1,vector<int>(n+1, 0));
   //step to apply the loop for the bottom up Approach
   for(int curr = n-1;curr>=0;curr--){
    for(int prev = curr-1 ;prev>=-1;prev--){
        int include = 0;
        if(prev == -1 || a[curr] > a[prev]){
            include = 1+dp[curr+1][curr+1];

        }
        int exclude = 0 + dp[curr+1][prev+1];

        dp[curr][prev+1] = max(include,exclude);
    }
   }
   return dp[0][0];

}

int solveSo(int n,vector<int>&a){
    //create the o(n) space for the ans

    vector<int>currRow(n+1,0);
    vector<int>nextRow(n+1,0);

    //apply the for the Traversing the array
    for(int curr = n-1 ; curr>=0 ;curr--){
        for(int prev = curr-1;prev>=-1;prev--){
            int include = 0;
            if(prev == -1 || a[curr] > a[prev]){
                include = 1 + nextRow[curr+1];
            }
            int exclude = 0 + nextRow[prev+1];
            currRow[prev+1] = max(include,exclude);
        }
        nextRow = currRow;
    }
   return  nextRow[0];
}

int main()
{
    vector<int> a = {0, 8, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15};
// vector<int>a = {5,8,3,7,9,1};
    int n = a.size();

    // by recursion

    // cout << "answer by the Recursion " << solverec(n, a, 0, -1) << endl;

    // solve by the Memoization

    //    vector<vector<int>>dp(n+1,vector<int>(n+1 , -1));
    //    cout<<"The Answer of the LIS is by the Memeozation is "<<solveMem(n,a,0,-1,dp);

    //by Tabulation
    // cout<<"the answer by the tabulation "<<solvetab(n,a)<<endl;

    //by the Space Optimaization

    // cout<<"The answer is Space Optimized "<<solveSo(n,a)<<endl;
    return 0;


}

*/

// Dp with Binary Search

/*
int solveOpt(int n,vector<int>&a){
    if(n == 0){
        return 0;
    }

    // ceate the space
    vector<int>ans;

    ans.push_back(a[0]);

    for(int i = 1;i<n;i++){
        if(a[i] > ans.back()){
            ans.push_back(a[i]);
        }
        else{
            //find the just big ans

            int index = lower_bound(ans.begin() , ans.end() ,a[i]) - ans.begin();

            ans[index] = a[i];
        }
    }
    return ans.size();
}

int main(){
    // vector<int>a= {5,8,3,7,9,1};
    vector<int> a = {0, 8, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15};

    int n = a.size();
   //  find the LIS by the Binary search
    cout<<"the answer by using the Recursion "<<solveOpt(n,a)<<endl;
    return 0;
}
*/

// Maximum Height by Stacking the Cuboids

/*
bool check(vector<int> &base, vector<int> &newbase)
{
    if (base[0] >= newbase[0] && base[1] >= newbase[1] && base[2] >= newbase[2])
    {
        return true;
    }
    else
    {
        return false;
    }
}
int solvetab(int n, vector<vector<int>> &c)
{
    // step 1 : create the array
    vector<int> currRow(n + 1, 0);
    vector<int> nextRow(n + 1, 0);

    // apply the loops for the traversing the cuboids parameters
    for (int curr = n - 1; curr >= 0; curr--)
    {
        for (int prev = curr - 1; prev >= -1; prev--)
        {
            int include = 0;
            if (prev == -1 || check(c[curr], c[prev]))
            {

                include = c[curr][2] + nextRow[curr + 1];
            }
            int exclude = 0 + nextRow[prev + 1];

            currRow[prev + 1] = max(include, exclude);
        }
        nextRow = currRow;
    }
    return nextRow[0];
}

int main()
{

    vector<vector<int>> cuboids = {
                                    {50, 45, 20},
                                    {95, 37, 53},
                                    {45, 23, 12}};
    // step 1 :sort the parameteres
    for (auto &a : cuboids)
    {
        sort(a.begin(), a.end());
    }

    // step 2  : sort the on the basis of the on thir width

    sort(cuboids.begin(), cuboids.end());
    int n = cuboids.size();

    cout << "the maximun lenght of Stacking the Cuboids " << solvetab(n, cuboids) << endl;
    return 0;
}

*/

// patttern distict Ways

// NUmber of Dice Rolls With target Sum
/*

long long int solverec(int dice,int Faces,int sum){
    //base case
    if(sum<0){
        return 0;
    }
    if(dice == 0 && sum!= 0){
        return 0;
    }
    if(dice != 0 && sum == 0){
        return 0;
    }
    if(dice == 0 && sum == 0){
        return 1;
    }

    long long int ans = 0;

    for(int i = 1;i<=Faces ; i++){
        ans = ans + solverec(dice-1 ,Faces,sum-i);
    }
    return ans;
}

long long int solveMem(int dice,int faces,int sum,vector<vector<long long int>>&dp){

    if(sum<0){
        return 0;
    }
    if(dice == 0 && sum != 0){
        return 0;
    }
    if(dice != 0 && sum == 0){
        return 0;
    }
    if(dice == 0 && sum == 0){
        return 1;
    }

    if(dp[dice][sum] != -1){
        return dp[dice][sum];
    }

    long long int ans = 0;

    for(int i = 1;i<=faces;i++){

        ans += solveMem(dice-1,faces,sum-i,dp);
    }
    return dp[dice][sum] = ans;
}



long long int solvetab(int dice,int faces,int sum){
    //create the dp array
    vector<vector<long long int>>dp(dice+1,vector<long long int >(sum+1,0));
    //base case
    dp[0][0] = 1;

    for(int d = 1; d<=dice; d++ ){
        for(int s = 1; s<=sum;s++){
            long long int ans  = 0;
            for(int i = 1;i<=faces;i++){
                if(s-i>=0){
                   ans += dp[d-1][s-i];
                }
            }
            dp[d][s] = ans;
        }
    }
    return dp[dice][sum];
}

long long int solveSO(int dice,int faces,int sum){
    //create the space for the Arrays
    vector<long long int>curr(sum+1,0);
    vector<long long int>prev(sum+1,0);

    prev[0] = 1;

    for(int d = 1;d<=dice;d++){
        for(int s = 1; s<=sum;s++){
            long long int ans = 0;
            for(int i = 1;i<=faces;i++){
                if(s-i>=0){
                    ans = ans + prev[s-i];
                }
            }
            curr[s] = ans;
        }
        prev = curr;
    }
    return prev[sum];

}
int main(){
    int N,M,X;
    cout<<"ENter your Sum "<<endl;
    cin>>X;
    cout<<"Enter your Number Of Dices "<<endl;
    cin>>N;
    cout<<"ENter your Number of the Faces "<<endl;
    cin>>M;

    // cout<<"the total combination are the same as the sum is "<<solverec(N,M,X)<<endl;  // by recursion

    //by memoization i
//     vector<vector<long long int>>dp(N+1,vector<long long int>(X+1,-1));
//     cout<<"the No of Combination to are the same as the Sum is "<<solveMem(N,M,X,dp)<<endl;

//by Tabulaiton
// cout<<"the Total No of Combianations Are the "<<solvetab(N,M,X)<<endl;

//by the Spaceoptimaization

cout<<"the sum by the Space Optimization is "<<solveSO(N,M,X)<<endl;

}

*/

// ENter your Sum
// 12
// Enter your Number Of Dices
// 3
// ENter your Number of the Faces
// 6
// the No of Combination to are the same as the Sum is 25

// int fact(int n,vector<int>&dp){
//     if(n == 0){
//         return  1;
//     }

//     if(dp[n] != -1){
//         return dp[n];
//     }

//     int ans = n*fact(n-1,dp);
//     dp[n] = ans;
//     return dp[n];

// }

// int fact(int n){
//      vector<int>dp(n+1, 0);

//      dp[0] = 1;

//     for(int i = 1;i<=n;i++){
//         dp[i] = i * dp[i-1];

//     }
//     return dp[n];

// }

// int factso(int n){
//      int curr = 0;
//      int next = 1;

//      for(int i =1;i<=n;i++){
//         int ans = i * next;
//         next = ans;
//      }
//      curr = next;

//      return curr;

// }

// int main(){
//     int n = 5;
//     vector<int>dp(n+1,-1);

// //    cout<<fact(n,dp);
// // cout<<fact(0);
// cout<<factso(6);

// }

// partition Of Equal Subset Sum

/*
int  solverec(int index, int a[],int n,int target){
    //base case
    if(index>=n){
        return -1;
    }
    if(target < 0){
        return -1;
    }
    if(target == 0){
        return 1;
    }


    int include = solverec(index+1,a,n,target-a[index]);
    int  exclude = solverec(index+1,a,n,target-0);

    return   include or exclude;
}

int solveMem(int index,int a[],int n,int target,vector<vector<int>>&dp){
    if(index>=n){
        return -1;
    }
    if(target < 0){
        return -1;
    }
    if(target == 0){
        return 1;
    }
   if(dp[0][target] != -1){
    return dp[0][target];

   }

    int include = solverec(index+1,a,n,target-a[index]);
    int  exclude = solverec(index+1,a,n,target-0);

    return   dp[0][target] = include or exclude;


}

int  solveTab(int n,int a[],int total){
    vector<vector<int>>dp(n+1,vector<int>(total+1 , 0));

    for(int i =0;i<=n;i++){
        dp[i][0] = 1;

    }

    for(int index = n-1;index >=0;index--){
        for(int target = 0;target<=total/2;target++){
            int include = 0;
            if(target -a[index]>=0){
                include = dp[index][target-a[index]];

            }

            int exclude = dp[index+1][target-0];
           dp[index][target] = include or exclude;
        }
    }
    return dp[0][total/2];

}

int solveSo(int n,int a[],int total){
    vector<int>curr(total/2+1,0);
    vector<int>next(total/2+1,0);

    curr[0] = 1;
    next[0] = 1;

    for(int index = n-1;index >=0;index--){
        for(int target = 0;target<=total/2;target++){
            int include = 0;
            if(target -a[index]>=0){
                include = next[target-a[index]];

            }

            int exclude = next[target-0];
           curr[target] = include or exclude;
        }
        next = curr;
    }
    return next[total/2];

}

int main(){
    int a[] = {1,5,11,7,5};

    int n = 5;
    int total = 0;
    for(int i =0 ;i<n;i++){
        total +=a[i];
    }

    // if(total & 1){
    //     return 0;
    // }
    // int target = total;

  // cout<<solverec(0,a,n,target);

//    vector<vector<int>>dp(n+1,vector<int>(target+1,-1));

//     cout<<solveMem(0,a,n,target,dp);

//by tabulation


// cout<<"by tbualtion "<<solveTab(n,a,total)<<endl;
cout<<"by the Space OPtimization "<<solveSo(n,a,total)<<endl;
return 0;

}
*/

// Maximum Swap to Make the Squences Increasing

/*

int solverec(vector<int>&num1,vector<int>&num2,int index,bool Swapped){

    //baase case
    if(index == num1.size()){
        return 0;
    }

    int ans = INT_MAX;
    int prev1 = num1[index-1];
    int prev2 = num2[index-1];


    //catch
    if(Swapped){
        swap(prev1,prev2);
    }

    //no swap
    if(num1[index]>prev1 && num2[index]> prev2 ){
        ans = solverec(num1,num2,index+1,0);
    }

    if(num1[index]>prev2 && num2[index] >prev1){

        ans = min(ans,1+solverec(num1,num2,index+1,1));
    }


    return ans;


}

int solveMem(vector<int>&num1,vector<int>&num2,int index,bool swapped,vector<vector<int>>dp){

    if(index == num1.size()){

           return 0;
    }


    if(dp[index][swapped] != -1){

        return dp[index][swapped];
    }

    int ans = 100 ;

    int prev1 = num1[index-1];
    int prev2 = num2[index-1];

    if(swapped){

         swap(prev1,prev2);
    }

    if(num1[index] > prev1 && num2[index] >prev2 ){

             ans = solveMem(num1,num2,index+1,0,dp);
    }

    if(num1[index] >prev2 && num2[index] >prev1){

          ans = min(ans,1+solveMem(num1,num2,index+1,1,dp));
    }
   return   dp[index][swapped] = ans;


}

int solveTab(vector<int>&num1,vector<int>&num2){
    int n = num1.size();

    vector<vector<int>>dp(n+1,vector<int>(2,0));

    for(int index = n-1; index>=1;index--){
        for(int swapped = 1;swapped>=0;swapped--){
            int ans = INT_MAX;
            int prev1 = num1[index-1];
            int prev2 = num2[index-1];

            if(swapped){
                swap(prev1,prev2);
            }

            if(num1[index]>prev1  && num2[index]>prev2){
                 ans = dp[index+1][0];
            }
            if(num1[index] > prev2 && num2[index] >prev1 ){
                ans = min(ans,1+dp[index][1]);
            }
            dp[index][swapped] = ans;
        }
    }
    return dp[1][0];
}


int solveSO(vector<int>&num1,vector<int>&num2 )
{  int n = num1.size();
    int swapp = 0;
    int noswapp = 0;
    int currswap = 0;
    int currnoswap = 0;


    for(int index = n-1;index>=1;index--){
        for(int swapped = 1 ; swapped>=0;swapped--){

            int ans = INT_MAX;

            int prev1 = num1[index-1];
            int prev2 = num2[index-1];

            if(swapped){
                int temp = prev2;
                prev2 = prev1;
                prev1 = temp;
            }

            //no swap

            if(num1[index] > prev1  && num2[index] > prev2){
                ans = noswapp;
            }
            if(num1[index] >prev2 && num2[index] >prev1){
                ans = min(ans,1+swapp);
            }

            if(swapped) {
                currswap = ans;

            }
            else{
                currnoswap = ans;
            }

        }
            swapp = currswap;
            noswapp = currnoswap;
    }
    return min(swapp,noswapp);

}
int main(){


    vector<int>num1 = {1,3,5,4};
    vector<int>num2 = {1,2,3,7};

    num1.insert(num1.begin(),-1);
    num2.insert(num2.begin(),-1);


    //by theRecursion
    bool Swapped = 0;
    cout<<"the minimum SWap are "<<solverec(num1,num2,1,Swapped)<<endl;
   int n  = num1.size();
    //by the Memoization
    vector<vector<int>>dp(n,vector<int>(2,-1));

    cout<<"the Answer by the Memoization is "<<solveMem(num1,num2,1,Swapped,dp)<<endl;

    //by Tabulation
    // cout<<"the Minimum No Of Swap Are the "<<solveTab(num1,num2)<<endl;

    //by the SpaceOptimization
    cout<<"the space OPtimization "<<solveSO(num1,num2)<<endl;
    return 0;

}

*/

// longest Arithimatic Progression

/*
int solve(int index,int diff,int a[]){
    //base case
    if(index<0){
        return 0;
    }

    int ans = 0;

    for(int j = index-1;j>=0 ;j--){
        if(a[index]-a[j] == diff ){
            ans = max(ans,1+solve(j,diff,a));
        }
    }
    return ans;
}
int A_M_length(int arr[],int n){

    if(n <= 2){
        return n;
    }

    int ans = 0;

    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            ans = max(ans,2+solve(i,arr[j]-arr[i],arr));
        }


    }
    return ans;

}
int main(){


    int n;
    cout<<"ENter your Size of Array "<<endl;
    cin>>n;

    int *arr  = new int[n];
    for(int i =0 ;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
   for(int i = 0;i<n;i++){
    cout<<arr[i]<<" ";
   }

   int length = A_M_length(arr,n);   //by recursion
   cout<<"the length of longest Ap is "<< length<<endl;

   return 0;
}

*/

// Dp hashing --tabulation

/*
int A_M_length(int a[],int n){
    if(n<=2){
        return n;
    }

    int ans = 0;

    unordered_map<int,int>dp[n+1];

    for(int i = 1;i<n;i++){

        for(int j =0;j<i;j++ ){

            int diff = a[j]-a[i];
            int cnt  = 1;

            //check if answer is Already present

            if(dp[j].count(diff)){
                cnt = dp[i][diff];
            }

            dp[i][diff] = 1 + cnt;
            ans = max(ans  , dp[i][diff]);
        }
    }
    return ans;
}

int main(){
   int n;
    cout<<"ENter your Size of Array "<<endl;
    cin>>n;

    int *arr  = new int[n];
    for(int i =0 ;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
   for(int i = 0;i<n;i++){
    cout<<arr[i]<<" ";
   }

   int length = A_M_length(arr,n);

   cout<<"the length of the AM"<<length<<endl;


}
*/

// Longeest  Arithimatic

/*
int longestSqeuence(vector<int>&a,int diff){
    unordered_map<int,int>dp;

    int ans = 0;

    for(int i =0;i<a.size();i++){
       int temp = a[i]-diff;
       int tempans = 0;
       if(dp.count(temp)){
        tempans = dp[temp];
       }
       dp[a[i]] = 1 + tempans;
       //ansupdate
       ans = max(ans,dp[a[i]]);
    }
    return ans;
}
int main(){

    vector<int>a = {1,7,3,10,17,19,21};

    int diff;
    cout<<"Enter your  Diffrence "<<endl;
    cin>>diff;

    cout<<longestSqeuence(a,diff)<<endl;
    return 0;

}
*/

// Unique Binary Search Trees

/*
int solve(int n){
    if(n<=1){
        return 1;
    }

    int ans = 0;
    for(int i = 1;i<=n;i++){
        ans += solve(i-1)*solve(n-i);
    }
    return ans;
}

int solveMem(int n,vector<int>&dp){
    if(n<=1){
        return 1;
    }

   if(dp[n] != -1){
    return dp[n];
   }
    int ans = 0;
    for(int i = 1;i<=n;i++){
        ans+= solveMem(i-1,dp)*solveMem(n-i,dp);
    }
    dp[n] = ans;
    return dp[n];
}

int solveTab(int n){
    vector<int>dp(n+1,0);
    dp[0] = dp[1] = 1;

   for(int i = 2;i<=n;i++){
    for(int j = 1;j<=i;j++){

      dp[i] += dp[j-1]*dp[i-j];
    }
   }
   return dp[n];
}
int main(){
    int n;
    cout<<"Enter your Node "<<endl;
    cin>>n;

    // cout<<"the binary tree is "<<solve(n)<<endl;
    //by the Memoization
    // vector<int>dp(n+1,-1);
    // cout<<"the Answer by the Memoization is "<<solveMem(n,dp)<<endl;

//by tabulation
cout<<"the answer by the "<<solveTab(n)<<endl;
return 0;
}

*/

// Guess the Number In Higher or Lower  Level

/*
int solverec(int start,int end){

    if(start>=end){
        return 0;
    }

    int ans = INT_MAX;

    for(int i  =start;i<=end;i++){
        ans = min( ans, i+max ( solverec(start,i-1), solverec(i+1,end) ));
    }
    return ans;
}

int solveMem(int start,int end,vector<vector<int>>&dp){
    if(start>=end){
        return 0;
    }

    if(dp[start][end] != -1){
        return dp[start][end];
    }

    int ans  = INT_MAX;

    for(int i = start;i<=end;i++){
      ans = min(ans , i + max( solveMem(start,i-1 ,dp ),solveMem ( i+1, end, dp)));
    }

    return dp[start][end] = ans;

}

int solveTab(int n ){

    //create Array
    vector<vector<int>>dp(n+2,vector<int>(n+2,0));

    for(int start = n; start >= 1;start--){
        for(int end = start ;end<=n;end++){

            if(start == end){
                continue;
            }
            else{
                int ans =INT_MAX;
                for(int i = start ; i  <= end; i++){
                    ans = min ( ans , i + max(dp[start][i-1] ,dp[i+1][end]));
                }
                dp[start][end] = ans;
            }
        }
    }
    return dp[1][n];
}
int main(){
    int n;
    cout<<"Enter your Number "<<endl;
    cin>>n;
    int start = 1;

    // cout<<"BY the Recursion is "<<solverec(start,n)<<endl;
    // vector<vector<int>>dp(n+1,vector<int>(n+1,-1));

    // cout<<"By the Memoization is "<<solveMem(start,n,dp);

    cout<<"By the Tabulation is "<<solveTab(n)<<endl;
    return 0;

}
*/

// MaxiMum Cost From the tree to Leaf Values

/*
int solverec(vector<int>&t,map<pair<int,int>,int>&maxi,int left,int right){

    //leaf node
       if(left == right){
        return 0;
       }

     int ans = INT_MAX;

     for(int i = left ; i<right ;i++){
        ans = min ( ans , maxi[{left,i}]* maxi[{i+1,right}] + solverec(t,maxi,left,i)+solverec(t,maxi,i+1,right));
     }
     return ans;
}


int solveMem(vector<int>&t,map<pair<int,int>,int>&maxi,int left,int right,vector<vector<int>>&dp){

    if(left == right){
        return 0;
    }

    if(dp[left][right] != -1){
        return dp[left][right];
    }

    int ans = INT_MAX;

    for(int i = left ;i<right ; i++){
        ans = min (ans , maxi[{left,i}]*maxi[{i+1,right}] + solveMem(t,maxi,left,i,dp) + solveMem(t,maxi,i+1,right,dp));
    }
    return dp[left][right] = ans;
}


int main(){
    vector<int> t = {6,2,4};
    int n = t.size();

    map<pair<int,int>,int>maxi;
    // cout<<"The Answer By the Recursion is "<<solverec(t,maxi,0,n)<<endl;

    // by the Memoization
    vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
    for(int i = 0;i<n;i++){
        maxi[{i,i}] = t[i];

    for(int j = i + 1;j<n;j++){
 maxi[{i,j}] = max(t[j],maxi[{i,j-1}]);
     }
 }
 cout<<"by the Memoization is "<<solveMem(t,maxi,0,n,dp)<<endl;
}
*/

// best time to BUy and Sell Stocks - I

/*
int maxi(vector<int>&prices ){
    int mini = prices[0];

    int profit = 0;

    for(int i=1;i<prices.size();i++){
        int diff = prices[i]-mini;
        profit = max(profit,diff);
        mini = min(mini,prices[i]);
    }
    return profit;
}

int main(){

    vector<int>prices = {7,1,5,3,6,4};
    int n = prices.size();


    // cout<<"the Best Time Buy And Sell Stock "<<maxi(prices)<<endl;

    return 0;
}
*/

// buy and Sells Stock  -- II(multiple buy and multiple sell)

// int solverec(int index,int buy,vector<int>&prices){
//     if(index == prices.size()){
//         return 0;
//     }

//     int profit = 0;

//     return profit;
// }

// int solveMem(int index,int buy, int n , vector<int>&prices,vector<vector<int>>&dp){
//     if(index == n){
//         return 0;
//     }

//     if(dp[index][buy] != -1){
//         return dp[index][buy];
//     }

//    int profit = 0;
//     if(buy){
//         int  buykaro = -prices[index] + solveMem(index+1,0,n,prices,dp);
//         int skipkaro = 0 + solveMem(index+1,1,n,prices,dp);
//         profit = max(buykaro,skipkaro);
//     }
//     else{

//         int sellkaro = prices[index] + solveMem(index+1,1,n,prices,dp);
//         int skipkaro = 0 + solveMem(index+1,0,n,prices,dp);
//         profit = max(sellkaro,skipkaro);
//     }

//     dp[index][buy] = profit;
//     return dp[index][buy];

// }
// int main(){
//     vector<int>prices = {7,1,5,3,6,4};
//     //by the recursion
//     int n = prices.size();
//     // cout<<"BY the Recursion is "<<solverec(0,1,prices)<<endl;
//     vector<vector<int>>dp(n,vector<int>(2,-1));
//     cout<<"by the Memoization "<<solveMem(0,1,n,prices,dp)<<endl;
// }

/*
int solve(int n){
    int a = 0;
    int b = 1;
    int c = 1;

    if(n == 0){
        return a;
    }
    if(n == 1 || n==2 ){
        return b;
    }

    for(int i =3;i<=n;i++){
      int d = a+b+c;
       a = b;
       b = c;
       c = d;
    }
    return c;
}
int main(){

    int n = 6;
    cout<<solve(n);
}
*/

/*

#include <algorithm>

class cmp   // for the coloumns  meth1 -> cmp()
{
public:
    bool operator()(vector<int> &a, vector<int> &b)
    {
        return a > b;
    }
};



bool cmp(const vector<int>&a,const vector<int>&b){   //  for coloumns meth 2 -> cmp
    return a[1]>b[1];
}


int main()
{
    vector<vector<int>>points(2,vector<int>(4));

    int coloumns = points[0].size();
    int rows = points.size();
    sort(points[0].begin(), points[0].end()); //--> along crow

    sort(points.begin(), points.end(), cmp);   // along the coloumns

    cout<<"the rows are the "<<rows<<endl<<"the coloumns are the "<<coloumns<<endl;
    return 0;

}
*/



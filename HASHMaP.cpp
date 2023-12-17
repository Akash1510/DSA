#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*
int main(){

    unordered_map<string ,int>m;

    pair<string,int>m1 = make_pair("Akash",33);
    pair<string,int>m2 = make_pair("ram",34);
    m.insert(m1);
    m.insert(m2);
    pair<string,int>p = make_pair("love",45);
    m.insert(p);
    m["mera"] = 2;
    cout <<m["mera"]<<endl;
    cout<<m.at("Akash")<<endl;

    cout<<m["unknownkey"]<<endl;
    cout<<m.at("unknownkey")<<endl;

    cout<<m.size()<<endl;
    cout<<m.count("Akash")<<endl;

    m.erase("mera");
    cout<<m.size()<<endl;

    for(auto i:m){
        cout <<i.first<<":"<<i.second<<endl;
    }


    //using Iterator

    unordered_map<string,int> :: iterator it = m.begin();

    while(it!= m.end()){
        cout <<it->first<<":"<<it->second<<endl;
        it++;
    }

   return 0;
}
*/
/*
int main(){
  map<string,int>m;
  pair<string,int>p1 =make_pair("Akash",33);
  pair<string,int>p2 = make_pair("Ram",34);
  pair<string,int>p3 = make_pair("sam",36);
  m.insert(p1);
  m.insert(p2);
  m.insert(p3);

  for(auto i:m){
    cout <<i.first<<":"<<i.second<<endl;
  }
  cout<<m.size()<<endl;
  map<string,int>::iterator it = m.begin();

  while(it!=m.end()){
     cout <<it->first<<":"<<it->second<<endl;
     it++;

  }

    
  return 0;
}
*/

// FInd the maximum frequency Number
/*
int maxfrequency(vector<int>&arr,int n){
    unordered_map<int,int>count;
    int maxfreq = 0;
    int maxans = 0;
    for(int  i = 0;i<n;i++){
        count[arr[i]]++;
        maxfreq = max(maxfreq,count[arr[i]]);
    }

    for(int i=0;i<n;i++){
        if(maxfreq == count[arr[i]]){
            maxans = arr[i];
            break;
        }
    }
    return maxans;


}
int main(){
    vector<int> arr = {1,11,1,13,3,3,3,33,5,5,7};
    int n = arr.size();
   cout <<"The ans for the maxfrequency is "<< maxfrequency(arr,n)<<endl;
    
    return 0;
}
*/
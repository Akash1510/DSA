#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*
class Trienode{
    public:
    char data;
    Trienode* childeren[26];
    bool isTereminal;
    Trienode(char ch ){
      data = ch;
      for(int i=0;i<26;i++){
        childeren[i] = NULL;
      }
      isTereminal = false;
    }
};

class Trie{
    public:
    Trienode* root;
    Trie(){
        root = new Trienode('\0');
    }
    void insertitionutil(Trienode* root,string word){
        //base case
        if(word.length() == 0){
            root->isTereminal = true;
            return;
        }

        //assumption to word will be CAPS
        int index = word[0] - 'A';
        Trienode* child;

        //present
        if(root->childeren[index] != NULL){
            child = root->childeren[index];
        }
        else{
            child = new Trienode(word[0]);
            root->childeren[index] = child;
        }
        //recursion
        insertitionutil(child,word.substr(1));
    }

    void insertword (string word){
        insertitionutil(root,word);
    }

    //serach
    bool searchutil(Trienode* root,string word){
        //base case
        if(word.length() == 0){
            return root->isTereminal;
        }

        int index = word[0] -'A';
        Trienode* child;

        //present 
        if(root->childeren[index] != NULL ){
            child = root->childeren[index];
        }
        else{
            //absent
            return false;
        }
        //recursion
        return searchutil(child,word.substr(1));
    }
    bool searchword(string word){
        searchutil(root,word);
    }
};


int main(){
    Trie* t = new Trie();

    t->insertword("AKASH");
    t->insertword("RAM");
    t->insertword("MAN");
    t->insertword("TIMER");

    cout<<(t->searchword("TIMER")?"present ":"Not Present ")<<endl;
    
return 0;
}
*/


//to find the Longest common prefix
/*
string lcp(vector<string>&arr,int n){
  string ans = "";
  //for te traversing the anwer of all characters of Ist string 
  for(int i=0;i<arr[0].length();i++){
    char ch = arr[0][i];
    bool match = true;
    //for the comparing with next charcters 
    for(int j = 1;j<n;j++){
        if(arr[j].size() < i || ch != arr[j][i]){
            match = false;
            break;
        }
    }

  if(match == false){
    break;
  }
  else{
    ans.push_back(ch);
  }
}
return ans;
  
}
int main(){
    vector<string>arr = {"coding","code","codingnijas","codeforces","codeen","codevita"};
    int n = arr.size();

    string ans = lcp(arr,n);
    cout<<"The Answer is "<<ans<<endl;
    return 0;

}
*/


//using trie  Longets Common Prefix


/*
class trienode{
    public:
    char data;
    trienode* childeren[26];
    bool isTereminal;
    int childcount;

    trienode(char ch){
        this->data = ch;
        for(int i=0;i<26;i++){
            this->childeren[i] = NULL;
        }
        this->isTereminal = false;
        this->childcount =0;
    }
};

class trie{
    public:
    trienode* root;
    trie(){
        root = new trienode('\0');
    }

   void insertitionutil(trienode* root,string word){
    //base case
    if(word.length() == 0){
        root->isTereminal = true;
        return;
    }
    int index = word[0]-'a';
    trienode* child;
    if(root->childeren [index] == NULL){
        child = new trienode(word[0]);
        root->childcount++;
        root->childeren[index] = child;
    }
    else{
        child = root->childeren[index];
    }
    insertitionutil(child,word.substr(1));

    }
  void  insertword(string word){
        insertitionutil(root,word);
    }

    string lcp(vector<string>&arr){
        string ans= "";
        trie * t = new trie();
        //insert all string in the trie
        for(int i=0;i<arr.size();i++){
            t->insertword(arr[i]);

        }
        trienode* temp  = t->root;
        for(int i=0;i<arr[0].length();i++){
            if(temp->childcount == 1){
                ans.push_back(arr[0][i]);
                int index = arr[0][i] - 'a';
                temp = temp->childeren[index];
            }
            else{
                break;
            }
            if(temp->isTereminal){
                break;
            }

        }
        return ans;
    }
};


int  main(){
    trie* t = new trie();

    vector<string>arr = {"coding","code","codingnijas","codeforces","codeen","codevita"};
    string ans =t->lcp(arr);
    cout <<"Answer is "<<ans<<endl;
    return 0;    
}
*/


// Implimentation of phone Directory
/*
class trienode{
    public:
    char data;
    trienode* childeren[26];
    bool isTerminal;
    trienode(char ch){
        this->data = ch;
        for(int i=0;i<26;i++){
            this->childeren[i] = NULL;
        }
        this->isTerminal = false;
    }
};

class trie{
    public:
    trienode* root;
    trie(){
        root = new trienode('\0');
    }

    void insertitionutil(trienode* root,string word){
        if(word.length() == 0){
            root->isTerminal = true;
            return ;
        }
        int index = word[0]-'a';
        trienode* child;
        if(root->childeren[index] == NULL){
            child = new trienode(word[0]);
            root->childeren[index] = child;
        }
        else{
            child = root->childeren[index];
        }
        insertitionutil(child,word.substr(1));


    }
    void insertword(string word){
        insertitionutil(root,word);

    }
    
    void printsuggestions(trienode* current,vector<string>&temp,string prefix){
        if(current->isTerminal){
            temp.push_back(prefix);
        }
        for(char ch = 'a';ch<='z';ch++){
            trienode* next = current->childeren[ch-'a'];
            if(next != NULL){
                prefix.push_back(ch);
                printsuggestions(next,temp,prefix);
                prefix.pop_back();
            }
        }
    }

    vector<vector<string>>getsuggestions(string str){
        trienode* prev = root;
        vector<vector<string>>ans;
        string prefix = "";
        for(int i=0;i<str.length();i++){
            char lastch = str[i];
            prefix.push_back(lastch);
            //chechk lastch
            trienode* current = prev->childeren[lastch-'a'];
            //if not found
            if(current == NULL){
                break;
            }
            //if found 
            vector<string>temp;
            printsuggestions(current,temp,prefix);
            ans.push_back(temp);
            temp.clear();
            prev = current;

        }
        return ans;
    }
};

vector<vector<string>>phoneDirectory(vector<string>&contactlist,string &querystr){
    //creating the trie
    trie* t = new trie();
    //insert at all contact in trie
    for(int i=0;i<contactlist.size();i++){
        string str = contactlist[i];
        t->insertword(str);
    }
    //return ans;
    return t->getsuggestions(querystr);

}



int main(){
    vector<string> arr ={"code","coding","codevita","coly"};
    string a = "codingnijas";

    vector<vector<string>> ans = phoneDirectory(arr , a);  //suggetions to be printed here

    for(vector<string> x : ans) {
    for(string y : x) {
        cout << y << " ";
    }
    cout << endl;
    }       

    return 0;

}
*/


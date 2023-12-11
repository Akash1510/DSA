#include <iostream>
#include <queue>
#include <stack>

using namespace std;
//  lecture 1

/*

class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this ->data = d;
        this ->left = NULL;
        this ->right = NULL;
    }

};

node* buildTheBinarytree(node* &root ){
    int data;
    cout << "ENter your Data " <<endl;
    cin >>data;
    root  = new node(data);

    if(data == -1){
        return NULL;
    }

    cout << "Enter Your data for inserting in left of tree " <<data<<endl;
    root ->left = buildTheBinarytree(root->left);
    cout <<"Enter your data for inserting in right of tree " <<data<<endl;
    root ->right = buildTheBinarytree(root->right);
    return root;
}

void levelOrderTraverse(node* &root){

    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

     if(temp == NULL){
            cout << endl;
            if(!q.empty()){
                //queue still has chid nodes
                q.push(NULL);
            }
        }
     else{
            cout << temp->data<<" ";
            if(temp ->left ){
                q.push(temp->left);

            }
            if(temp->right){
                q.push(temp->right);

            }

        }

    }

}

//reverse order for the tree
void reverselevelOrderTraverse(node* &root){
    stack<int>s;
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();


     if(temp == NULL){
            cout << endl;
            if(!q.empty()){
                //queue still has chid nodes
                q.push(NULL);
            }
        }
     else{
            s.push(temp->data);
            if(temp ->left ){
                q.push(temp->left);


            }
            if(temp->right){
                q.push(temp->right);

            }

        }

    }
    while(!s.empty()){
        cout <<  s.top()<<" ";
        s.pop();
    }

}

void Inorder(node* & root){
 // base case
 if(root== NULL){
    return ;
 }

 Inorder(root->left);
 cout <<root->data<<" ";
 Inorder(root->right);

}

// 2 3 4 -1 -1 7 -1 -1 10 90 -1 -1 30 -1 -1

void Preorder(node* &root ){
    //base case
    if(root == NULL){
        return ;
    }

    cout << root ->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
}

void Postorder(node* &root){
    //base case
    if(root == NULL){
        return ;
    }
   Postorder(root->left);
   Postorder(root->right);
   cout<<root->data<<" ";
}

node* BuilfromLevelOreder(node*&root){
    queue<node*>q;
    int data;
    cout <<"Enter your data for root"<<endl;
    cin>>data;

    root = new node(data);
    q.push(root);

    while(!q.empty()){

    node * temp = q.front();
    q.pop();
    cout<< "Enter your Left Data " <<temp->data<<endl;
    int leftdata;
    cin >> leftdata;

    if(leftdata != -1){
        temp ->left = new node(leftdata);
        q.push(temp->left);
    }
    cout <<"Enter your Right data "<<temp->data<<endl;
    int rightdata;
    cin>>rightdata;

    if(rightdata != -1){
        temp->right = new node(rightdata);
        q.push(temp->right);
    }

    }
}

int main(){
    node* root = NULL;

    node*BT = buildTheBinarytree(root);
    cout<<endl;
    cout<<endl;
    levelOrderTraverse(BT);
    // reverselevelOrderTraverse(BT);
    cout<<"Inorder is"<<endl;
    Inorder(BT);
    cout<<endl<<endl;
    cout << "Preorder is "<<endl;
    Preorder(BT);
    cout<<endl<<endl;
    cout<<"post oreder is "<<endl;
    Postorder(BT);


    cout<<endl<<endl;
    // node* o=BuilfromLevelOreder(root);
    // levelOrderTraverse(o);
    return 0;
}

*/

/*
class node{
   public:
   int data;
   node* left;
   node* right;
   node(int d){
    this->data = d;
    this->left = NULL;
    this->right =NULL;
   }

};

node*build(node*root){
    int data;
    cout << "Enter your data "<<endl;
    cin>>data;

    root =new node(data);

    if(data== -1){
        return NULL;
    }
    cout <<"the left data is "<<data<<endl;
    root ->left = build(root->left);
    cout <<"the data of right  is "<<data<<endl;
    root->right = build(root->right);
    return root;
}

void levelordertraverse(node*root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node*temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout << temp->data<<" ";
            if(temp->left){
                q.push(temp->left);

            }
            if(temp->right){
                q.push(temp->right);
            }

        }
    }

}

void Inorder(node* &root,int &count ){
    if(root == NULL){
        return ;
    }
    Inorder(root->left,count);
    if(root->left == NULL && root->right == NULL){
        count++;
    }
    // cout << root->data<<endl;
    Inorder(root->right,count);

}


int main(){
    node *root = NULL;
    node*tree = build(root);
    levelordertraverse(tree);

    //for the count of leaf node how much
    int count= 0;
    Inorder(tree,count);
    cout<< "the leaf nodes count is "<< count <<endl;

}
*/

// Quetions

// find the height of tree
/*
class node{
    public:
    int data;
    node*left;
    node*right;
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node*tree(node*root){
    int d;
    cout <<"Enter your Data "<<endl;
    cin>>d;
    root = new node(d);
    if(d == -1){
        return NULL;
    }

    cout << "the Left data is "<<d<<endl;
    root->left = tree(root->left);
    cout << "the data of Right "<<d<<endl;
    root->right = tree(root->right);
    return root;
}

void levelordertraverse(node*root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node*temp = q.front();
        q.pop();

        if(temp == NULL){
            cout<<endl;

            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}
// 3 2 4 -1 -1 5 -1 -1 7  6 -1 -1 8 9 -1 -1 -1
//height of tree
int height(node*root){
    if(root == NULL){
        return 0;
    }

    int left =height(root->left);
    int right = height(root->right);

    int ans = max(left,right)+1;
    return ans;
}
int main(){
    node* root = NULL;
    node* Binary_Tree = tree(root);
    levelordertraverse(Binary_Tree);
    cout <<"maximum height of tree is "<<height(Binary_Tree)<<endl;
}
*/

// Find the Diameter of Tree

/*
class node{
    public:
    int data;
    node*left;
    node*right;
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* tree(node*root){
    int data;
    cout<<"ENter your Data "<<endl;
    cin >>data;

    root = new node(data);
    if(data == -1 ){
        return NULL;
    }

    cout<<"Inserting the Data At left "<<data<<endl;
    root->left = tree(root->left);
    cout <<"Inserting the data At right "<<data<<endl;
    root->right = tree(root->right);
    return root;
}

void print(node*root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout <<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

pair<int,int>diamterFast(node*root){
    if(root == NULL){
        pair<int,int>p = make_pair(0,0);
        return p;
    }
     //creation of pair by using the left and right

    pair<int,int>left = diamterFast(root->left);
    pair<int,int>right = diamterFast(root->right);

    //create the options for the distance

    int op1 = left.first;
    int op2 = right.second;
    int op3 = left.second + right.second+1;

    //store the ans in the pair ans

    pair<int,int>ans;
    ans.first = max (op1,max(op2,op3));
    ans.second = max (left.second , right.second)+1;
    return ans;
}

int diamter(node*root){
    return diamterFast(root).first;
}

//3 2 4 -1 -1 5 -1 -1 7 6 -1 -1  8 9 -1 -1 -1
int main(){
    node*root = NULL;
    node*B_T = tree(root);
    print(B_T);
   cout<<"th diameter of tree is "<<diamter(B_T)<<endl;
}
*/

// Check Balanced tree or not
/*

class node{
    public:
    int data;
    node*left;
    node*right;
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }

};

node*tree(node*root){
    int data;
    cout <<"Enter your data "<<endl;
    cin>>data;

    root =new node(data);
    if(data == -1 ){
        return NULL;
    }

    cout <<"the data for the Left side is "<<data<<endl;
    root ->left = tree (root->left );
    cout <<"the data for the right side is "<<data<<endl;
    root->right = tree(root->right);
    return root;
}

void print(node*root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node*temp = q.front();
        q.pop();

        if(temp == NULL){
            cout <<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout <<temp->data<<" " ;
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }

        }
    }
}

pair<int,int>isBalancedFast(node* root){
    if(root == NULL){
        pair<bool ,int>p =make_pair(true,0);
        return p;
    }

    pair<int,int>left = isBalancedFast(root->left);
    pair<int,int>right = isBalancedFast(root->right);

    bool leftans = left.first;
    bool rightans = right.first;

    bool diff = abs(left.second-right.second)<=1;
    pair<bool,int>ans;
    ans.second = max(left.second,right.second)+1;

    if(leftans && rightans && diff){
        ans.first = true;
    }
    else{
        ans.first = false;
    }
    return ans;

}
bool isBalanced(node*root){
    return isBalancedFast(root).first;
}

int main(){
    node* root = NULL;
    node*B_T = tree(root);
    print(B_T);
    // if(isBalanced(B_T)){
    //     cout << "Tree is Balanced "<<endl;
    // }
    // else{
    //     cout << "Tree is Not Balanced "<<endl;
    // }

    cout<<(isBalanced(B_T)?"tree is Balaced ":"tree is not balaneced");
    return 0;

}
*/

// Determine the if two trees are Identical
/*
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node*tree(node*root){
    int data;
    cout << "Enter your Data "<<endl;
    cin>>data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }
    cout <<"the insertion of Element at left is "<<data<<endl;
    root->left = tree(root->left);
    cout <<"The insertion of element at right "<<data<<endl;
    root->right = tree(root->right);
    return root;
}

void print(node*root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node*temp = q.front();
        q.pop();

        if(temp == NULL){
            cout <<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
               q.push(temp->right);
            }

        }
    }
}

bool isIdentical(node*root1,node*root2){
    if(root1 == NULL && root2 == NULL){
        return true;
    }
    if(root1 == NULL && root2 != NULL){
        return false;
    }
    if(root1 != NULL && root2 == NULL){
        return false;
    }

    bool left = isIdentical(root1->left , root2->left);
    bool right = isIdentical(root1->right,root2->right);

    bool value = (root1->data == root2->data);
    if(left && right && value){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    node*root1 = NULL;
    node*BT1 = tree(root1);
    print(BT1);
    cout<<endl<<endl;
    node*root2 = NULL;
    node*BT2 = tree(root2);
    print(BT2);
    // two ways to write
    // 1
    // if(isIdentical(BT1,BT2)){
    //     cout << "Tree is Identical "<<endl;
    // }
    // else{
    //     cout <<"Tree is Not Indentical "<<endl;
    // }

    // 2
    cout<<(isIdentical(BT1,BT2)?"tree is Identical":"tree is  not Identical")<<endl;
    return 0;
}
*/

// check the root is sum of tree or not

/*
class node{
    public:
    int data;
    node*left;
    node*right;
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* tree(node*root){
    int data;
    cout <<"Enetr your Data "<<endl;
    cin>>data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }

    cout <<"The Insertion of element left is "<<data<<endl;
    root ->left = tree(root->left);
    cout <<"the Insertion of element Right is "<<data<<endl;
    root->right =tree(root->right);
    return root;
}

void print(node*root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout <<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }

        }

    }
}

pair<bool,int>isSUMtreeFast(node*root){
    //base case
    if(root == NULL){
        pair<bool,int>p = make_pair(true,0);
        return p;
    }

    //leaf node

    if(root->left == NULL && root->right == NULL){
        pair<bool,int>p = make_pair(true,root->data);
        return p;
    }
    pair<bool,int>leftans = isSUMtreeFast(root->left);
    pair<bool,int>rightans = isSUMtreeFast(root->right);

    bool isleftsum = leftans.first;
    bool isrightsum = rightans.first;

    int leftsum = leftans.second;
    int rightsum = rightans.second;

    bool condition = root->data == leftsum+rightsum;

    pair<bool,int>ans;

    if(isleftsum && isrightsum && condition ){
        ans.first = true;
        ans.second = root->data + leftsum + rightsum;
    }
    else{
        ans.first = false;
        return ans;
    }


}

bool isSumtree(node*root){
    return isSUMtreeFast(root).first;
}
//4 2 -1 -1 2 -1 -1
int main(){
    node* root = NULL;
    node* BT = tree(root);
    print(BT);
    cout<<(isSumtree(BT)?"tree is Sum ":"tree is Not Sum ")<<endl;
    return 0;
}
*/

// Zig Zag of Binary Tree

/*
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node*tree(node*root){
    int data;
    cout <<"Enter your Data "<<endl;
    cin >> data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }

    cout <<"the Insertion of Data at Left "<<data<<endl;
    root->left = tree(root->left);
    cout<<"the Insertion of Data at right "<<data<<endl;
    root->right = tree(root->right);

    return root;
}

void print(node*root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout <<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout <<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}
vector<int>ZigZag(node*root){
    vector<int>result;
    if(root == NULL ){
        return result;
    }
    queue<node*>q;
    q.push(root);

    bool leftToright = true;

    while(!q.empty()){
        int size = q.size();
        vector<int>ans(size);

        //level process
        for(int i=0;i<size;i++){
            node* frontnode = q.front();
            q.pop();
            //normal insert or Reverse insert
            int index = (leftToright)?i:size-i-1;
            ans[index] = frontnode ->data;

            if(frontnode->left){
                q.push(frontnode->left);
            }
            if(frontnode->right){
                q.push(frontnode->right);
            }

        }
        //direction change
        leftToright = !leftToright;

        for(auto i:ans){
            result.push_back(i);
        }

    }
    return result;

}

int main(){
    vector<int>result;

    node* root = NULL;
    node* BT = tree(root);
    print(BT);
    cout<<endl<<endl;
    result = ZigZag(BT);
    cout << "the ZigZag of Tree is "<<endl;
    for(auto i:result){
        cout << i<<" ";
    }
    return 0;
}

*/

// Boundary Traversal

/*
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};


node*tree(node* root){
    int data;
    cout<<"Enter your Data "<<endl;
    cin >>data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }
    cout <<"The Insertion of Element At left is "<<data<<endl;
    root ->left = tree(root->left);
    cout<<"The Insertion of Element At right is "<<data<<endl;
    root->right = tree(root->right);
    return root;

}

void print(node*root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node*temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

void traversleft(node*root,vector<int>&ans){
    if(root == NULL ||( root->left == NULL && root->right == NULL)){
        return ;
    }
    ans.push_back(root->data);
    if(root->left){
        traversleft(root->left,ans);
    }
    if(root->right){
        traversleft(root->right,ans);
    }

}
void traverseleaf(node*root ,vector<int>&ans){
   if(root == NULL ){
    return ;
   }
   if((root->left == NULL && root->right == NULL)){
    ans.push_back(root->data);
    return ;
   }
   traverseleaf(root->left ,ans);
   traverseleaf(root->right,ans);

}

void traverseright(node*root ,vector<int>&ans){
    if(root== NULL || (root->left == NULL && root->right == NULL)){
        return ;
    }
    if(root->right){
        traverseright(root->right,ans);
    }
    if(root->left){
        traverseright(root->left,ans);
    }

    ans.push_back(root->data);

}
vector<int>Boundarytraversal(node*root){
    vector<int>ans;
    if(root == NULL){
        return ans;
    }
    ans.push_back(root->data);

    //left part print
    traversleft(root->left,ans);
    // traversLeafnode
    // left node subtree
    traverseleaf(root->left,ans);

    //right subtree
    traverseleaf(root->right , ans);


    traverseright(root->right,ans);
    return ans;
}

int main(){
    node* root = NULL;
    node* BT = tree(root);
    print(BT);

    vector<int>result;
    result = Boundarytraversal(BT);
    for(auto i:result){
        cout << i<<" ";
    }
    return 0;
}

*/

// Vertical traversal
/*
class node{
    public:
    int data;
    node*left;
    node*right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node*tree(node*root){
    int data;
    cout<<"Enter your Data "<<endl;
    cin >> data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }
    cout <<"the Insertions at  the left  "<<data <<endl;
    root->left = tree(root->left);
    cout <<"Enter Insertion in Right is "<<data<<endl;
    root->right = tree(root->right);
    return root;
}

void print(node*root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp  = q.front();

        q.pop();
        if(temp == NULL){
            cout <<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}
#include<map>

vector<int>VerticalTraversal(node*root){
    vector<int>ans;
    map<int,map<int,vector<int>>>nodes;
    queue<pair<node*,pair<int,int>>>q;

    if(root == NULL){
        return ans;
    }

    q.push(make_pair(root,make_pair(0,0)));
    while(!q.empty()){

      pair<node*,pair<int,int>>temp = q.front();
      q.pop();

      node* frontnode = temp.first;
      int HD = temp.second.first;
      int levl = temp.second.second;
      nodes[HD][levl].push_back(frontnode->data);
      if(frontnode->left){
        q.push(make_pair(frontnode->left,make_pair(HD-1,levl+1)));
      }
      if(frontnode->right){
        q.push(make_pair(frontnode->right,make_pair(HD+1,levl+1)));
      }
    }

    for(auto i:nodes){
        for(auto j: i.second){
            for(auto k:j.second){
                ans.push_back(k);
            }
        }

    }
    return ans;

}

int main(){
    node* root = NULL;
    node* BT = tree(root);
    print(BT);
    vector<int>result;
    result = VerticalTraversal(BT);
    for(auto i : result){
        cout <<i<<" ";
    }
    return 0;

}
*/

#include <map>
// Top view of Binary tree
/*
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *tree(node *root)
{
    int data;
    cout << "ENter your Data  " << endl;
    cin >> data;
    root = new node(data);
    if (data == -1)
        return NULL;
    cout << "the Insertion of element at in Left is " << data << endl;
    root->left = tree(root->left);
    cout << "the Insertion of element at in right is " << data << endl;
    root->right = tree(root->right);
    return root;
}

void print(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

vector<int> Topview(node *root)
{
    vector<int>ans;
    if (root == NULL)
    {
        return ans;
    }
    map<int,int>topnodes;

    queue<pair<node*, int>> q;

    q.push(make_pair(root, 0));
    while (!q.empty())
    {

        pair<node* , int> temp = q.front();
        q.pop();
        node* frontnode = temp.first;

        int HD = temp.second;
        // if one value is present for HD then do nothing
        if (topnodes.find(HD) == topnodes.end())
        {
            topnodes[HD] = frontnode->data;
        }
        if (frontnode->left)
        {
            q.push(make_pair(frontnode->left, HD - 1));
        }
        if (frontnode->right)
        {
            q.push(make_pair(frontnode->right, HD + 1));
        }
    }
        for (auto i : topnodes)
        {
            ans.push_back(i.second);
        }
    return ans;
}

int main()
{
    node *root = NULL;
    node *BT = tree(root);
    print(BT);
    vector<int> result;
    result = Topview(BT);

    for (auto i : result)
    {
        cout << i << " ";
    }
    return 0;
}
*/

// Bottom view of tree
/*

class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }

};

node* tree(node* root ){
    int data;
    cout<<"ENter your data "<<endl;
    cin >>data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }
    cout <<"the insertion at the left is "<<data<<endl;
    root->left = tree(root->left);
    cout <<"the insertion at the right is "<<data<<endl;
    root->right = tree(root->right);
    return root;
}

void print(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout <<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

vector<int>BottomView(node* root){
    vector<int>ans;
    if(root == NULL){
        return ans;
    }

    map<int,int>topnodes;
    queue<pair<node* ,int>>q;
    q.push(make_pair(root,0));
    while(!q.empty()){
        pair<node*, int>temp = q.front();
        q.pop();
        node* frontnode = temp.first;
        int Hd = temp.second;
        topnodes[Hd] = frontnode->data;
        if(frontnode->left){
            q.push(make_pair(frontnode->left,Hd-1));
        }
        if(frontnode->right){
            q.push(make_pair(frontnode->right,Hd+1));
        }
    }
    for(auto i : topnodes){
        ans.push_back(i.second);
    }
   return ans;
}
int main(){
    node* root = NULL;
    node* BT = tree(root);
    print(BT);
    vector<int>result;
    result = BottomView(BT);
   for(auto i: result){
    cout<< i<<" ";
   }
   return 0;
}
*/

// Left view of tree

/*
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }

};

node* tree(node* root ){
    int data;
    cout<<"ENter your data "<<endl;
    cin >>data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }
    cout <<"the insertion at the left is "<<data<<endl;
    root->left = tree(root->left);
    cout <<"the insertion at the right is "<<data<<endl;
    root->right = tree(root->right);
    return root;
}

void print(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout <<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

void solve(node* &root,vector<int>&ans,int level){
    //base case
    if(root == NULL){
        return ;
    }
    //we need into new level
    if(level == ans.size()){
        ans.push_back(root->data);
    }

    solve(root->left,ans,level+1);
    solve(root->right,ans,level+1);
}
vector<int> Leftview(node* root){
    vector<int>ans;
    solve(root,ans,0);
    return ans;
}
int main(){
    node* root = NULL;
    node* BT = tree(root);
    print(BT);
    cout<<endl<<endl;
    vector<int>result;
    result = Leftview(BT);
    for(auto i: result)
    {
        cout<< i<<" ";
    }
    return 0;
}
*/

/*
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }

};

node* tree(node* root){
    int data;
    cout<<" Enter your Data " <<endl;
    cin>>data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }

    cout <<" the Insertion of Element At in Left is "<<data<<endl;
    root->left = tree(root->left);
    cout <<"the insertion of Element At in right is "<<data<<endl;
    root->right = tree(root->right);
    return root;

}

void print(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout <<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
    }
}

void solve(node* root,vector<int>&ans ,int level) {
    //base case
    if(root == NULL){
        return ;
    }
    if(level == ans.size()){
        ans.push_back(root->data);
    }
    solve(root->right,ans,level+1);
    solve(root->left,ans,level+1);

}
vector<int>RightView(node* root){
    vector<int>ans;
    solve(root,ans,0);
    return ans;
}
int main(){
    node* root = NULL;
    node* BT = tree(root);
    print(BT);
    cout <<endl<<endl;
    vector<int>result;
    result = RightView(BT);
    for(auto i : result){
        cout <<i<<" ";
    }
    return 0;

}
*/

// Sum of the Longest bloodLine of a tree (sum of nodes ) on the longest path from root to leaf node

/*
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;

    }
};

node* tree(node* root ){
    int data;
    cout <<"ENter your Data "<<endl;
    cin >>data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }
    cout <<"the Insertion of Eelement At left is "<<data<<endl;
    root->left = tree(root->left);
    cout <<"the Insertionof Element in Right is "<<data<<endl;
    root->right = tree(root->right);
    return root;
}

void print(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp == NULL){
        cout<<endl;
        if(!q.empty()){
            q.push(NULL);
        }
        }
        else{
            cout <<temp ->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}


#include<limits.h>
void solve(node *root,int sum , int &maxsum,int len ,int &maxlen ){
    //base case
if(root == NULL){
    if(len > maxlen){
        maxlen = len;
        maxsum = sum;
        }
    else if(len == maxlen){
        maxsum = max(sum,maxsum);
    }
    return;
}


    sum = sum + root->data;
    solve(root->left,sum,maxsum,len+1,maxlen);
    solve(root->right,sum,maxsum,len+1,maxlen);
    
}
int sumofLongestPath(node* root){
    int len = 0;
    int maxlen = 0;
    int sum = 0;
    int maxsum = INT_MIN;

    solve (root , sum ,maxsum,len,maxlen);
    return maxsum;
}
int main(){
    node* root = NULL;
    node* BT = tree(root);
    print(BT);
    int ans = sumofLongestPath(BT);
    cout <<"The sum of Longest path of tree is "<<ans<<endl;
    return 0;
}
*/

// Lowest common Ancestor in binary Tree

/*

class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }

};

node *tree(node* root){
    int data;
    cout <<"Enter your Data "<<endl;
    cin >> data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }
    cout <<"The Insertion of Element at Left is "<<data<<endl;
    root->left = tree(root->left);
    cout <<"The Insertion of Element at Right is "<<data<<endl;
    root->right = tree(root->right);
    return root;
}
void print(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout <<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);

            }
        }
    }
}

node* LCA(node* root,int n1,int n2){
    //base case
    if(root == NULL){
        return NULL;
    }
    else if(root->data == n1 || root->data == n2){
        return root;
    }
    node* leftAns = LCA(root->left,n1,n2);
    node* rightAns = LCA(root->right,n1,n2);
    if(leftAns != NULL && rightAns != NULL ){
        return root;
    }
    else if(leftAns != NULL && rightAns == NULL){
        return leftAns;
    }
    else if(rightAns != NULL && leftAns == NULL ){
        return rightAns;
    }
    else{
        return NULL;
    }
}
int main(){
    node* root = NULL;
    node* BT = tree(root);
    print(BT);
    int n1,n2;
    cout<<"ENter your nodes "<<endl;
    cin>>n1>>n2;
    node* Lowest = LCA(BT,n1,n2);
    print(Lowest);
    return 0;
}
*/

// K sum path

/*
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* tree(node* root){
    int data;
    cout<<"Enter your Data "<<endl;
    cin >>data;

    root = new node(data);
    if(data ==-1 ){
        return NULL;
    }
    cout<<"the Insertion of Element At the left is "<<data<<endl;
    root->left = tree(root->right);
    cout<<"the Insertion of Element At the Right is "<<data<<endl;
    root->right = tree(root->right);
    return root;
}

void print(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout <<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout <<temp ->data<<" ";
            if(temp->left){
                q.push(temp->left);

            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}


void solve(node*root,int k,int &count ,vector<int>path){
    //base case 
    if(root == NULL){
        return;
     }
     path.push_back(root->data);
    //left
    solve(root->left,k,count,path);
    //right
    solve(root->right,k,count,path);
    //check for k sum 
    int size = path.size();
    int sum = 0;
    for(int i = size-1;i>=0;i--){
        sum+=path[i];
        if(sum == k){
            count ++;
        }
    }
    path.pop_back();
}
int kSUm(node*root,int k){
    vector<int>path;
    int count =0 ;
    solve(root,k,count , path);
    return count;
}

int main(){
    node* root = NULL;
    node* BT = tree(root);
    print(BT);
    cout<<endl;
    int k = 5;
    int ans = kSUm(BT,k);
    cout<<endl;
    cout<<"the K sum is "<<ans;
    cout<<endl;
    return 0;
}
*/

//K th Ancestor in tree

/*
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* tree(node* root){
    int data;
    cout<<"Enter your data "<<endl;
    cin>>data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }
    cout <<"the Insertion of Element at left is "<<data<<endl;
    root->left = tree(root->left);
    cout <<"The insertion of Element at right is "<<data<<endl;
    root->right = tree(root->right);
    return root;
}

void print(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout <<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else
            cout <<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);

            }
            if(temp->right){
                q.push(temp->right);
            }
        }
}
#include<limits.h>

node* solve(node* root,int &k,int n){
    //basecase
    if(root == NULL){
        return NULL;
    }
    if(root->data == n){
        return root;
    }

    node* leftAns = solve(root->left,k,n);
    node* rightAns = solve(root->right,k,n);
    if(leftAns != NULL && rightAns == NULL ){
        k--;
        if(k<=0){
            //answer check
            k = INT_MAX;
            return root;
        }
        return leftAns;
    }
    if(leftAns == NULL && rightAns != NULL){
        k--;
        if(k<=0){
            k = INT_MAX;
            return root;
        }
        return rightAns;
    }
    return NULL;

}

int kthAncestor(node* root,int k,int n){
    node* ans = solve(root,k,n);
    if((ans == NULL) || (ans->data == n)){
        return -1;
    }
    else{
        return ans->data;
    }
}

int main(){
    node* root = NULL;
    node* BT = tree(root);
    print(BT);
    cout<<"the Ancestor is "<<kthAncestor(BT,2,4);
    return 0;

}
*/

// Maximum Sum of the non Adjcent nodes

/*
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* tree(node*root){
    int data;
    cout <<"ENter your data "<<endl;
    cin>>data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }
    cout <<"The Insertion of Element in left is "<<data<<endl;
    root->left = tree(root->left);
    cout<<"The Insertion of Element in right is "<<data<<endl;
    root->right = tree(root->right);
    return root;
}

void print(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout <<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout <<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

pair<int,int>solve(node*root){
    //base case
    if(root == NULL){
        pair<int,int>p = make_pair(0,0);
        return p;
    }
    pair<int,int>left = solve(root->left);
    pair<int,int>right = solve(root->right);
    pair<int,int>res;
    res.first = root->data + left.second + right.second;
    res.second = max(left.first,left.second) + max(right.first,right.second);
    return res;
}

int get_max(node* root){
    pair<int,int>ans = solve(root);
    return max(ans.first,ans.second);
}

int main(){
    node* root = NULL;
    node* BT = tree(root);
    print(BT);
    cout<<endl<<endl;
    cout<<"The maximum sum of Non Adjcent nodes is "<<get_max(BT)<<endl;
    return 0;
}
*/

//Construct Binary Tree
//  Inorder to preOrder

/*
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

int findposition(int in[],int element,int n){
    for(int i=0;i<n;i++){
        if(in[i] == element){
            return i;
        }
        return -1;
    }
}
node*solve(int in[],int pre[],int &index,int inorderstart,int inorederend,int n){
    //base case
    if(index>=n || inorderstart>inorederend){
        return NULL;
    }
    int element  = pre[index++];
    node *root = new node(element);
    int position = findposition(in ,element,n);
    root->left = solve(in , pre, index ,inorderstart,position-1,n);
    root->right = solve(in,pre,index,position+1,inorederend,n);
    return root;
}
node* buildTree(int in[],int pre[],int n){
    int preorderIndex = 0;
    node* ans = solve(in,pre,preorderIndex,0,n-1,n);
    return ans;


}

void print(node*root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node *temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

int main(){
    int in[] = {1,6,8,7};
    int pre[] ={1,6,7,8};
    int n = 4;
    node* ans = buildTree(in,pre,n);
    print(ans);
    return 0;
}
*/

// optimized approach O[1];
/*
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

void createmapping(int in[],map<int,int>&nodeToIndex,int n){
    for(int i=0;i<n;i++){
        nodeToIndex[in[i]] = i;
    }
}
node*solve(int in[],int pre[],int &index,int inorderstart,int inorederend,int n,map<int,int>&nodeToIndex){
    //base case
    if(index>=n || inorderstart>inorederend){
        return NULL;
    }
    int element  = pre[index++];
    node *root = new node(element);
    int position = nodeToIndex[element];
    root->left = solve(in , pre, index ,inorderstart,position-1,n,nodeToIndex);
    root->right = solve(in,pre,index,position+1,inorederend,n,nodeToIndex);
    return root;
}
node* buildTree(int in[],int pre[],int n){
    int preorderIndex = 0;
    map<int,int>nodeToIndex;
    createmapping(in,nodeToIndex,n);
    node* ans = solve(in,pre,preorderIndex,0,n-1,n,nodeToIndex);
    return ans;


}

void print(node*root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node *temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

int main(){
    int in[] = {1,6,8,7};
    int pre[] ={1,6,7,8};
    int n = 4;
    node* ans = buildTree(in,pre,n);
    print(ans);
    return 0;
}
*/

// construct the Binary  tree

// Inorder to PostOrder
/*
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }

};

void createmapping(int in[],map<int,int>&nodeTOindex,int n){
    for(int i=0;i<n;i++){
        nodeTOindex[in[i]] = i;
    }
}
node* solve(int in[],int post[],int &index,int inorderstart,int inorderend,int n,map<int,int>nodeTOindex){
    if(index<0 || inorderstart>inorderend){
        return NULL;
    }

    int element  = post[index--];
    node* root = new node(element);
    int position = nodeTOindex[element];
    root->right = solve(in,post,index,position-1,inorderend,n,nodeTOindex);
    root->left = solve(in,post,index,inorderstart,position-1,n,nodeTOindex);
    return root;
} 
node*tree(int in[],int post[],int n){
    int postorderIndex = n-1;
    map<int,int>nodeToindex;
    createmapping(in,nodeToindex,n);
    node* ans = solve(in ,post,postorderIndex,0,n-1,n,nodeToindex);
    return ans;
}
void print(node*root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout <<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

int main(){
    int in[] = {4,8,2,5,1,6,3,7};
    int post[] ={8,4,5,2,6,7,3,1};
    int n = 8;
    node* ans = tree(in,post,n);
    print(ans);
    return 0;
}
*/

//  time to Burning  Tree


/*
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* tree(node* root){
    int data;
    cout <<"Enter your data "<<endl;
    cin>>data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }
    cout<<"the INsertion of Element is in left is "<<data<<endl;
    root->left = tree(root->left);
    cout<<"the Insertion of element is in right is "<<data<<endl;
    root->right = tree(root->right);
    return root;
}

void print(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout <<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout <<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

node* createmapping(node* root,int target,map<node*,node*>&nodetoparent){
    node* res = NULL;
    queue<node*>q;
    q.push(root);
    nodetoparent[root] = NULL;
    while(!q.empty()){
        node* front = q.front();
        q.pop();

        if(front->data == target){
            res = front;

        }
        if(front ->left){
            nodetoparent[front->left] = front; 
            q.push(front->left);


        }
        if(front ->right){
            nodetoparent[front->right] = front;
            q.push(front->right);
        }
    }
    return res;
}
int Burning_tree(node* root,map<node*,node*>&nodetoparent){
    map<node* ,bool>visited;
    queue<node*>q;
    q.push(root);
    visited[root] = true;
    int time = 0;
    while(!q.empty()){
        bool flag = 0;
        int size = q.size();
        for(int i=0;i<size;i++){
            node* front = q.front();
            q.pop();

            if(front->left && !visited[front->left]){
                flag = 1;
                q.push(front->left);
                visited[front->left] = 1;
            }
            if(front->right && !visited[front->right]){
                flag = 1;
                q.push(front->right);
                visited[front->right] = 1;
            }
            if(nodetoparent[front] && !visited[nodetoparent[front]]){
                flag = 1;
                q.push(nodetoparent[front]);
                visited[nodetoparent[front]];
            }
        }
        if(flag == 1){
            time++;
        }
    }
    return time;

}

int mintime(node*root,int target){
    map<node*,node*>nodetoparent;
    node* targetnode = createmapping(root,target,nodetoparent);
    int ans = Burning_tree(targetnode,nodetoparent);
    return ans;
    
}

int main(){
    node* root = NULL;
    node* BT = tree(root);
    print(BT);
    cout<<endl<<endl;

    cout <<"the time required for the Burning of tree is "<<mintime(BT,8)<<endl;
    return 0;


}
*/
          
// Morries traversal


/*
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* build_tree(node*root){
    int data;
    cout <<"Enter your data "<<endl;
    cin>>data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }
    cout<<"the insertion of Element at left is "<<data<<endl;
    root->left = build_tree(root->left);
    cout<<"the Insertion of Element at right is "<<data<<endl;
    root->right = build_tree(root->right);
    return 0;
}


void print(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
        
   }

}

void MorrisTraversal(node* root){
    node *current,*pre;
    if(root == NULL){
        return ;
    }
    current = root;

    while (current != NULL)
    {
        if(current->left == NULL){
            cout <<current->data<<" ";
            current = current->right;
        }
        else{
            pre = current ->left;
            while(pre->right != NULL && pre->right != current )
                  pre = pre->right;

        
        if(pre->right == NULL){
            pre->right = current;
            current = current->left;

        }
        else{
            pre->right = NULL;
            cout << current->data<<" ";
            current = current->right;
           }
        }

    }
    
}


int main(){
    node* root = NULL;
    node* BT = build_tree(root);
    print(BT);
    MorrisTraversal(BT);
    print(BT);
    return 0;
}
*/




// Flattern Linked list

/*
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *tree(node*root){
    int data;
    cout<<"enter your data "<<endl;
    cin >>data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }

    cout <<"The insertion of element at left is "<<data<<endl;
    root->left  = tree(root->left);
    cout <<"the Insertion of Element at right is "<<data<<endl;
    root->right = tree(root->right);
    return root;
}

void print(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout <<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout <<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

void flattern_tree(node*root){
    node* current = root;
    while(current != NULL){
        if(current->left){
            node* pred = current->left;
            pred = pred->right;
            while(pred->right)
              pred = pred->right;
            
            pred->right = current->right;
            current->right = current->left;
            current->left = NULL;
        }
        current = current->left;
    }
}
int main(){
    node* root = NULL;
    node* BT = tree(root);
    print(BT);
    cout<<endl;
    flattern_tree(BT);
    print(BT);
    return 0;
}
*/


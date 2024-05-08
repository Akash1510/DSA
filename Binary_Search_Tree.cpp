#include<iostream>
#include<queue>
using namespace std;

//Insertion and Creation BST
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

node* InsertAtnode(node* root ,int d){
    //base case
    if(root == NULL){
        root = new node(d);
        return root;
    }
    if(root->data > d){
        root->left = InsertAtnode(root->left,d);

    }
    else{
        root->right = InsertAtnode(root->right,d);
    }
    return root;

}

void takeInput(node* &root){
    int data;
    cout <<"enter your data "<<endl;
    cin>>data;
    while(data != -1){
        root = InsertAtnode(root,data);
        cin>>data;
    }
}

void print(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
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
int main(){
    node* root = NULL;
    cout << "creation of the data "<<endl;
    takeInput(root);
    cout<<"printing the data "<<endl;
    print(root);
    return 0;
}
*/


// Search  the node in BST;


class node{
    public:
    int data;
    node*left = NULL;
    node*right = NULL;
    node( int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* insertAtnode(node* root,int d){
    //base case
    if(root == NULL){
        root = new node(d);
        return root;
    }

    if(root->data >d){
        root->left = insertAtnode(root->left,d);

    }
    else{
        root->right = insertAtnode(root->right,d);
    }
    return root;
}

void takeaInput(node* &root){
    int data;
    cout <<"Enter your data "<<endl;
    cin >>data;
    while (data != -1){
        root = insertAtnode(root,data);
        cin >> data ;
    }
}


bool search(node* root,int key){
    //base case
   node *temp = root;
   while ( temp != NULL)
   { 
      if(temp->data == key){
         return true;
      }
       if(temp->data > key){
        temp = temp ->left;
       }
       else{
        temp = temp->right;
       }

   }
   return false;
   

}
void print(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node *temp = q.front();
        q.pop();
        if(temp == NULL){
            cout <<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout <<temp->data <<" ";
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
    node *root = NULL;
    cout <<"ENter your Data " <<endl;
    takeaInput(root);
    cout<<"the data is Printing "<<endl;
    print(root);
    int key;
    cout<<"Enter your key "<<endl;
    cin >>key;
    cout <<(search(root,key)? "element is found":"element is not found ")<<endl;

    return 0;

}



// find the maximum and Minimum Element and Deletion of node;

/*

class node{
    public:
    int data;
    node *left;
    node* right;
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* BST(node* root ,int d){
    //base case
    if(root == NULL){
        root = new node(d);
        return root;
    }
    if(root->data > d){
        root->left = BST(root->left,d);
    }
    else{
        root->right = BST(root->right ,d);
    }
    return root;
}

void takeInput(node* &root){
    int data;
    cout <<"ENter your data "<<endl;
    cin >>data;
    while(data != -1){
        root = BST(root,data);
        cin >>data;
    }

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
int  maxvalue(node* root){
    if(root  == NULL){
        return -1;
    }
    node* temp = root;
    while(temp->right != NULL){
        temp = temp->right;
    }
    return temp->data;
}

int  minvalue(node* root){
    if(root == NULL){
        return -1;
    }
    node* temp = root;
    while(temp->left != NULL){
        temp = temp ->left;
    }
    return temp->data;

}

node *Deletion_BST(node* root , int data){
    if(root == NULL){
        return root;
    }
    if(root->data == data){

        // 0 child
        if(root ->left == NULL && root->right  == NULL){
            delete root;
            return NULL;
        }
        // 1 child 
        // left child
        if(root ->left != NULL && root->right == NULL){
            node* temp = root->left;
            delete root;
            return temp;
        }
        //right child
        if(root->left == NULL && root->right != NULL){
            node* temp = root->right;
            delete root;
            return temp ;
        }
        //2 child
        if(root->left != NULL && root ->right != NULL){
            int mini = minvalue(root->right);
            root->data = mini;
            root->right = Deletion_BST(root->right,mini);
            return root;
        }
    }
    else if(data > root->data){
        root -> right = Deletion_BST(root->right,data);
        return root;
    }
    else{
        root->left = Deletion_BST(root->left,data);
        return root;
    }
}
int main(){
    node* root = NULL;
    cout<<"taking input of data "<<endl;
    takeInput(root);
    cout <<"the priting of data "<<endl;
    print(root);
    cout<<endl<<"the maximum element is "<<maxvalue(root)<<endl;
    cout<<endl<<" the Minimum element is " <<minvalue(root)<<endl;
    int key;
    cout<<"ENter your key to delete from the tree"<<endl;
    cin>>key;
    cout<<"BEfore deletetion"<<endl;
    print(root);
    cout<<"Afetr delettion"<<endl;
    root = Deletion_BST(root,key);
    cout<<endl;

    print(root);

    return 0;

}
*/


// quetions on BST

//validate BST

/*

class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right= NULL;
    }
};

node* tree(node* root){
    int data;
    cout<<"ENter your data "<<endl;
    cin >>data;

    root = new node(data);
    if(data == -1){
        return NULL;
    }

    cout<<"The Insertion of Element in left is  "<<data <<endl;
    root->left  =tree(root->left);
    cout <<"the Insertion of Element in right is "<<data<<endl;
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
            if(temp->right ){
                q.push(temp->right);
            }
        }
    }
}

#include<limits.h>

bool  solve(node* root,int mini,int maxi){
    //base case;
    if(root == NULL){
        return true;
    }
    if(root->data >= mini && root->data<= maxi){
        bool left = solve(root->left,mini,root->data);
        bool right = solve(root->right,root->data,maxi);
        return left && right;
    }
    return false;


}

bool isvalidate(node* root){
    return solve(root,INT_MIN,INT_MAX);
}
int main(){
    node* root = NULL;
    node* BT = tree(root);
    print(BT);
    cout<<(isvalidate(BT)?"BST is Validate": "BST is not Validate")<<endl;

    return 0;
}
*/

// Find the Kth smallest in BST

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
    cout <<"Enter your Eelement "<<endl;
    cin >>data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }
    cout <<"the Insertion of the element in the left is "<<data<<endl;
    root->left = tree(root->left);
    cout<<"the Insertion of the element in the right is "<<data <<endl;
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

int solve(node* root,int &i,int k){
    //base case
    if(root == NULL){
        return -1;
    }
    // N
    int left  = solve(root->left,i,k);
    if(left != -1){
        return left;
    } 
    i++;
    if(i == k){
        return root->data;
    }
    //R
    return solve(root->right,i,k);
}

int Kthsmallest(node* root,int k){
    int i=0;
    int ans = solve(root,i,k);
    return ans;
}


int main(){
    node* root = NULL;
    node * BT = tree(root);
    print(BT);
    cout<<endl;
    int k;
    cout<<"Enter your value of k"<<endl;
    cin >>k;
    int ans = Kthsmallest(BT,k);
    cout <<"the smallest element is "<<ans<<endl;
    return 0;

}

*/


// find the predessor and successor 


/*
class node{
    public:
    int data;
    node* left;
    node* right;
    node( int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }

};

node *tree(node* root){
    int data;
    cout <<"Enter your data"<<endl;
    cin >>data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }

    cout <<"The Insertion of element in left side is "<<data<<endl;
    root->left = tree(root->left);
    cout<<"The Insertiion of element of In Right is "<<data<<endl;
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
        if(temp== NULL){
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

pair<int,int>pre_Succ(node *root,int key){
    
    if(root == NULL ){
        return {-1,-1};
    }
    node* temp =root;

    int pre = -1;
    int succ = -1;
    

    while( temp && temp->data != key){
        if(temp->data > key ){
            succ = temp->data;
        temp = temp->left;
        }
        else{
            pre = temp->data;
            temp = temp->right;
    }
}   

    if(temp  == NULL){
        return {pre,succ};
    }

    if(temp->left){

    node* lefttree = temp->left;
    while(lefttree != NULL){
        pre = lefttree->data;
        lefttree = lefttree->right;
    }
    }

    if(temp->right){

    node* righttree = temp->right;
    while(righttree != NULL){
        succ = righttree->data;
        righttree = righttree->left;
    }
    }
    
    // pair<int,int> ans = make_pair(pre,succ);

    return {pre,succ};
    
       
}
int main(){
    node* root = NULL;
    node *BT = tree(root);
    print(BT);
    int key;
    cout<<"Enter your key "<<endl;
    cin>>key;
    cout<<endl;
    pair<int,int>ans = pre_Succ(BT,key);
    cout<<"the predessor is "<<ans.first<<endl;

    cout<<"the successor is "<<ans.second<<endl;
return 0;
}
*/

// longest common Ancestor in BST;

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
    cout<<"Enyter your Data "<<endl;
    cin >>data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }

    cout<<"The iNsertion of Element in the left is "<<data<<endl;
    root->left = tree(root->left);
    cout<<"the Inssertion of Element in the right is "<<data<<endl;
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
            cout <<temp->data<< " ";
            if(temp->left){
                q.push(temp->left);

            }
            if(temp->right ){
                q.push(temp->right);
            }
        }
    }
}

node * LCABST(node* root,node* p,node* q){
    if(root == NULL){
        return NULL;
    }
    while(root != NULL){
        if(root -> data < p->data && root->data< q->data ){
            root = root->right;
        }
        else if(root->data > p->data && root->data > q->data){
            root = root->left;
        }
        else{
            return root;
        }
    }
    return root;
}
int main()
{
    node* root= NULL;
    node *BT = tree(root);
    print(BT);
    node* p  = BT->left;
    node* q = BT->right;
    cout<<endl;
    node * ans = LCABST(BT,p,q);
    print(ans);
}
*/

// two sum in BST

/*
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this ->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* tree(node* root){
    int data;
    cout<<"Eneter your Data "<<endl;
    cin >>data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }
    cout <<"the insertion of Element in the Left is "<<data<<endl;
    root ->left = tree(root ->left);
    cout <<"the Insertion of Element in the right is "<<data<<endl;
    root ->right = tree(root->right );
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
            if(temp->right ){
                q.push(temp->right);
            }
        }
    }
}

void inorder(node* root,vector<int>&ans){
    if(root == NULL){
        return;
    }
    inorder (root->left,ans);
    ans.push_back(root->data);
    inorder(root->right,ans);
}

bool TwosumBST(node* root,int target){
    vector<int>inorderval;
    //store the sorted values

    inorder(root,inorderval);
    int i=0; 
    int j = inorderval.size();

    while(i<j){
        int sum = inorderval[i] + inorderval[j];
        if(sum == target){
            return true;
        }
        else if(sum > target){
            j--;
        }
        else{
            i++;
        }

    }
    return false;


}

int main(){
    node* root = NULL;
    node* BT = tree(root);
    print(BT);
    cout<<endl<<endl;
    int target;
    cout <<"Enter your Targert "<<endl;
    cin >>target;
    cout << (TwosumBST(BT,target)? "the sum is present in the BST ": "the sum is not present in the BST")<<endl;
    return 0;

}

*/

// Flattern BST to sorted list

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
    cout <<"Enter your Element "<<endl;
    cin >>data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }
    cout <<"The Insertion of Eelement in the left is "<<data<<endl;
    root ->left = tree(root->left);
    cout <<" the Insertion of Element in the right is "<<data<<endl;
    root->right = tree(root ->right);
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
            if(temp ->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

void inorder(node* root,vector<int>&ans){
    if(root  == NULL){
        return ;
    }
    inorder(root->left,ans);
    ans.push_back(root->data);
    inorder(root->right,ans);
}

node* flattern(node* root){

    vector<int>inorderval;
    inorder(root,inorderval);
    int  n = inorderval.size();

    node* newroot = new node( inorderval[0]);
    node* current = newroot;

    //2nd step
    for(int i=1;i<n;i++){
        node *temp = new node(inorderval[i]);
        current ->left =  NULL;
        current->right = temp ;
        current = temp;
    }

    current->left = NULL;
    current->right = NULL;

    return newroot;

}

int main(){
    node* root = NULL;
    node* BT = tree(root);
    print(BT);
    cout<<endl<<endl;

    node* ans = flattern(BT);
    while(ans != NULL){
        cout <<ans->data<<" ";
        ans = ans->right;
    }
    return 0;

}
*/

// Normal BST to Balanced BST


/*
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this->data =d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* tree(node* root){
    int data;
    cout <<"Enter your Element "<<endl;
    cin >>data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }
    cout<<"The insertion of left data is "<<data<<endl;
    root ->left = tree(root ->left);
    cout <<"The insertion of right data is "<<data<<endl;
    root->right = tree(root ->right);
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
            if(temp->left ){
                q.push(temp ->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

void inorder(node* root,vector<int>&in){
    if(root == NULL){
        return ;
    }
    inorder(root->left,in);
    in.push_back(root->data);
    inorder(root->right,in);
}

node* inorderBST(int s,int e,vector<int>&in){
    //base case
    if(s>e){
        return NULL;
    }
    int mid = (s+e)/2;
    node* root = new node(in[mid]);
    
    root->left = inorderBST(s,mid-1,in);
    root->right = inorderBST(mid+1,e,in);

    return root;
}

node *BalancedBST(node* root){
    vector<int>inorderval;
    inorder(root , inorderval);
    return inorderBST(0,inorderval.size()-1,inorderval);
}


int main(){
    node* root = NULL;
    node* BT = tree(root);
    print(BT);
    cout<<endl<<endl;

    node* ans = BalancedBST(BT);
    print(ans);

    
    return 0;
}
*/

// By  using Trvarsal _Construct BST

/*
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right;
    }

};

void print(node* root){
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
#include<limits.h>
node* solve(vector<int>&pre ,int min ,int max,int &i){
    if(i>=pre.size()){
        return NULL;
    }
    if(pre[i]<min || pre[i]>max){
        return NULL;
    }

    node *root = new node(pre[i++]);
    root->left = solve(pre,min,root->data,i);
    root->right = solve(pre,root->data,max,i);
    return root;
}

node* preorderTOBST(vector<int>&pre){
    int min = INT_MIN;
    int max = INT_MAX;
    int i = 0;
    return solve(pre,min,max,i);
}
int main(){
    vector<int>pre ={20,10,5,15,13,35,30,42};
    node* ans = preorderTOBST(pre);
    print(ans);

}
*/

// MERG TO BST 
//APPROCH 1  Approach 2 in code studeio

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
    cout <<"ENter your Element "<<endl;
    cin >>data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }
    cout<<"The insertion of Element in the left is "<<data<<endl;
    root->left = tree(root->left);
    cout<<" The insertion of Element in the right is "<<data<<endl;
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

void converttoDLinkedList(node*root ,node * &head){
    if(root == NULL){
        return ;
    }

    converttoDLinkedList(root->right,head);
    if(head != NULL){
        head ->left = root;
    }
    else{

      head = root;
    }
    converttoDLinkedList(root->left,head);
}

node*merglinked_list(node*head1 ,node*head2){
    node* head = NULL;
    node* tail = NULL;
    while(head1 != NULL && head2 != NULL){

        if(head1->data < head2->data){

            if(head == NULL){

                head = head1;
                tail = head1;
                head1 = head1->right;
            }
            else{
                tail->right = head1;
                head1->left = tail;
                tail = head1;
                head1 = head1->right;
            }

        }
        else{
            if(head == NULL){
                head = head2;
                tail = head2;
                head2 = head2->right;

            }
            else{
                tail->right =head2;
                head2->left = tail;
                tail = head2;
                head2 = head2->right;

            }

        }
    }
    while(head1 != NULL){
        tail->right =head1;
        head1->left = tail;
        tail = head1;
        head1 = head1->right;
    }
    while(head2 != NULL){
        tail->right =head2;
        head2->left = tail;
        tail = head2;
        head2 = head2->right;

    }
    return head;
}

int countnode(node* head){
    int cnt = 0;
    node* temp = head ;
    while(temp!= NULL){
        cnt++;
        temp =temp->right;
    }
    return cnt;

}

node* ll_2BST(node* head,int n){

    if(n<= 0 || head == NULL){
        return NULL;
    }
    node* left = ll_2BST(head,n/2);
    node* root = head;
    root->left = left;
    head = head->right;
    root->right = ll_2BST(head,n-n/2-1);
    return root;
}

node* mergeBST(node* root1 ,node* root2){
    //step1 store
    node* head1 = NULL;
    converttoDLinkedList(root1,head1);
    head1->left = NULL;

    node* head2 = NULL;
    converttoDLinkedList(root2,head2);
    head2->right = NULL;
   

   //step2 merge  sorted linked list
   node* head = merglinked_list(head1,head2);
   //step 3: convert into BST
   return ll_2BST(head,countnode(head));

}

int main(){
    node* root1 = NULL;
    node* BST1= tree(root1);
    print(BST1);

    cout<<endl<<endl;
    node* root2 = NULL;
    node* BST2 =tree(root2);
    print(BST2);

   node* ans =  mergeBST(BST1,BST2);
    print(ans);
   
    return 0;
}

*/

// Largest BST 

/*

class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this->data =d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* tree(node* root){
    int data;
    cout<<"Enter your Element "<<endl;
    cin >>data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }
    cout<<"The insertion of Element at lEft is "<<data<<endl;
    root->left = tree(root->left);
    cout<<"The insertion of  Element at right is "<<data<<endl;
    root->right = tree(root->right);
}

#include<limits.h>
class INFO{
    public:
    int maxi;
    int mini;
    bool isBST;
    int size;
            INFO() {
            this->maxi = INT_MIN;
            this->mini = INT_MAX;
            this->isBST = true;
            this->size = 0;
        }

        INFO(int min, int max, bool isBST, int size) {
            this->maxi = max;
            this->mini = min;
            this->isBST = isBST;
            this->size = size;
        }


};

INFO* solve(node* root,int &ans){
    //base case
    if(root == NULL){
       INFO* temp = new INFO();
        return temp;

    }

    INFO* left = solve(root->left,ans);
    INFO* right  = solve(root->right,ans);
    INFO* currnodes = new INFO();
    currnodes->size =  left->size + right->size +1;
    currnodes->maxi = max(root->data ,right->maxi);
    currnodes->mini= min(root->data,left->mini);

    if(left->isBST && right->isBST && (root->data > left->maxi) && (root->data < right->mini )){
        currnodes->isBST = true;
    }
    else{
        currnodes->isBST = false;
        }
        //ans update
        if(currnodes->isBST){
            ans = max(ans,currnodes->size);
        }
        return currnodes;
}
int largestBST(node* root ){
    int maxsize = INT_MIN;
    INFO* temp = solve(root,maxsize);
    return maxsize;
}

int main() {
node* root= NULL;
node* BST = tree(root);
int ans;
ans = largestBST(BST);
cout<<endl;
cout<<"largest BST is "<<ans<<endl;
return 0;
}

*/


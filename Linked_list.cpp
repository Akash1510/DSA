#include <iostream>
using namespace std;

/*
class node{
    public:
    int data;
    node *next;

    node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~node(){
        int value=this->data;
        //memory free
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"the Memory is free for node with data "<<value<<endl;
    }
};

void insertAtHead(node * &head,int d){
    node *temp=new node(d);
    temp->next=head;
    head=temp;
}

void insertAttail(node *&tail,int d){
    node *temp=new node(d);
    tail->next=temp;
    tail=temp;
}

void insertAtPosition(node* &tail, node* &head,int p,int d){
    node *temp=head;
    int cnt=1;
    if(p==1){
        insertAtHead(head,d);
        return;
    }
    if(temp->next==NULL){
        insertAttail(tail,d);
        return ;

    }
    while(cnt<(p-1)){
        temp=temp->next;
        cnt++;

    }

    //creating a node
    node *nodeinsert=new node(d);
    nodeinsert->next=temp->next;
    temp->next=nodeinsert;
}

void deletenode(int p,node * &head){
    //for starting deletion of node
    if(p==1){
        node*temp=head;
        head=head->next;
        //memory free
        temp->next=NULL;
        delete temp;
    }
    else{
        node *curr=head;
        node *prev=NULL;
        int cnt=1;
        while(cnt<p){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

//for printing of the head element

// void print(node * &head){
//     node *temp=head;
//     while(temp!=NULL){
//     cout<<temp->data<<" ";
//     temp=temp->next;
//     }

// }


//for printing of the tail element
void print(node * &tail){
    node *temp=tail;
    while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
    }

}
int main(){
    node *node1=new node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    node *head=node1;
    node *tail=node1;
    // insertAtHead(head,12);
    // print(head);

    insertAttail(tail,28);
    // print(head);
    insertAtPosition(tail,head,2,67);
    print(head);
    cout<<"head"<<(head->data)<<endl;
    cout<<"tail"<<(tail->data)<<endl;
    deletenode(1,head);
    print(head);
    cout<<"head"<<(head->data)<<endl;
    cout<<"tail"<<(tail->data)<<endl;
    return 0;
}
*/

// class node{
//     public:
//     int data;
//     node *next;

//     node(int data){
//         this->data=data;
//         this->next=NULL;

//     }
// };
// void print(node *&head){
//     node *temp=head;
//     while(temp!=NULL)
//     {
//         cout<<temp->data<<endl;
//         temp=temp->next;

//     }

// }
// int  main(){
//     node * node1=new node(12);
//     node *head=node1;
//     print(head);

// }

// Doubly linked List/
/*
class node{
    public:
    int data;
    node *next;
    node *prev;

    node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;

    }
    ~node(){
        int value=this->data;
        if(this->next!=NULL){
            //free memory
            delete next;
            this->next=NULL;

        }
        cout<<"Memory is free for the the data is "<<value<<endl;
    }
};


void createLinklist(node * &head,int d){

    //  if(head==NULL){
    //         node *temp=new node(d);
    //         head=temp;

    //  }else{

    node *temp=new node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;

    //  }

}

void insertAttail(node * &tail,int d){

        //  if(tail==NULL){
        //     node *temp=new node(d);
        //     tail=temp;

        //  }
        //  else{

            node *temp=new node(d);
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        //   }



}

void insertAtposition(node *&tail,node*&head,int p ,int d){


    //insert at start position
    if(p==1){
         createLinklist(head,d);
         return;

    }
    node *temp=head;
    int cnt=1;
    while(cnt<p-1){
        temp=temp->next;
        cnt++;

    }
    if(temp->next==NULL){
        insertAttail(tail,d);
        return ;
    }
  //creating a node for the
  node *nodetoInsert=new node(d);
  nodetoInsert->next=temp->next;
  temp->next->prev=nodetoInsert;
  temp->next=nodetoInsert;
  nodetoInsert->prev=temp;

  //second logic
//   node* forward = NULL;
//   forward = temp->next;
//   temp->next = newnode;
//   newnode->next = forward;
//   forward->prev = newnode;
//   newnode->prev = temp;
}
// void deleteNode(int p,node *&head){
//     //deleting first start node
//     if(p==1){
//         node*temp=head;
//         temp->next->prev=NULL;
//         head=temp->next;
//         temp->next=NULL;
//         delete temp;
//     }
//     else{
//         //deleting the node at middle;
//         node *current=head;
//         node *prev=NULL;
//         int cnt=1;
//         while(cnt<p){
//             prev=current;
//             current=current->next;
//             cnt++;
//         }

//         current->prev=NULL;
//         prev->next=current->next;
//         current->next=NULL;
//         delete current;
//     }
// }
void print(node *&head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<< " ";
        temp=temp->next;
    }
}
int main(){
    node *node1=new node(10);
    node *head=node1;
    node *tail=node1;
    print(head);
    cout<<endl;
    createLinklist(head,4);
    createLinklist(head,23);
    createLinklist(head,28);
    createLinklist(head,212);
    createLinklist(head,89);
    createLinklist(head,12);

    print(head);
    cout<<endl;
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    insertAttail(tail,3);
    // print(head);
    insertAtposition(tail,head,6,67);
    print(head);
    deleteNode(9,head);
    print(head);



return 0;
}
*/


// circualr Linked list

/*
class node{
    public:
    int data;
    node *next;

    node(int d){
        this->data=d;
        this->next=NULL;
    }
    ~node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"Memory is freee from data "<<value<<endl;

    }

};
void InsertAt(node *&tail,int element,int d){
    //is empty list
    if(tail==NULL){
       node *newnode=new node(d);
       tail=newnode;
       newnode->next=newnode;
    }
    else{
        //non empty list
        //assuming the element is present in the list
        node *current=tail;
        while (current->data!=element)
        {
            current=current->next;
        }
        node *temp=new node(d);
        temp->next=current->next;
        current->next=temp;
        }
}

void deleteAtnode(node*&tail,int value){
    //empty list
    if(tail==NULL)
    {
        cout<<"List is Empty ,please check Again"<<endl;
        return;
    }
    else{
        //non empty list
        node *prev=tail;
        node*current=prev->next;

        while(current->data!=value){
            prev=current;
            current=current->next;

        }
        prev->next=current->next;

        // 1 node present only
        if(current==prev){
            tail=NULL;

        }
        else if(tail==current){
            tail=prev;
        }
        current->next=NULL;
        delete current;
    }
}

void print(node *&tail){
    node *temp=tail;
    if(tail==NULL){
        cout<<"list is Empty"<<endl;
        return ;
    }
    else{

    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }
    while(tail!=temp);
    cout<<endl;
    }
}

int main(){
    node *tail=NULL;
    InsertAt(tail,1,3);
    print(tail);
    InsertAt(tail,3,5);
    print(tail);
    InsertAt(tail,5,4);
    print(tail);
    InsertAt(tail,5,10);
    print(tail);
    InsertAt(tail,3,2);
    print(tail);
    InsertAt(tail,2,17);
    print(tail);
    deleteAtnode(tail,3);
    print(tail);
    return 0;
}
*/

// Rverse of linked list

/*
class node {
    public:
    int data;
    node *next;

    node(int d){
        this->data=d;
        this->next=NULL;
    }

    ~node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"the Memoery is free NOw data is "<<value<<endl;
    }
};

node *create_linked_list(node * &Head){

    int size;
    cout<<"ENter your size"<<endl;
    cin>>size;
    int d;
    cout<<"ENter your data"<<endl;
    node *head=NULL;
    node *tail=NULL;
    int i=0;
    while(i<size){
        cin>>d;
        node*newnode=new node(d);
        if(head==NULL){

            head=newnode;
            tail=newnode;

        }
        else{

            tail->next=newnode;
            tail=tail->next;
        }


        i++;
        }



    return head;
    }




node * reverse(node *&head){
    node *prev=NULL;
    node *current=head;
    node *forward=NULL;
    while(current!=NULL){
        forward=current->next;
        current->next=prev;
        prev=current;
        current=forward;
    }
    return prev;
}

void Display(node *&head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


int main(){
   node  *Head = create_linked_list(Head);
    Display(Head);
   node *head= reverse(Head);
   cout<<endl<<"the reverse linked list is "<<endl;
    Display(head);
    delete head;
return 0;
}

*/

// Middle of linked list

/*
class node{
    public:
    int data;
    node *next;
    node(int d){
        this->data=d;
        this->next=NULL;
    }
    ~node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"the memeory is free for the data is "<<value <<endl;
        }
};

node *create_linked_list(node *&Head){
    int size;
    cout<<"enter your size "<<endl;
    cin>>size;
    int d;
    int i=0;
        node *head=NULL;
        node *tail=NULL;
    while(i<size){
        // cout<<"Enter your data"<<endl;
        cin>>d;
        node *newnode=new node(d);
        if(head==NULL){
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=tail->next;
        }
        i++;
    }
    return head;
}

void getmiddle(node *&head){
    //for condition of the
    if(head==NULL || head->next==NULL){
        cout<< head;
    }
    // 2 nodes are present only
    if(head->next->next==NULL){
        cout<< head->next;

    }

    node *slow=head;
    node *fast=head->next;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;

        }
        slow=slow->next;

    }
    node  *ans= slow;
    cout<<ans->data<<" ";

}

void Display(node *&head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}




int main(){
    node *Head=create_linked_list(Head);
    Display(Head);
    cout<<endl<<"the  middle elemet is "<<endl;
    getmiddle(Head);
    return 0;

}


*/

// VVIMP Quetion -> Reverse the linked in the K th group
/*
class node{
    public:
    int data;
    node *next;
    node(int d){
        this->data=d;
        this->next=NULL;
    }
    ~node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is Released "<<endl;
    }

};

node *createlinkedlist(node *&Head){
    int size;
    cout<<"Enter your size "<<endl;
    cin>>size;
    int d;
    int i=0;
    node*head=NULL;
    node *tail=NULL;

    while(i<size){
        cin>>d;
        node *newnode=new node(d);
        if(head==NULL){
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=tail->next;
            }
            i++;
    }
    return head;
}

node *kreverse(node*&head ,int k){
    //empty list base case

    if(head==NULL){
        return NULL;
    }
    //step 1:reverse the first k nodes
    node *next=NULL;
    node *curr=head;
    node *prev=NULL;
    int count=0;
    while(curr!=NULL && count<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }

    //step 2:time to recursion
    if(next!=NULL){
        head->next=kreverse(next,k);


    }
    return prev;
}

void print(node *&head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    node *Head=NULL;
    node *head=createlinkedlist(Head);
    print(head);
    cout<<endl<<endl;
    int k;
    cout<<"Enter your groups to you want to reverse "<<endl;
    cin>>k;
    cout<<endl<<endl;
   node*reverse= kreverse(head,k);
   print(reverse);

   delete reverse;
    return 0;
}

*/


// check the given linked list is circular or not
/*

class node{
    public:
    int data;
    node *next;
    node (int d){
        this->data=d;
        this->next=NULL;
    }
    ~node (){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;

        }
        cout<<"Memory is released "<<value<<endl;
    }
};

node *linkedlist(node *& Head ){
    int size;
    cout<<"Enter your size "<<endl;
    cin>> size;

    int d;
    node *head=NULL;
    node *tail =NULL;

    int i=0;
    while(i<size){
        cin>>d;
        node *newnode=new node(d);
        if(head==NULL){
            head=newnode;
            tail=newnode;
            newnode->next=newnode;  //for the single node to exit the circular
        }
        else{
            tail->next=newnode;
            tail=tail->next;
            tail->next=head;   //to make circular by this line
        }
        i++;
    }
    return head;
}
bool isCircularlist(node *&head ){
    //empty list 
    if(head==NULL){
        return true;
    }
    node *temp = head->next;
    while(temp!=NULL && temp!=head){
        temp=temp->next;
    }
    if(temp==head){
        return true;
    }
   
    return false;

}

int main(){
    node *head=linkedlist(head);
    if(isCircularlist(head)){
        cout<<"The given linked list is Circular "<<endl;
    }
    else{
        cout<<"The linked list is Not Circular "<<endl;
    }
    return 0;
}

*/


// Now detect the loop in Linked list
/*
#include <map>


class node{
    public:
    int data;
    node *next;

    node(int d){
        this->data=d;
        this->next=NULL;
    }
    ~node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is Released "<<endl;
    }
};

node * looplist(node *&head){
    int size;
    cout<<"Enter your size "<<endl;
    cin>>size;

    int d;
    int i=0;
    node *tail=NULL;
    while(i<size){
        cin>>d;
        node *newnode=new node(d);
        //empty list
        if(head==NULL){
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=tail->next;

        }
        i++;

    }
    tail->next=head->next;  //due to that the loop is created 
    return head;

}
bool detectloop(node *&head){
    if(head==NULL){
        return false;
    }
    // using the map
    map<node* ,bool>visited;
    node *temp=head;
    while(temp!=NULL){
        if(visited[temp]==true){

           cout<<"loop at "<<temp->data<<endl;
            return true;
        }
    visited[temp]=true;
    temp=temp->next;
    }
    return false;

}

//this is basic method to the find the loop is there or not optimized solution 
// time complixity is O(n)and space complixity O(n)


void print(node*&head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}
int main(){
    node *head=NULL;
    node *list=looplist(head);
    // print(list);
    if(detectloop(list)){
        cout<<"the loop in linked list is present "<<endl;
    }
    else{
        cout<<"the loop is not is not present "<<endl;
    };
    delete list;
}
*/


// find the loop and remove it by the floyd`s detection loop algorithm
/*

class node{
    public:
    int data;
    node*next;
    node(int d){
        this->data=d;
        this->next=NULL;
    }
    ~node(){
        int value=this->data;
        if(this->next!=NULL)
        {
            delete next;
            this->next=NULL;

        }
        cout<<"the memory is relaesd for the data "<<value<<endl;
    
    }
};

node*looplist(node*&head){
    int size;
    cout<<"Enter your Size "<<endl;
    cin>>size;
    int d;
    node*tail=NULL;
   for(int i=0;i<size;i++){
    cin>>d;
    node*newnode=new node(d);
    if(head==NULL){
        head=newnode;
        tail=newnode;
    }
    else{
        tail->next=newnode;
        tail=tail->next;
    }
   }
   tail->next=head->next;
   return head;
}

node*floydsDetectLoop(node*&head){
    if(head==NULL){
        return NULL;
    }
    node*slow=head;
    node*fast=head;
    while(slow!=NULL && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
        if(slow==fast){
            cout<<"Intersection At "<<slow->data<<" "<<endl;
            return slow;
        }

    }
    return NULL;
}

// now find the node due to loop getting started
node*getstartingnode(node*&head){
    if(head==NULL){
        return NULL;
    }
    node *intersection=floydsDetectLoop(head);
    if(intersection==NULL){
        return NULL;
    }
    node *slow=head;
    while(slow!=intersection){
        slow=slow->next;
        intersection=intersection->next;
    }
    return slow;
}

// Now the remove the loop
node *removeloop(node*&head){
    if(head==NULL){
        return NULL;
    }
    node*startloop=getstartingnode(head);
    if(startloop==NULL){
        return  head;
    }
    node*temp=startloop;
    while(temp->next!=startloop){
        temp=temp->next;
    }
    temp->next =NULL;
    return head;

}
void print(node*&head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    node*head=NULL;
    node*list=looplist(head);
    // print(list);
    node*f=floydsDetectLoop(list);
    if(f){
        cout<<"the loop is present "<<endl;
    }
    else{
        cout<<"the loop is not present "<<endl;
    }

    node*startedloop=getstartingnode(f);
    cout<<"loop start due to " <<startedloop->data<<endl;

    node*remove=removeloop(list);
    print(remove);
    delete remove;

    return 0;
    
}

*/


// Remove the Duplicate from the LInked lIst

// I _> Sorted linked list and Unsorted linked list 
/*


class node{
    public:
    int data;
    node*next;

    node(int d){
        this->data=d;
        this->next=NULL;
    }
    ~node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"Memory is Released "<<endl;
    }

};

node*linkedList(node*&head){
    int size;
    cout<<"Enter your Size "<<endl;
    cin>>size;
    int d;
    node*tail=NULL;
    int i=0;
    while(i<size){
        cin>>d;
        node*temp=new node(d);
        if(head==NULL){
            head=temp;
            tail=temp;
        }
        else{
            tail->next=temp;
            tail=tail->next;
        }
        i++;
    }
    return head;
}

node*removeDuplicate(node*&head){
    if(head==NULL){
        return NULL;
    }
     node*current = head;
     while(current!=NULL){
        if((current->next!=NULL) && (current->data)==(current->next->data)){  //giv the data in lik1 1,2,2,3,3..like wise
            node *forword=current->next->next;
            node*nodeTOdelete=current->next;
            nodeTOdelete=NULL;
            current->next=forword;
        }
        current=current->next;
     }
     return head;
}


//work on it not working  ----------------------------

node*UnsortedDuplicate(node*&head){
    if(head==NULL){
        return NULL;
    }
    node*current=head;
    while(current!=NULL){
        node*prev=current;
        node*temp=current->next;
        while(temp!=NULL && prev!=NULL){
            if((current->data)==(temp->data)){
                node*n=prev->next;
                delete(n);
                n=temp->next;
            }
            else{
                temp=temp->next;
                prev=prev->next;
            }
        }
        current=current->next;
    }
    return head;

}
void print(node*&head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    node*head=NULL;
    node*list=linkedList(head);
    print(list);
    cout<<endl;
    node*uniquelist=UnsortedDuplicate(list);
    cout<<endl<<endl;
    print(uniquelist);

return 0;
}
*/


// Quetion  Sort the 0s 1s 2S IN inked lIst 
/* 

class node{
    public:
    int data;
    node*next;

    node(int d){
        this->data=d;
        this->next=NULL;
    }
    ~node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"the memory is Released FOr the "<<value<<endl;
    }
};

node*linked_list(node*head){
    int size;
    cout<<"Enter Your Size of the List"<<endl;
    cin>>size;
    node*tail=NULL;
    int d;
    int i=0;
    while(i<size){
        cin>>d;
        node*newnode=new node(d);
        if(head==NULL){
            head=newnode;
            tail=newnode;

        }else{
            tail->next=newnode;
            tail=tail->next;
        }
        i++;
    }
    return head;
}
 NO1 LOgic for the Sorting of the 0 1 2 
node*SORTLIST(node*head){  
    //Always input  0 1 2 kiti pan
    int zerocount=0;
    int onecount=0;
    int twocount=0;
    node*temp=head;
    while(temp!=NULL){
        if(temp->data==0){
            zerocount++;
        }
        else if(temp->data==1){
            onecount++;
        }
        else if(temp->data==2){
            twocount++;
        }
        temp=temp->next;
    }

    temp=head;
    while(temp!=NULL){
        if(zerocount!=0){
            temp->data=0;
            zerocount--;
        }
        else if(onecount!=0){
            temp->data=1;
            onecount--;
        }
        else if (twocount!=0){
            temp->data=2;
            twocount--;
        }
        temp=temp->next;
    }
    return head;
}

void insertAtTail(node*&tail,node*current){
    tail->next=current;
    tail=current;
}
node*sortlist(node*head){
    //declare the dummy Nodes;
    node*zerohead=new node(-1);
    node*zerotail=zerohead;
    node*onehead=new node(-1);
    node*onetail=onehead;
    node*twohead=new node(-1);
    node*twotail=twohead;

    node*current=head;
    while(current!=NULL){
        int value=current->data;
        if(value==0){
             insertAtTail(zerotail,current);
        }
        else if(value==1){
             insertAtTail(onetail,current);
        }
        else if(value==2){
             insertAtTail(twotail,current);
        }
        current=current->next;
    }

    //merge the  3 Sublist 
    if(onehead->next!=NULL){
        zerotail->next=onehead->next;
    }
    else{
        zerotail->next=twohead->next;
    }

    onetail->next=twohead->next;
    twotail->next=NULL;

    //setuphead
    head=zerohead->next;
    //delete the dummy node;
    return head;
    cout<<endl; 
}


void print(node*head){
    node*temp=head;
    while (temp!=NULL)
    {
       cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}

int main(){
    node*head=NULL;
    node*list=linked_list(head);
    print(list);
    cout<<endl;
    node*sort=SORTLIST(list);  //No1 
    node*sort=sortlist(list);
    print(sort);
    delete sort;
    cout<<endl;
    return 0;
}
*/


// Quetions No2 -- > merge two Sorted linked list

/*
class node{
    public:
    int data;
    node*next;
    node(int d){
        this->data=d;
        this->next=NULL;
    }
    ~node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
    }
};

node*linked_list(node*head){
    int size;
    cout<<"Enter your Size of the list "<<endl;
    cin>>size;
    node*tail=NULL;
    int d;
    int i=0;
    while(i<size){
        cin>>d;
        node*newnode=new node(d);
        if(head==NULL){
            head=newnode;
            tail=newnode;

        }
        else{
            tail->next=newnode;
            tail=tail->next;
        }
        i++;
    }
    return head;
}

node* solve(node*&first,node*&second){
    node*current1=first;
    node*next1=current1->next;
    node*current2=second;
    node*next2=current2->next;
    while(next1!=NULL && current1!=NULL){
        if(current2->data>=current1->data && current2->data<=next1->data){
            //add the nodes b/w first list
            current1->next=current2;
            next2=current2->next;
            current2->next=next1;
            // update the pointers
            current1=current2;
            current2=next2;
        }
        else{
            //current1 and next1 ko agge bada do 
            current1=next1;
            next1=next1->next;
            if(next1==NULL){
                current1->next=current2;
                return first;
            }
        }  
    }
    return first;

}

node*mergtosortedlist(node*&first,node*&second){
    if(first==NULL){
        return second;
    }
    if(second==NULL){
        return first;
    }

     if(first->data<=second->data  ){
        return solve(first,second);
     }
     else{
       return  solve(second,first);
     }
     return first;
}

void print(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    node*head=NULL;
     node*first=linked_list(head);
     node*second=linked_list(head);
     print(first);
     cout<<endl;
     print(second);
     cout<<endl;
     node*list=mergtosortedlist(first,second);
     print(list);
    
    return 0;

}

*/

// Quetion --> Check the Given linked listis pallindrome or not
/*

class node{
    public:
    int data;
    node*next;
    node(int d){
        this->data=d;
        this->next=NULL;    
    }
    ~node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"The Memory is released "<<endl;
    }
};

node*linked_list(node*&head){
    int size;
    cout<<"Enter your Size"<<endl;
    cin>>size;
    int d;
    node*tail=NULL;
    int i=0;
    while(i<size){
        cin>>d;
        node*newnode=new node(d);
        if(head==NULL){
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
        i++;

    }
    return head;
}
#include<vector>
//Approch1 
bool is_pallindrom(node*&head){
    //create an Array
    node*temp=head;
    vector<int>arr;
    while(temp!=NULL){
        arr.push_back(temp->data);
        temp=temp->next;
    }
    int n=arr.size();
    int start=0;
    int end=n-1;
    while(start<=end){
        if(arr[start++]!=arr[end--]){
            return false;
        }

    }
    return true;
}

//Approch 2
node*getmiddle(node*&head){
    node*slow=head;
    node*fast=head->next;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}

node*reverse(node*&head){
    node*current=head;
    node*prev=NULL;
    node*next=NULL;
    while(current!=NULL){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    return prev;
}

bool isit_pallindrom(node*&head){
    if(head->next==NULL){
        return true;
    }
    node*middle=getmiddle(head);
    node*temp=middle->next;
    middle->next=reverse(temp);

    node*head1=head;
    node*head2=middle->next;
    while (head2!=NULL)
    {
        if(head1->data!=head2->data){
            return false;
        }
        head1=head1->next;
        head2=head2->next;
    }
    temp=middle->next;
    middle->next=reverse(temp);
    cout<<"function  is Calling "<<endl;
    return true;
    
    
}

void print(node*&head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    node*head=NULL;
    node*list=linked_list(head);
    print(list);
    //Approach 1
    if(is_pallindrom(list)){
        cout<<"Pallindrome is Exit "<<endl;
    }
    else{
        cout<<"Pallindrome is Not Exit "<<endl;
    }

    //Aproach 2
    if(isit_pallindrom(list)){
        cout<<"Pallindrome is Exit "<<endl;
    }
    else{
        cout<<"Pallindrome is Not Exit "<<endl;
    }
    delete list;

    return 0;
}
*/
// Quetions -->Adding of the Two NUmbers

/*
class node{
    public:
    int data;
    node*next;
    node(int d){
        this->data=d;
        this->next=NULL;
    }
    ~node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is Released for the"<<value<<endl;
    }
};

node*list(node*&head){
    int size;
    cout<<"Enter your size of list"<<endl;
    cin>>size;
    int d;
    node*tail=NULL;
    int i=0;
    while(i<size){
        cin>>d;
        node*newnode=new node(d);

        if(head==NULL){
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=tail->next;
        }
        i++;

    }
    return head;
}

node*reverse(node*&head){

    node*current=head;
    node*prev=NULL;
    node*next=NULL;
    while(current!=NULL){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    return prev;

}

void insertAttail(node*&head,node*&tail,int d){
    node*temp=new node(d);
    if(head==NULL){
        head=temp;
        tail=temp;
        return ;
    }
    else{
        tail->next=temp;
        tail=temp;
    }

}

node*ADD(node*&first,node*&second){
    int carry=0;
    node*anshead=NULL;
    node*anstail=NULL;
    while(first!=NULL || second!=NULL || carry!=0){
        int value1=0;
        if(first!=NULL){
            value1=first->data;
        }
        int value2=0;
        if(second!=NULL){
            value2=second->data;
        }
        int sum=value1+value2+carry;
        int digit=sum%10;

        insertAttail(anshead,anstail,digit);

        carry=sum/10;

        if(first!=NULL){
            first=first->next;
        }
        if(second!=NULL){
            second=second->next;
        }
    }
    return anshead;
}

node*Add(node*&first,node*&second){
  node* f=reverse(first);
   node* s=reverse(second);

    node*ans=ADD(f,s);
    ans=reverse(ans);
    return ans;
    
}

void print(node*&head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    node*head1=NULL;
    node*first=list(head1);
    print(first);
    cout<<endl;
    node*head2=NULL;
    node*second=list(head2);
    print(second);
    cout<<endl;
    node*Addition=Add(first,second);
    cout<<endl;
    print(Addition);
    return 0;
}

*/

//Qutetions---> Clone the linked list 
/*
class node{
    public:
    int data;
    node*next;
    node*random;

    node(int d){
        this->data=d;
        this->next=NULL;
        this->random=NULL;
    }
    ~node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"the Memory is Released "<<endl;
    }
};

node*linked_list(node*head){
    int size;
    cout<<"Enter your size "<<endl;
    cin>>size;
    int d;
    node*tail=NULL;
    int i=0;
    while(i<size){
        cin>>d;
        node*newnode=new node(d);
        if(head==NULL){
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
        i++;
    }
    return head;
}

// void insertAttail(node*clonehead,node*clonetail,int d){
//     node*newnode=new node(d);
//     if(clonehead==NULL){
//         clonehead=newnode;
//         clonetail=newnode;
//     }
//     else{
//         clonetail->next=newnode;
//         clonetail=newnode;
//     }
// }
// #include<unordered_map>
// node*clone_list(node*head){
//     node*clonehead=NULL;
//     node*clonetail=NULL;
//     node*temp=head;
//     while(temp!=NULL){
//         insertAttail(clonehead,clonetail,temp->data);
//         temp=temp->next;
//     }
//     // create the map 
//     unordered_map<node*,node*>oldtonewnode;
//     node*originalnode=head;
//     node*clonenode=clonehead;
//     while(originalnode!=NULL){
//         oldtonewnode[originalnode]=clonenode;
//       originalnode=originalnode->next;
//       clonenode=clonenode->next;
//     }
//     originalnode=head;
//     clonenode=clonehead;
//     while(originalnode!=NULL){
//         clonenode->random=oldtonewnode[originalnode->random];
//         originalnode=originalnode->random;

//         clonenode=clonenode->next;

//     }
//     return clonehead;
// }
void insertAttail(node* head ,node* tail,int d){
    node*newnode=new node(d);
    if(head==NULL){
        head=newnode;
        tail=newnode;

    }
    else{
        tail->next=newnode;
        tail=newnode;
    }
}
node* cloneLL(node *head){
    //step 1 : -> create LInked List 
    node* clonehead=NULL;
    node* clonetail=NULL;
    node* temp=head;

    while(temp!=NULL){
        insertAttail(clonehead,clonetail ,temp->data);
        temp=temp->next;
    }

    //step 2: -> Clonenodes adding b/w original list 

    node* originalnode=head;
    node* clonenode=clonehead;
    while(originalnode!=NULL && clonenode!=NULL){
        node* next=originalnode->next;
        originalnode->next=clonenode;
        originalnode->next;

        next=clonenode->next;
        clonenode->next=originalnode;
        clonenode=next;

    }
    // step 3 : ---> random ptr copy 

    temp=head;
    while(temp!=NULL){
        if(temp!=NULL){
            temp->next->random=temp->random?temp->random->next:temp->random;
        }
        temp=temp->next->next;
    }

    // step 4 :-->  Revert changes

    originalnode=head;
    clonenode=clonehead;
    while(originalnode!=NULL && clonenode!=NULL){
        originalnode->next=clonenode->next;
        originalnode=originalnode->next;
        if(originalnode!=NULL){
            clonenode->next=originalnode->next;
        }
        clonenode=clonehead->next;
    }
    return clonehead;
  

}


void print(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    node*head=NULL;
    node*list=linked_list(head);

    print(list);
    cout<<endl;
    node*clone=cloneLL(list);

    if(cloneLL(clone)){
        cout<<"Random Access is possible";
    }
    else{
        cout<<"not possible "<<endl;
    }

    delete clone;
}

*/


// Quetions -->. Merge Sort On linked list 
/*

class node{
    public:
    int data;
    node* next;
    node(int d){
        this -> data = d;
        this -> next = NULL;
    }
    ~node(){
        int  value = this -> data;
        if(this->next != NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"the Memory is Released "<<value<<endl;
    }
};
node*linked_list(node*&head){
     int size;
     cout<<"Enter your Size of the Linked list "<<endl;
     cin>>size;
     int d;
     node*tail=NULL;
     int i=0;
     while(i<size){
        cin>>d;
        node*newnode=new node(d);
        if(head==NULL){
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
        i++;
     }
     return head;
}


node* findMid(node* &head) {
    node* slow = head; 
    node* fast = head -> next;
    
    while(fast != NULL && fast -> next != NULL) {
        slow = slow -> next;
        fast = fast -> next -> next; 
    }
    return slow;
}

node* merge(node* &left, node* &right) {
    
    if(left == NULL) 
        return right;
    
    if(right == NULL)
        return left;
    
    node* ans = new node(-1);
    node* temp = ans;
    
    //merge 2 sorted Linked List
    while(left != NULL && right != NULL) {
        if(left -> data < right -> data ) {
            temp -> next = left;
            temp = left;
            left = left -> next;
        }
        else
        {
            temp -> next = right;
            temp = right;
            right = right -> next;
        }
    }
    
    while(left != NULL) {
        temp -> next = left;
        temp = left;
        left = left -> next;
    }
    
    while(right != NULL) {
        temp -> next = right;
        temp = right;
        right = right -> next;
    }
    
    ans = ans -> next;
    return ans;
    
}


node* mergeSort(node* &head) {
    //base case
    if( head == NULL || head -> next == NULL ) {
        return head;
    }
    
    // break linked list into 2 halvs, after finding mid
    node* mid = findMid(head);
    
    node* left = head;
    node* right = mid->next;
    mid -> next = NULL;
    
    //recursive calls to sort both halves
    left = mergeSort(left);
    right = mergeSort(right);
    
    //merge both left and right halves
    node* result = merge(left, right);
    
    return result;
}
void print(node*&head){
    node*temp=head;
    cout<<endl;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;

}

int main(){
    node*head=NULL;
    node*list=linked_list(head);
    // print(list);
    node*sort=mergeSort(list);
    print(sort);
    delete sort;
    return 0;
}
*/
/*


class node{
    public:
    int data;
    node* next;
    node(int d){
        this -> data = d;
        this -> next = NULL;
    }
    ~node(){
        int  value = this -> data;
        if(this->next != NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"the Memory is Released "<<value<<endl;
    }
};

node*linked_list(node*&head){
     int size;
     cout<<"Enter your Size of the Linked list "<<endl;
     cin>>size;
     int d;
     node*tail=NULL;
     int i=0;
     while(i<size){
        cin>>d;
        node*newnode=new node(d);
        if(head==NULL){
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
        i++;
     }
     return head;
}

#include<map>

node *removeDuplicates(node* &head) {
    node* prev =  NULL;
    node* Next = NULL;
     map<node* , bool>visited;
    node* temp = head;
    while(temp != NULL ){
        if(visited[temp] != true){
            visited [temp] = true;
            prev = temp;
            temp = temp -> next;
        }
        else{
            
          

        }
    }
        return head; ;
    
}

void print(node*&head){
    node*temp=head;
    cout<<endl;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;

}

int main(){
    node* head =NULL;
    node* list = linked_list(head);
    print(list);
    cout<<endl;
    node* remove=removeDuplicates(list);
    print(remove);
}
*/



// class list{
// public:
// int data;
// list* next;
// list(int data){
//     this->data = data;
//     this->next = NULL;
// }

// };

// list * input(list* head){
//    int data;
//    int size;
//    cout <<"ENter your size"<<endl;
//    cin>>size;
//    int i=0;
//    list* tail = NULL;
//    while(i<size){

//    cin>>data;
//    list* newnode = new list(data);
//    if(head == NULL){
//     head  = newnode;
//     tail = newnode;
//    }
//    else{
//     tail->next = newnode;
//     tail = newnode;
//    }
//    i++;
//  }
//  return head;

// }



// void print(list* head ){
//     list* temp = head;
//     while(temp != NULL){
//         cout <<temp->data<<" ";
//         temp = temp ->next;
//     }
// }


// int main(){
//     list* head = NULL;
//     list * List  = input(head);
//     print(List);
//     return 0;
// }



// class node{
//     public:
//     int data;
//     node* next;
//     node(int data){
//         this->data  =data;
//         this->next = NULL;
//     }
//     ~node(){
//         int value = this->data;
//         if(this->next != NULL){
//             delete next;
//             this->next = NULL;
//         }
//         cout <<"Mememory is relased "<<value<<endl;

//     }
// };


// node* linked_list(node* head){
//     int size;
//     int data;
//     cout <<"Enter your size "<<endl;
//     cin>>size;
//     int i=0;
//     node* tail = NULL;
//     while(i<size){
//         cin>>data;
//         node* newnode = new node(data);
//         if(head  == NULL){
//             head = newnode;
//             tail = newnode;
//         }
//         else{
//             tail->next = newnode;
//             tail = newnode;
//         }
//         tail->next = head;
//         i++;
//     }
//     return head;
// }

// bool checkISCircular(node* head){
//     if(head== NULL){
//         return true;
//     }
//     node* temp = head->next;
//     while(temp != NULL && temp!= head){
//         temp =temp->next;
//     }
//     if(temp == head){
//         return true;
//     }
//     return false;
    
// }

// int main(){
//     node* head = NULL;
//     node* list = linked_list(head);
//     cout <<(checkISCircular(list)? "its circular ": "Not circular")<<endl;
//     return 0;
// }





/*

class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

node* linked_listformfront(node* head ){
    int size;
    cout<<"Enter your size of Linked list "<<endl;
    cin>>size;
    int data;
    int i=0;
    node* tail = NULL;
    while(i<size){
        cin>>data;
        node* newnode = new node(data);
        if(head == NULL){
            head = newnode;
            tail = newnode;
        }
        else{
            tail ->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
        i++;
    }
    return head;

}

node* linked_listformback(node* head ){
    int size;
    cout<<"Enter your size of Linked list "<<endl;
    cin>>size;
    int data;
    int i=0;
    node* tail = NULL;
    while(i<size){
        cin>>data;
        node* newnode = new node(data);
        if(head == NULL){
            head = newnode;
            tail = newnode;
        }
        else{
            tail ->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
        i++;
    }
    return tail;

}

void printformback(node*head){
    node* temp = head;
    while(temp != NULL){
        cout <<temp->data<<" ";
        temp = temp->prev;
    }
}

void printformfront(node*head){
    node* temp = head;
    
    while(temp != NULL){
        cout <<temp->data<<" ";
        temp = temp->next;
    }
}

void reverseofDoublylinkedList(node* head){
    node* temp = head;
    while(temp->next!= NULL){
        temp = temp->next;
    }
    node* tail = temp;
    while(tail != NULL){
        cout <<tail->data<<" ";
        tail = tail->prev;
    }
}
void deletenode(int p,node* head){
    if(p == 1){
        node* temp = head;
        temp ->next ->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;

    }
    else{

    node* temp = head;
    int cnt = 1;
    while(cnt<p-1 ){
        cnt++;
        temp = temp->next;
    }
    node* forward = NULL;
    forward = temp->next->next;
    delete(temp->next);
    temp->next = forward;
    forward->prev = temp;
    }
}
int main(){
    node* head = NULL;
    node* listfront = linked_listformfront(head);
    printformfront(listfront);
    cout<<endl;
    reverseofDoublylinkedList(listfront);
    cout<<endl;
    // node* listback = linked_listformback(head);
    // printformback(listback);
    cout<<endl;
    deletenode(4,listfront);
    printformfront(listfront);
    return 0;
}
*/

// addition of Two polynomials

/*
class node{
  public:
  int power;
  float coif;
  node* next ;
  node(int power,float c){
    this->power = power;
    this->coif = c;
    this->next = NULL;
  }
};

node* linked_list(node*head){
    int pow;
    float c;
    int size;
    cout<<"ENter your size "<<endl;
    cin>>size;
    int i=0;
    node* tail = NULL;
    while(i<size){
        cout<<"Enter your coefficient "<<endl;
        cin>>c;
        cout<<"ENter your Power of "<<endl;
        cin>>pow;
        node* newnode = new node(pow,c);
        if(head == NULL){
            head = newnode ;
            tail = newnode;
        }
        else{
            tail->next = newnode;
            tail= newnode;
        }
        i++;
    }
    return head;

}

node* ADDpoly(node* head1 ,node* head2){
    node* p1= head1;
    node* p2 = head2;

    node* tail = NULL;
    node* head = NULL;
    while( p1!= NULL){
        if(p2->power == p1->power){
            int sum = p1->coif+p2->coif;
            node* newnode = new node(p2->power,sum);
            
            if(head == NULL){
                head = newnode;
                tail = newnode;
            }
            else{
                tail->next = newnode;
                tail = newnode;
            }
            p2 = p2->next;
            p1= p1->next;

        }
        else{
            node* newnode = new node(p1->power,p1->coif);
            tail->next = newnode;
            tail = newnode;
            p1= p1->next;
        }
    }

    while(p2!=NULL){
        node* newnode =new node(p2->power,p2->coif);
        tail->next = newnode;
        tail = newnode;
        p2 = p2->next;
    }
    while(p1!=NULL){
        tail->next = p1;
        tail = p1;
        p1= p1->next;

    }
    return head;
}
void print(node* head){
    node* temp = head;
    while(temp != NULL){
        if(temp->coif > 0 || temp->coif == 0){
            // cout<<"+"<<temp->coif<<"(x"<< "^"<<temp->power<<")"<<" ";
            cout<<"["<<temp->power<<"|"<<temp->coif<<"]"<<"-->";
        }
        if(temp->coif < 0 ){
            // cout <<temp->coif<<"(x"<<"^"<<temp->power<<")"<<" ";
            cout<<"["<<temp->power<<"|"<<temp->coif<<"]"<<"-->";
            
        }
        temp = temp->next;
    }
    cout<<"x";
}

int main(){
    node* head1 = NULL;
    node* EQN1 = linked_list(head1);
    print(EQN1);
    node* head2 = NULL;
    node* EQN2= linked_list(head2);
    print(EQN2);
    cout<<endl;
    node* ans  = ADDpoly(EQN1,EQN2);
    print(ans);
    return 0;
}
*/

#include<iostream>
using namespace std;


class node{
    public:
    int prn;
    string name;
    node* next;

    node(int prn,string name){
        this->prn = prn;
        this->name = name;
        this->next = NULL;
    }
    ~node(){
        int value = this->prn;
        string name = this->name;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<" the Deleted Member in the Club is "<<prn<<"->"<<name<<endl;
    }
};

node* list(node* head){
    int size;
    cout<<" How many Members do you want add in the list "<<endl;
    cin>>size;
    node* tail = NULL;
    int i=0;
     int prn;
     string name;
     while(i<size){
        cout <<"Enter the prn number for the memeber "<<endl;
        cin>>prn;
        cout<<"Name of the memeber at Prn number is "<<endl;
        cin>>name;

        node*newnode = new node(prn,name);
        if(head == NULL){
            head = newnode;
            tail = newnode;
        }
        else{
            tail->next = newnode;
            tail = newnode;
        }
        i++;
     }
     return head;

}


int count ( node *head) {
    node* temp  = head;
    int count = 0;
    while(temp!= nullptr){
        count++;
        temp = temp ->next;
    }
    return count;
}

void InsertAtAnyPostion(node* &head,int position){
    int lastcount = count(head)+1;
    int prn;
    string name;
    if(position != -1){

    if(position == 1){
        //for the president 
        cout<<"Insert your Node for the President in list "<<endl;
       cout<<"Enter your prn for president "<<endl;
        cin>>prn;
        cout<<"Enter your name for the president "<<endl;
        cin >>name;
        node* newnode = new node(prn,name);
        newnode->next = head;
        head = newnode;
    }
    else{

        //for the secretary 
        if(position == lastcount ){
            cout <<"Insert Your Secretary At last node "<<endl;
            cout <<"ENter the Secretary prn No "<<endl;
            cin>>prn;
            cout <<"ENter the Secretary name "<<endl;
            cin>>name;
            node* newnode  = new node(prn,name);
            node* temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp -> next = newnode;
            newnode ->next  = NULL;
        }
        else{
            //for the members 
            cout <<"Insert Your Members in the list "<<endl;
            cout <<"ENter your prn no for Memebers "<<endl;
            cin>>prn;
            cout<<"Enter your Name for the member "<<endl;
            cin>>name;
            node* newnode = new node(prn,name);
            int cnt = 1;
            node* forward = head;
            while(cnt<position-1){
                cnt++;
                forward = forward->next;
            }
            node* add = forward->next;
            forward->next = newnode;
            newnode->next = add;
        }
        
    }

    }
    else{
        return;
    }
}

void DeleteAtAnyposition(node* &head,int position){
    int lastcount = count(head);
    if(position != -1){

    if(position == 1){
        cout<<"you want to delete the President "<<endl;
        node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete(temp);
    }
    else{
        if(position == lastcount){
        cout<<"You are deleting the Secretary "<<endl;
        int cnt = 1;
        node* temp = head;
         node* forward =  NULL;
        while(cnt<position-1){
            cnt++;
            temp = temp->next;
        }
        forward = temp->next;
         temp->next = forward->next;
         forward->next = NULL;
         delete(forward);
        
        }
        else{
        cout<<"Your Deleting the memebers in the list "<<endl;
        int cnt = 1;
        node* temp = head;
        node* forward =  NULL;
        while(cnt<position-1){
            cnt++;
            temp = temp->next;
        }
        forward = temp->next;
         temp->next = forward->next;
         forward->next = NULL;
         delete(forward);
        
       }
    }
    }
    else{
        return ;
    }
}



node* concatination(node* head1 , node* head2){
   node* temp1 = NULL;
   node* current = head1;
   node* temp = head1;
   while(temp ->next != NULL){
    temp = temp->next;
   }
   temp1 = head2;
   temp->next = temp1;
   return current;

}
void reverse(node* head){
    node* temp = head;

    if(temp == NULL){
        return ;
    }

    reverse(temp->next);
    cout << "["<<temp->prn<<"|"<<temp->name<<"]"<<"<-";
}



void Display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout << "["<<temp->prn<<"|"<<temp->name<<"]"<<"->";
        temp = temp->next;
    }
    cout <<"NULL";
}




int main(){


    //creation of Memeber in the list 
    cout <<"Make Your SE A division list "<<endl;
    node* head1 = NULL;
    node* SEA = list(head1);
    cout << endl;
    Display(SEA);
    cout<<endl;


    int pos1 = 0;
    int nodecount = count(SEA);
    cout <<"Enter your Position to  insert "<<endl;
    while (pos1 != -1)
    {
        cout <<"Enter your position "<<endl;
        cin>>pos1;
       
    if(pos1 == 1){
        InsertAtAnyPostion(SEA,pos1); 
        cout<<endl;
         Display(SEA);
         cout<<endl;
    }
    else if(pos1 == nodecount){
      InsertAtAnyPostion(SEA,pos1);
      cout <<endl;
      Display(SEA);
      cout <<endl;
  }
    else{
     InsertAtAnyPostion(SEA,pos1);
     cout <<endl;
     Display(SEA);
     cout<<endl;
    }
    }
    cout<<endl;
    int delpos1 = 0;
    cout <<"ENter your postion to delete "<<endl;
    while(delpos1 != -1){
       cout <<"enter your postion to delete "<<endl;
       cin>>delpos1;
       if(delpos1 == 1){
        DeleteAtAnyposition(SEA,delpos1);
        Display(SEA);
       }
       else if(delpos1 == nodecount){
        DeleteAtAnyposition(SEA,delpos1);
        Display(SEA);
       }
       else{
        DeleteAtAnyposition(SEA,delpos1);
        Display(SEA);
       }
    }
    cout <<endl;
    reverse(SEA);cout<<"NULL";
    cout <<endl<<endl;




    cout<<"Make your SE B division list "<<endl;

    node* head2 =NULL;
    node* SEB = list(head2);
    cout <<endl;
    Display(SEB);
    cout<<endl;
    int pos2 =0;
    cout <<"Enter your Position to  insert "<<endl;
     while (pos2 != -1)
    {
        cout <<"Enter your position "<<endl;
        cin>>pos2;
       
    if(pos2 == 1){
        InsertAtAnyPostion(SEB,pos2); 
        cout<<endl;
         Display(SEB);
         cout<<endl;
    }
    else if(pos2 == nodecount){
      InsertAtAnyPostion(SEB,pos2);
      cout <<endl;
      Display(SEB);
      cout <<endl;
  }
    else{
     InsertAtAnyPostion(SEB,pos2);
     cout <<endl;
     Display(SEB);
     cout<<endl;
    }
    }
   cout<<endl;
     int delpos2 = 0;
    cout <<"ENter your postion to delete "<<endl;
    while(delpos2 != -1){
       cout <<"enter your postion to delete "<<endl;
       cin>>delpos2;
       if(delpos2 == 1){
        DeleteAtAnyposition(SEB,delpos2);
        Display(SEB);
       }
       else if(delpos2 == nodecount){
        DeleteAtAnyposition(SEB,delpos2);
        Display(SEB);
       }
       else{
        DeleteAtAnyposition(SEB,delpos2);
        Display(SEB);
       }
    }
    cout <<endl;
    reverse(SEB);cout<<"NULL";

    cout <<endl<<endl;

    node* concat = concatination(SEA,SEB);
    Display(concat);
   
    return 0;
}

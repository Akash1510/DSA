#include <iostream>
using namespace std;

/*
template<class T>
T sum(T a, T b){
    return a+b;
}

int main(){
    cout <<sum<int>(2,3);
}
// */

// Swap

/*
template<class T>
void swapp(T &a,T &b){
    T temp  = a;
    a = b;
    b = temp;

}
int main(){
    int a = 2;
    int b = 3;
    swapp<int>(a,b);
    cout <<a<<b;
}
*/

// greater value find/

/*
template<class T>
T max(T &x,T &y){
  return (x>y)?x:y;

}

int main(){
    cout<<max<int>(90,3);
    cout<<max<char>('A','V');
}
*/

// Additionof two Data Type  using the Multiple Argument

/*
template<class T1, class T2,class T>

T Add(T1 x, T2 y){
    return x+y;
 }


int main(){
    cout<<Add<int,float,int>(2,3.4);
}
*/

// template<class T>
// T sum(T arr[] , int n){
//     T ans = 0;
//     for(int i= 0 ;i<n;i++){
//         ans = ans + arr[i];
//     }
//     return ans;
// }
// int main(){
//     int arr[5] = {2,3,4,5,5};
//     int n = 5;
//     cout<<sum<int>(arr,n);
// }

// Overloading of the Function Template

/*
template<class T>
T display(T a, T b){
    cout <<a<<" "<<b<<endl;
}

void display(int m){
    cout<<m<<endl;
}
template<class T1, class T2>
void display(T1 h,T2 k){
    cout<<h<<" "<<k<<endl;

}

int main(){
     display<int>(2,4);
     display(2);
     display(2,3.4);


}

*/
/*
// Bubble sort

template<class T1>
void Swapp( T1 &x, T1 &y)
{
    T1 temp = x;
    x = y;
    y = temp;
}
template<class T>
T Sort(T arr[],int n){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n-1;j++){
            if(arr[j] > arr[j+1])
            Swapp(arr[j+1],arr[j]);
        }
    }

    for(int i= 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[6] = {3,0,1,-1,-2,9};
    int n = 6;
    Sort<int>(arr,n);

}
*/

//        Class Template
/*
template<class T1, class T2>
class Test{
    T1 r;
    T2 name;
    public:
    void get(){
        cin>>r;
        cin>>name;
    }

    void display(){
        cout<<r<<"::"<<name<<endl;
    }
};

int main()
{
    Test<int,string> t;
    t.get();
    t.display();
}
*/

// calculator
/*
template<class T1,class T2>

class Calc{
    T1 num1;
    T2 num2;

    public:
    void Preform(T1 n , T2 n2){
        char ch;
        cout<<"Enter your choise"<<endl;
        cin>>ch;
        switch (ch)
        {
        case '+':
            num1 = n;
            num2 = n2;
            cout<< num1+num2;
            break;
        case '-':
           num1 = n;
           num2 = n2;
           cout <<(num1-num2);
           break;
        case '*':
           num1 = n;
           num2 = n2;
           cout<<(num1*num2)<<endl;
           break;
         case '/':
           num1  = n;
           num2 = n2;
           cout <<(num1/num2)<<endl;
           break;
         default :
            cout<<"Invalid Choise "<<endl;
            break;
        }

    }

};

int main(){
    Calc<int,float> a;
    a.Preform(23,34.4);
}
*/

// Inheritance

// structure basic
/*
template<class T1>

class base{
    T1 val;
    public:
    void get(){
        cin>>val;
    };

    void display(){
        cout<<val<<endl;
    }
};

template<class T1>
class baby:public base<T1>{
    public:


};

int main(){
    baby<int> d;
    d.get();
    d.display();
}
*/

// template<class T>

// class test{
//     T a;
//     T b;
//     public:
//     void get(){
//         cin>>a>>b;
//     }

//     T sum(){
//         return a+b;
//     }
// };

// int main(){
//     test<int>t1;
//     t1.get();
//     cout<< t1.sum();
//     test<float>t2;
//     t2.get();
//    cout<< t2.sum();

// }

// static Data member & template

// using the friend function
/*
template<class T>

class base{
    private:
    T value;

    public:

    template<class u>

    friend void ok(base<u> &i);

    T getvalue()
    {
       return value;

    }
    void setvalue(T v){
        value = v;
    }
};

template<class T>

void ok(base<T> &c){
    cout<<"Function is called "<<endl;
    cout <<c.getvalue()<<endl;

}

int main(){
    base<int>obj;
    obj.setvalue(8);
    ok(obj);
    return 0;
}
*/

// 2

/*
template<class T>
class Test{
    T a;
    T b;
    T c;
    public:

    template<class U>
    friend float sum(Test<U>&j);

    void read(){
        cout <<"Enter the value a and b "<<endl;
        cin>>a>>b;
    }
    void display(){
        cout <<"sum is "<<c;
    }
};

//defination of Friend function like this
template<class T>

float sum (Test <T> &obj){
    obj.c = obj.a + obj.b;
    return obj.c;
}

int main(){
    Test<float>obj;
    obj.read();
    sum(obj);
    obj.display();
    return 0;
}

*/

// Exception Handeling

// int main(){
//     int a;
//     int b;
//     cout<<"Enter your value of a and b"<<endl;
//     cin>>a>>b;
//     int x= a-b;
//     try{
//         if(x!=0){
//             cout<<"result is "<<a/x<<endl;

//         }
//         else{
//             //there is an Exception
//             throw(x);
//         }
//     }
//     catch(int i){
//         cout <<"Exception Caught : Divided By Zero  "<<endl;
//     }
//     cout<<"end"<<endl;
//     return 0;
// }

// int main(){
//     int x,y,z;

//     cout<<"Enter your value of the x and y and z"<<endl;
//     cin>>x>>y>>z;
//     try{

//     if((x-y)!= z){
//         cout <<"the result is "<<x-y<<endl;
//     }
//     else{
//         throw(x-y);
//     }
//     }
//     catch(int c){
//         cout<<"the Exception is on the differnce error "<<endl;

//     }
// }

/*
void test(int x){
    try{
        if(x == 1){
            cout <<"Error for the one "<<endl;
            throw(x);
        }
        else if(x == -1){
            cout <<"Erroe for the -1 "<<endl;
            throw('A');
        }
        else if(x == 2){
            cout <<"Error for the 2"<<endl;
            throw(12.1);
        }
        else{
            cout <<"Exception for the 0"<<endl;
            throw(0);
        }
    }
   catch(int m){
    cout<<"caught for the Integer "<<endl;
   }
   catch(char c){
    cout <<"Caught for the Character "<<endl;
   }
   catch(double b){
    cout <<"Caught for the double"<<endl;
   }
//    cout<<"Not part Data type "<<endl;
   cout<<"End for Now"<<endl;
}
int main(){
    cout<<"There is Choises for the Errors" <<endl;
    cout<<"x==1"<<endl;
    test(1);
    cout<<"x == 0"<<endl;
    test(0);
    cout <<"x == -1";
    test(-1);
    cout <<"x == -2"<<endl;
    test(2);
    return 0;
}
*/

// Using the Class

// class test{
//     public:
//     test(){
//         cout <<"I am the Constructor "<<endl;
//     }
//     ~test(){
//         cout <<"I am The Destructor "<<endl;
//     }
// };

// int main(){
//     try{
//         cout <<"Exception handeling in class "<<endl;
//         test t;
//         throw(1);
//         cout<<"Testing the Destructor"<<endl;
//     }
//     catch(int x)
//     {
//         cout <<"thank You "<<endl;
//     }
// }

// catching class type as exception

// class Erros{
//     int err_code;
//     char *err_disc;
//     public:
//     Erros(int c,char *d){
//         err_code = c;
//         err_disc = new char[sizeof(d)];
//         err_disc = d;
//     }
//     void err_display(void){
//         cout <<"Error code is "<<err_code<<endl<<"Error Description "<<err_disc<<endl;
//     }
// };

// int main(){
//     try{
//         cout <<"class type Exception "<<endl;
//         throw Erros(99,"the Exeption ");
//     }
//     catch(Erros e){
//         cout<<"Exception caught SuccesFully "<<endl;
//         e.err_display();
//     }
//     return 0;
// }

// Rethrowing an Exception

// void Divided(int a,int b){
//     try{
//         if (b== 0)
//         {
//             throw(b);
//         }
//         else{
//             cout <<"Division is  "<<a/b<<endl;
//         }

//     }
//     catch(int x){
//         cout <<"Exception rethrowing  "<<endl;
//     }
// }

// int main(){
//     int c,d;
//     cout<<"Enter your values for a and b"<<endl;
//     cin>>c>>d;
//     try{
//         Divided(c,d);
//     }
//     catch(int y){
//         cout<<"Exception Caught "<<endl;
//     }
//     return 0;
// }

// stack Implimentaion using the template
/*
template<class T,int n>

class stack{
    T data;
    T *arr;
    int top;
    int size;
    public:
    stack(){
        size = n;
        arr = new T[size];
        top = -1;

    }

    void push(T data){
        if(top == size-1){
            cout <<"Stack is Overflow "<<endl;
            return;
        }
        else{
            top++;
            arr[top] = data;
        }
    }

    void pop(){
        if(top == -1){
            cout <<"stack is Empty"<<endl;
            return;
        }
        else{
            T ans = arr[top];
            arr[top] = -1;
            top--;
        }
    }

    T Top(){
        if(top == -1){
            cout <<"stack is empty"<<endl;
        }
        else{
            return arr[top];
        }
    }

    bool is_empty(){
        if(top == -1){
            return 1;
        }
        else{
            return 0;
        }
    }

    bool is_full(){
        if(top == size-1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    stack<int,3>q;
    q.push(23);
    q.push(4);
    q.push(34);
    while(!q.is_empty()){
        cout<<q.Top()<<" ";
        q.pop();
    }

   stack<char,4>ch;
   ch.push('A');
   ch.push('k');
   ch.push('a');
   ch.push('s');
   ch.push('h');
   while(!ch.is_empty()){
    cout<<ch.Top()<<" ";
    ch.pop();
   }

   return 0;
}
*/

// vector
/*
#include<vector>


void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>v;

    cout<<"the initially size is "<<v.size()<<endl;
    //now push the element
    int x,n;
    cout<<"Enter your Elemnt in it "<<endl;
    cin>>n;
    for(int i =0 ;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    cout<<endl<<v.size()<<endl;
    display(v);
    v.push_back(78);
    display(v);
    cout<<"COntent After the display"<<endl;

    //inserting the element
    vector<int> :: iterator itr = v.begin();
    itr = itr+3;
    v.insert(itr,1,9);
    cout<<endl;
    display(v);

    cout<<"now removing the element in Vector"<<endl;
    v.erase(v.begin()+3,v.begin()+5);
    cout<<"the element are "<<endl;
    display(v);
    return 0;
}
*/

/*
#include<list>

void display(list<int>&l){
   list<int>::iterator it;
   for(it = l.begin();it!=l.end();it++){
        cout<<*it<<" ";
   }

}
int main(){
   list<int>l2;
    list<int>l;
    cout<<"the initially size is "<<endl;
    int x,y,n;
    cout<<"No of element "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        cin>>y;
        l.push_back(x);
        l2.push_back(y);
    }
    cout<<"the size is "<<l.size()<<endl;
    display(l);
    cout<<endl;
    l.push_back(100);
    l.push_front(111);
    display(l);
    cout<<endl;
    l.pop_front();
    l.pop_back();
    cout<<endl;
    display(l);

    cout<<"Merge to lists "<<endl;
    l.merge(l2);
    cout<<"Merged the unsotrd list "<<endl;
    display(l);
    cout<<endl;

    l.sort();
    l2.sort();
    l.merge(l2);

    cout<<"Merdged with sortd "<<endl;
    display(l);
    cout<<endl<<"make in Reverse Order "<<endl;
    l.reverse();
    cout<<"reversed Merged "<<endl;
    display(l);




}

*/

// map implimention

/*
#include<map>

int main()
{
    int number;
    string name;

    int n;
    cout<<"how much data you want to store "<<endl;
    cin>>n;
    map<string,int>ph;
    for(int i=0;i<n;i++) {
      cin>>number;
      cin>>name;
      ph[name] = number;
    }

   ph["harshal "]= 90;
   ph.insert(pair<string,int>("ram",96));
   map<string,int>::iterator i;
   for(i = ph.begin();i!=ph.end();i++){
    cout<<i->first<<":"<<i->second<<endl;

   }
   return 0;
}
*/

// #include<algorithm>
// #include<functional>

// int main(){
//     int x[] = {10,23,11,346,3};
//     int y[] = {12,45,78,89,23};

//     sort(x,x+5,greater<int>());
//     sort(y,y+4);

//     for(int i=0;i<5;i++){
//         cout<<x[i]<<" ";
//     }
//     cout<<endl;

//     for(int i =0;i<5;i++){
//         cout<<y[i]<<" ";
//     }
//     cout<<endl;
//     int z[9];
//     merge(x,x+5,y,y+4,z);
//     sort(z,z+9);
//     for(int i =0;i<9;i++){
//         cout<<z[i]<<" ";
//     }
//     cout<<endl;

// }

// file handeling

// Unformatted I/o Operations
/*
int main(){
    char name[23];
    cin.get(name,6);  //takes n-1 size of your name
    cout<<name<<endl;
    string str;
    getline(cin,str);
    cout<<str<<endl;
    char r[5];
    cin.read(r,5);  //exact input of charcter Numbers
    cout<<r<<endl;

    char name[23] = "Ramayana";  //we can do with string Also
    cout.write(name,8);

    char a = 'w';
    cout.put(a); //print only single character
    return 0;
}
*/

// Formatted I/o streams
/*
int main(){
    cout.width(14);
    cout.fill('#');
    cout<<"Akash"<<endl;
    cout<<"My Number is "<<endl;
    cout<<3.12314<<endl;
    cout.precision(2);
    cout<<fixed<<3.12314<<endl; //gives the Exactly o/p of decimal after NUmbers
    cout.width(8);
    cout.fill('*');
    cout.setf(ios::left , ios::adjustfield);
    cout<<312<<endl;
    cout<<100<<endl;
    cout.unsetf(ios::hex);
    cout<<100<<endl;



}

*/

// flag Do not hav any bitfeild

/*
int main(){
    cout.setf(ios::showpos);
    cout<<100<<endl;


    cout.setf(ios::oct,ios::basefield);
    cout.setf(ios::showbase);
    cout<<100<<endl;
    cout.unsetf(ios::oct);
    cout<<100<<endl;

    cout.setf(ios::uppercase);
    cout<<hex<<15<<endl;

    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<23.453<<endl;

    return 0;


}
*/

// Managing the Manipulators for the Output
//  #include<iomanip>
//  int main(){
//      cout<<setw(8)<<setfill('*')<<234<<endl;
//      cout<<setprecision(3)<<fixed<<34.3423<<endl;
//  }

// user defind the manipulator

// ostream &AJ(ostream & c){
//     cout<<" ";
//     return c;

// }
// int main(){
//     cout<<"heloo"<<AJ;
//     cout<<"World"<<AJ;
// }

// File handeling

#include <fstream>
/*

// using constructor
int main(){
    string name;
    float cost;

    cout<<"ENter your name "<<endl;
    cin>>name;
    cout<<"Enter your cost "<<endl;
    cin>>cost;

    ofstream fout("local.txt");

    fout<<"the name is "<<name<<endl;
    fout<<"the value  is "<<cost<<endl;

    fout.close();

    ifstream fin("local.txt");
    // cout<<"the name is "<<name<<endl;
    // cout<<"the cost is "<<cost<<endl;
    while(fin){
     getline(fin,name);
     cout<<name<<endl;
    }

    fin.close();
    return 0;
}


 */

// working with the Multiple files ans using string
/*

int main()
{

     //file1
     string name;
     cout<<"Enter your Local Name "<<endl;
     getline(cin,name);
     ofstream fout1;
     fout1.open("local.txt");
     fout1<<"the name of person is "<<name<<endl;
     fout1.close();

     //file2

     cout<<"ENter your Global name "<<endl;
     getline(cin,name);
     ofstream fout2;
     fout2.open("global.txt");
     fout2<<"the name of Outside man "<<name<<endl;
     fout2.close();

     //now reading the files
     string content;

     ifstream fin1;
     fin1.open("local.txt");
     while(fin1){
        getline(fin1,content);
        cout<<content<<endl;

     }
     fin1.close();

     ifstream fin2;
     fin2.open("global.txt");
     while(fin2){
        getline(fin2,content);
        cout<<content<<endl;
     }
     fin2.close();

     return 0;

}
*/

// using the character reading

/*
int main(){

    ifstream fin;
    fin.open("local.txt");
    char ch;
    while(!fin.eof()){
        fin.get(ch);
        cout<<ch;
    }
    fin.close();
    return 0;
}
*/

// reading from the multiple files/

/*
int main(){

    ifstream fin1;
    fin1.open("local.txt");
    char ch;     //using char reading
    string str;  //using string reading

    while (!fin1.eof())
    {
        fin1.get(ch);
        cout<<ch;
        // getline(fin1,str);
        // cout<<str;
    }

    fin1.close();

    ifstream fin2;
    fin2.open("global.txt");
    while (!fin2.eof())
    {
        fin2.get(ch);
      cout<<ch;
    //   getline(fin2,str);
    //   cout<<str;
    }
    fin2.close();
    return 0;

}

*/

//  sequnetial input and output operation

/*
void writefile(){
    string str;
    cout<<"Enter your string "<<endl;
    getline(cin,str);
    ofstream fout;
    fout.open("local.txt");
    fout<<str<<endl;
    fout.close();
}
void readfile(){
    ifstream fin;
    fin.open("local.txt");
    string str;
    while(fin){
        getline(fin,str);
        cout<<str;

    }
    cout<<endl;
    fin.close();

}
int main(){
    writefile();
    readfile();
}

*/

// Appned
/*
 int main()
 {
    string str;
    cout<<"Enter your string "<<endl;
    getline(cin,str);

    ofstream fout;
    fout.open("global.txt",ios::app);
    fout<<str;
    fout.close();

    ifstream fin;
    fin.open("global.txt");
    while(fin){
        getline(fin,str);
        cout<<str;
    }
    fin.close();
 }
*/

// Read And Write in binary Mode

/*
int main(){
    // float h[4] = {1.2,5.6,3.8,4.2};
    string str;
    getline(cin,str);
    ofstream fout("float",ios::binary);
    fout.write((char*)&str,sizeof(str));
    fout.close();

    // for(int i =0;i<4;i++){
    //     h[i] = 0;
    // }

    ifstream fin("float",ios::binary);
    fin.read((char*)&str,sizeof(str));
    // for(int i =0;i<4;i++){
    //     cout<<h[i]<<" ";
    // }

    fin.close();
    return 0;
}
*/

// Reading and Writing using the class object

/*
class Intern{
    public:
    int x;
    string name;

    void read(){
        cout<<"Enter your Id "<<endl;
        cin>>x;
        cout<<"Enter your Name"<<endl;
        cin>>name;

    }

    void writedata(){
        cout<<"the Id of intern is "<<x<<endl;
        cout<<"The name of inter is "<<name<<endl;

    }
};

int main(){
    Intern i1;

    ofstream fout;
    fout.open("float",ios::binary);
    i1.read();
    fout.write((char* )&i1 ,sizeof(i1));
    fout.close();

    ifstream fin;
    fin.open("float",ios::binary);
    fin.read((char*)&i1,sizeof(i1));
    i1.writedata();
    fin.close();
    return 0;
}
*/

// using the tellg( ) funcion

/*
int main(){

  ifstream fin;
  char ch;
  fin.open("local.txt");
  int pos;
  pos = fin.tellg();
  fin>>ch;
  cout<<ch;
  cout<<pos;

  pos = fin.tellg();
  cout<<pos;
  fin>>ch;
  cout<<ch;

  pos = fin.tellg();
  cout<<pos;
  fin>>ch;
  cout<<ch;

  pos = fin.tellg();
  cout<<pos;
  fin>>ch;
  cout<<ch;

  pos = fin.tellg();
  cout<<pos;
  fin>>ch;
  cout<<ch;

 return 0;
}
*/

// tellp( ) and  tellp();

/*
int main(){
    ofstream fout;
    ifstream fin;

    char ch;

    fin.open("local.txt",ios::app);

    int pout;
    int pin;
    pin = fin.tellg();
    cout<<pin;

    fin.close();

    fout.open("local.txt",ios::app);
    pout = fout.tellp();
    cout<<pout;

    fout<<"World";

    pout = fout.tellp();
    cout<<pout;

    fout.close();
    return 0;
}
*/

// tellg() and  seekg();

/*
int main(){
    ifstream fin("local.txt");
    cout<<fin.tellg();

    cout<<(char)fin.get()<<endl;
    cout<<(char)fin.tellg()<<endl;
    fin.seekg(0);

    cout<<endl<<fin.tellg();
    cout<<endl<<(char)fin.get();

    fin.seekg(6);
    cout<<endl<<fin.tellg()<<endl;
    cout<<(char)fin.get()<<endl;
    cout<<fin.tellg()<<endl;


    fin.seekg(2,ios::cur);

    cout<<endl<<fin.tellg();
    cout<<(char)fin.get();
    fin.seekg(2,ios::beg);
    cout<<endl<<fin.tellg();

    cout<<fin.tellg();
    fin.seekg(-2,ios::end);

    cout<<endl<<fin.tellg();

    cout<<(char)fin.get();

    fin.close();
    return 0;
}
*/

// Random Access
// seekg()  and tellg() function
// where to start reading in the file and currnet position

/*
int main(){
    string str;
    getline(cin,str);

    ofstream fout;
    fout.open("local.txt");

    fout<<str<<endl;
    cout<<fout.tellp()<<endl;

    fout.close();

    ifstream fin("local.txt");
    fin.seekg(5);
    cout<<fin.tellg();


    while(fin){
        getline(fin,str);
        cout<<str;
    }
    fin.close();

    return 0;
}

*/

// seekp() and tellp() function

// from where to  write and get its postions

// int main(){
//     ofstream fout;
//     fout.open("local.txt",ios::ate);
//     fout<<"hello World "<<endl;
//     fout.seekp(3,ios::beg);
//     cout<<fout.tellp();
//     fout<<"...And here is test changes"<<endl;
//     fout.close();
// }

// command line Argument

// g++ OOps.cpp -o OOps
// ./OOps arg1 arg2   ..

// int main(int argc,char* argv[]){
//     cout<<"You have Enterd "<<argc<<"argument"<<endl;
//     for(int i=0;i<argc;i++)
//     {
//         cout<<argv[i]<<endl;

//     }
// }

// int main(int argc, char *argv[])
// {
//     int num1 = atoi(argv[1]);
//     int num2 = atoi(argv[2]);

//     int sum = num2 + num1;
//     cout << sum << endl;
//     return 0;
// }

// eof()  -- reaches end of file
//  fail() -- returns true if eof otherwise reaches fails
// bad() -- true when invalid operation in attempted to perfrom

// int main()
// {
//     ifstream file;
//     file.open("local");

//     if(file.is_open()){
//         cout<<"file open"<<endl;
//         file.close();
//     }
//     else{
//         cerr<<"Error Opening in the file "<<endl;
//     }
//     return 0;
// }

// Polymorphism

// function  Overloading

/*
void  add(int a,int b){
    cout<<a+b<<endl;
}

void add(float m,float n,float p){
    cout<<m+n+p<<endl;
}

void add(char f,char c){
    cout<<f+c<<endl;
}


int main(){
    add(2,3);
    add(23.23,23.23,12.12);
    add('a','o');
}
*/

// Operator Overloading

/*
class Test{
    int a;
    public:
    void get(){
        cin>>a;
    }
    void commpare(Test &c){
        if(a == c.a){
            cout<<"Element is Same"<<endl;
        }
        else{
            cout<<"Element is Not Same "<<endl;
        }
    }

};
int main(){
     Test t1,t2;
     t1.get();
     t2.get();
     t2.commpare(t1);
     return 0;
}
*/

/*
class Space{
    int x,y,z;
    public:
    void getdata(int a,int b,int c){
        x = a;
        y = b;
        z = c;
    }
    void display(){
        cout<<"x ="<<x<<endl;
        cout<<"y = "<<y<<endl;
        cout<<"z = "<<z<<endl;
    }

    void operator -(){
        x = -x;
        y = -y;
        z = -z;
    }
};

int main(){
    Space s;
    s.getdata(12,3,4);
    s.display();
    -s;
    s.display();
}
*/

// complex NUmber is oVerloaded
/*

class complex{
    float x,y;
    public:
    complex(){};
    complex(float real ,float img){
        x = real;
        y = img;
    }

    complex operator +(complex &c){
        complex temp;
        temp.x = x+c.x;
        temp.y = y+c.y;
        return temp;
    }

    void display(){
        cout<<x<<"+i"<<y<<endl;
    }

};
int main(){
    complex c1,c2,c3;
    c1 = complex(2.3,23.2);
    c2 = complex(34.34,34);
   c3 = c1+c2;
   cout<<endl;
   c1.display();
   c2.display();
   c3.display();
   return 0;
}

*/
/*
class Inc{
    int a;
    public:
    void get(){
        cin>>a;
    }
    void operator ++(){
        a++;
    }
    void operator --(){
        a++;
    }
    void display(){
        cout<<a<<endl;
    }

};

int main(){
    Inc i1,i2;
    i1.get();
    i2.get();

    ++i1;
    --i2;
    cout<<endl;
    i1.display();
    cout<<endl;
    i2.display();

}
*/

// using the friend function

/*
class Test{
    int x;
    public:
    void get(){
        cin>>x;
    }
    friend void operator >(Test a, Test b);
    void display(){
        cout<<x;
    }
};

void operator >(Test a,Test b){

    cout<<((a.x >b.x)?"Grater ":"Smaller in ")<<endl;
}

int main(){
    Test t1,t2;
    t1.get();
    t2.get();
    t1.display();
    t2.display();
    t1>t2;
   return 0;

}


*/

/*

//type conversion

int main(){
    // float a =56.23;
    // int b= a;
    // cout<<b<<endl;

    float f = 343.3;
    int a;
    a = int(f);
    cout<<a;
}
*/

// Int type to class type

/*
class Time{
    int h;
    int m;
    public:
    Time(int t){
        h = t/60;
        m = t%60;

    }
    void display(){
        cout<<h<<m<<endl;
    }

};

int main(){
    Time t1(4);
    int d = 23;
    t1  = d;
    t1.display();

}
*/

// Runtime PolyMorphism

// Virtual/

/*
class A{
    public:
    void display(){

        cout<<"I am in class A"<<endl;
    }

    virtual void print(){
        cout<<"I am in virtual class of A"<<endl;
    }
};

class B:public A{
    public:
    void display(){
        cout<<"I am in class B"<<endl;
    }
    void print(){
        cout<<"I am in class B"<<endl;
    }

};

int main()
{

  A a,*ptr;
  ptr = &a;
  ptr->display();
  ptr->print();

  B b,*ptr2;
  ptr2 = &b;
  ptr2->display();
  ptr2->print();

  ptr = ptr2;

  ptr->display();
  ptr->print();
return 0;

}
*/

// Pure Virtual Function
/*

class A{
    public:
    void display(){
        cout<<"I am in Class A "<<endl;
    }
    virtual void print()=0;

};

class B :public A{
    public:
    void display(){
        cout<<"i am in Class B"<<endl;
    }
    void print(){
        cout<<"I  am in The B "<<endl;
    }
};

class C :public A{
    public:
    void display(){
        cout<<"i am in the Class C "<<endl;
    }

    void print(){
        cout<<"I am In the C "<<endl;
    }
};

int main()
{
    A *p;
    p->display();
    B  b;
    C c;
    p = &b;
    p->print();
    // p->display();

    p = &c;
    // p->display();
    p->print();
   return 0;
}
*/

// virtual constructr and De/structor

/*
class A{
    public:
    A(){
        cout<<"I am in class A Constructor "<<endl;
    }
    ~A(){
        cout<<"i am in class A Destructor "<<endl;
    }
};

class B:public A{
    public:
    B(){
        cout<<"I am in the B"<<endl;
    }
    ~B(){
        cout<<"I am B Destructor "<<endl;
    }
};

int main(){
    A *p = new A[3];

    delete(p);

}

*/

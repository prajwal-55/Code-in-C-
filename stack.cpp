#include<iostream>
#include<stack>
#include<vector>
using namespace std;

class Stack{
    public:
    //properties
    int size;
    int top;
    int *arr;

    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    int push(int element){
        if(size - top >1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack overflow"<<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }else{
            cout<<"Stack Underflow"<<endl;
        }
    }

    int peek(){
        if(top>=0){
            return arr[top]; 
        }
        else{
           cout<< "Stack is Empty"<<endl;
           return -1;
        }
    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){

    Stack st(5);
    st.push(56);
    st.push(97);
    st.push(23);

     cout<<"Top element is "<<st.peek()<<endl;
     st.pop();
     cout<<"Top element is "<<st.peek()<<endl;
     st.pop();
     cout<<"Top element is "<<st.peek()<<endl;

/*
// creating stack using vector
  stack<int>s;

// adding values in the stack
  s.push(2);
  s.push(3);
  s.push(6);
  s.push(9);

  cout<<"Top element is "<<s.top()<<endl;

  cout<<"After pop"<<endl;
  s.pop();
  s.pop();
   cout<<"Top element is "<<s.top();
// use cppreference and cpp.com website
*/
    return 0;
}

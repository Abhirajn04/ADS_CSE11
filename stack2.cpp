#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

class Stack{
    public:
    Node* top;
    int s = 0;
    Stack(){
        top = NULL;
    }
    void push( int value){
        Node* temp = new Node(value);
        temp -> next = top;
        top = temp;
        s++;
    }
    void pop(){
        if(top==NULL){
            cout<<"Underflow\n";
            return; 
        }
        Node* temp = top;
        top = top->next;
        delete temp;
        s--;
    }
    void peek(){
        if(top == NULL){
            cout<<"Empty\n";
            return;
        }
        int topEl = top->data;
        cout<<topEl<<'\n';
    }
    void traverse(){
        Node* temp = top;
        while(temp!=NULL){
            cout<<temp->data<<"\t";
            temp = temp->next;
        }
        cout<<"Null\n";
    }
    bool empty(){
        return top == NULL;
    }
    int size(){
        return s;
    }
    ~Stack(){
        while(top!=NULL){
            Node* temp = top;
            top = top->next;
            delete temp;
        }
    }

};
int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.traverse();
    st.pop();
    st.traverse();
}
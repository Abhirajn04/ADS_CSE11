#include <iostream>
using namespace std;
const int Max =100;
int st[Max];
int top = -1;

void push(int item){
    if(top == Max-1){
        cout<<"Overflow"<<endl;
        return;
    }
    top = top +1;
    st[top] = item;

}
void pop(){
    if(top<=-1){
        cout<<"Underflow"<<endl;
        return;
    }
    top = top -1;
}
int topElement(){
    if(top<=-1){
        cout<<"Empty"<<endl;
        return -1;
    }
    return st[top];
}
bool isEmpty(){
    return top<=-1;
}
bool isFull(){
    return top == Max-1;
}
int size(){
    return top+1;
}
void traverse(){
    if(isEmpty()){
        return;
    }
    if(!isEmpty()){
        cout<<"top⬇️"<<endl;
    }
    for(int i=top; i>=0; i--){
        
        cout<<st[i]<<endl;
    }
}
int main(){
    push(6);
    push(10);
    push(15);
    push(20);
    traverse();
    pop();
    traverse();
    
    return 0;

}
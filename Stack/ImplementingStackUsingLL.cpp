#include <bits/stdc++.h>
using namespace std;
struct StackNode
{
    int data;
    struct StackNode* next;
    StackNode(int a){
    data=a;
    next=NULL;
    }
};
class Mystack{
private:
    StackNode* top;
public:
    void push(int );
    int pop();
    Mystack() { top = NULL;}
};
void Mystack ::push(int x) {
    StackNode* newNode = new StackNode(x);
    if(top==NULL){
        top = newNode;
        return;
    }
    StackNode* temp = top;
    while(temp->next){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = NULL;
}

/* The method pop which return the element
  poped out of the stack*/
int Mystack ::pop() {
     if(top==NULL){
        return -1;
    }
    StackNode* curNode = top;
    StackNode* prevNode = NULL;
    while(curNode->next!=NULL){
        prevNode = curNode;
        curNode = curNode->next;
    }
    if(curNode==top)
        top = NULL;
    int res = curNode->data;
    if(prevNode)
        prevNode->next = NULL;
    return res;
}
int main()
{
    Mystack* sq= new Mystack();
    int q;
    cin>>q;
    while(q--){
        int querytype=0;
        cin>>querytype;
        if(querytype==1){
            int a;
            cin>>a;
            sq->push(a);
        }
        else if(querytype==2){
            cout<<sq->pop()<<" ";
        }
    }
    return 0;
}

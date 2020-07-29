#include<bits/stdc++.h>
using namespace std;

struct QueueNode{
    int data;
    QueueNode* next;
};
class MyQueue
{
private:
    int arr[100005];
    int front;
    int rear;
public:
    MyQueue(){front=0;rear=0;}
    void push(int );
    int pop();
};

void MyQueue :: push(int x)
{
    arr[rear++]=x;

}

/*The method pop which return the element
  poped out of the queue*/
int MyQueue :: pop()
{
    if(rear==front)
     return -1;
    else
    {
     int x=arr[front++];
     return x;
    }
}
int main()
{
    MyQueue* sq= new MyQueue();
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

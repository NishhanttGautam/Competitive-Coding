#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
class Stack
{
    int top;
public:
    int a[MAX];
    Stack()  { top = -1; }
    void push(int x);
    int pop();
};

void Stack::push(int x)
{
    if (top >= (MAX-1))
    {
        cout << "Stack Overflow";
    }
    else
    {
        a[++top] = x;
        cout<<x <<" pushed into stack\n";
    }
}

int Stack::pop()
{
    if (top < 0)
    {
        cout << "Stack Underflow";
        return 0;
    }
    else
    {
        int x = a[top--];
        return x;
    }
}
int main()
{
    class Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout<<s.pop() << " Popped from stack\n";

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int convertFive(int n);
int main()
{
int T;
cin >>T;
while(T--)
{
int n;
cin>>n;
cout<< convertFive(n);
}
}

int convert0To5Rec(int num) {
     if (num == 0) return 0;

    int digit = num % 10;
    if (digit == 0) digit = 5;
    return convert0To5Rec(num / 10) * 10 + digit;
}
int convertFive(int num) {
    if (num == 0)
        return 5;
    else
        return convert0To5Rec(num);
}

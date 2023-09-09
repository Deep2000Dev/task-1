#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter a number"<<endl;
    cin>>a;
    int b;
    cout<<" enter another number"<<endl;
    cin>>b;
    char op;
    cout<<"enter the operator"<<endl;
    cin>>op;
    if(op=='*')
    {
        cout<<a*b<<endl;
    }
    else if(op=='/')
    {
        cout<< a/b<<endl;
    }
    else if(op=='+')
    {
        cout<<a+b<<endl;
    }
    else if(op=='-')
    {
        cout<<a-b<<endl;
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter two number(a,b): \n";
    cin>>a>>b;
    a>b?(cout<<"a is greater"):cout<<"b is greater";
    c = a>b?10:20;
    cout<<("c is %d\n",c);
}
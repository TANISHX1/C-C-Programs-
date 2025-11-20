#include <iostream>
using namespace std;

int main (){
    char array[]{'a','d','f','g','h','j','y','n','h','j'};
    for(auto i :array)
    {
        i+=1;
        cout<<char(i)<<" ";
    }cout<<endl;
    cout<<"Size of : "<<sizeof(array)<<endl;
    cout<<endl;
    cout<<array<<endl;
    char array1[]{"Hello"};
    cout<<"array1 : "<<array1<<endl;
    cout<<"Size : "<<sizeof(array1)<<endl;
}
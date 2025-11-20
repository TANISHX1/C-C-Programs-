#include<iostream>
#include<new>
#include<iterator>
using namespace std;

int main(){
    const size_t size {10};

    double *ptr {new double[size]};
    //we are using 'nothrow' because if memory allocation fails it will return nullptr to pointer .
    //if not used then ,if allocation fails it will throw error "std::bad_alloc" and code will crashes
    double *ptr1 {new (std::nothrow)double[size]{}};
    char *ptr2 {new(std::nothrow)char[size]{100,72,73,74,75,76,77} };   
   if(ptr2){
    cout<<"size of ptr2 : "<<sizeof(ptr2)<<endl;
    cout<<"successfully allocation memory for scores."<<endl;

    for(size_t i{};i<size;i++){
        cout<<"value of ptr["<<i<<"] : "<<*(&ptr2[0] + i)<<endl;
    }
   }

delete [] ptr ;
ptr = nullptr;
delete [] ptr1 ;
ptr1 = nullptr;
delete [] ptr2 ;
ptr2 = nullptr;    
   return 0; //can't use all array properties (like size(array)) it is alloated in heap
    
    //static vs dyanamic arrays diff
    //things gets different when we use dyanamic arrays
}
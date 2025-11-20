#include<iostream>
#include<ios>
#include<iomanip>

using namespace std;
int main(){
   /* int arr[10];
    cout<<left;
    cout<<setw(20)<<"Array index "<<setw(10)<<"Value"<<endl;
    for(size_t i{0};i<10;i++)
    {
      cout<<setw(20)<<("array[%d] ",i)<<setw(10)<<arr[i]<<endl;
    }
    return 0;*/
    /*For every element in the array scores, assign its value to the variable elements, and run the loop body."
    this is happening 
    for (int i = 0; i < 9; ++i) {
    int elements = scores[i];
    sum += elements;
}
*/
    int scores[]{2,3,4,5,6,7,8,9,34};
    int sum{0};
    /*for(int i=0;i<sizeof(scores)/sizeof(scores[0]);i++)
    {
        cout<<scores[i]<<"  ";
    }*/
   for(auto i : scores)
   {
    cout<<"value: "<<i<<endl;
   }
    cout<<endl;
    for(int elements:scores)
    {
        sum += elements;
    }
    cout<<"Sum is : "<<sum<<endl;
    return 0;

    
}
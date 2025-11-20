#include <iostream>

using namespace std;
int main(){
 unsigned int a= 10;
   a = -1;
   int b  = 65537 ;
   cout<<"Size of size_t : "<<sizeof(size_t)<<endl;
   cout<<a<<endl;
   cout<<b<<endl;
   for(size_t i{0};i<b;i++)
   {
    printf("%d  :stay here\n",i);
   }
    return 0;
}
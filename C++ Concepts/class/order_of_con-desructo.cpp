// order_of_con-desructo.cpp — This file demonstrates/contains: order of con desructo
#include<iostream>
#include<iomanip>
using namespace std;
class prime{
   public:
   string a;
   int c;
   prime(string a , int c): a(a),c(c) {
        cout<<left;
        cout<<setw(30)<<"Constructor is called for : "<<setw(15)<<a <<"  Position : "<<c<<endl;
      }

      ~prime(){
        cout<<setw(30)<<"Destructor  is called for : "<<setw(15)<<a <<"  Position : "<<c<<endl;
      }
};

int main(){
    /*the reason of order of destructor called in output is because of the logic.
     the obj created first could be(can be ) used further in program or more 
     chances of occurance in further code and the obj created at last has less 
     chance of ocrance in code . so, the obj created first will be destructed last.*/
    prime obj1("alpha",1);
    prime obj2("Beta",2);
    prime obj3("Gamma", 3);
    prime obj4("delta",4);
    return 0;

}

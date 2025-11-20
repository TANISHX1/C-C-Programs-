
//its correct but we have to make it more memory efficient
#include<iostream>
#include<iomanip>
#include<string>
#include<cstring>
const int a{12};
using namespace std;
class friends{
   public:
   string names[a]{"yash","mohit","juhi","prince","raghav","harshit","prasun","aditi","ananya","lavanya","pranjal","priyanshu"};
};
bool comparestrings(const string &name1,const string &name2)
{
   return name1 == name2;
}

int main(){
    int i;
    cout<<"Enter Number of Friends to check:  ";
    cin>>i;cin.ignore();
    friends myfriend;
    
    string arr[i];
   
  
   for(auto &i:arr)
   {
      cout<<"Enter name:  ";
      getline(cin,i);
   }
   /* method 1--------------------------------------------
   int matching[i]{0};
   for(int j=0,k,flag;j<i;j++)
   {
      flag =0;
      for(k=0;k<a;k++)
   if(comparestrings(myfriend.names[k],arr[j]))
   {
       flag = 1;
       break;
   }
   if(flag)
   {      
      matching[j] = 1;
      }
   }
   cout<<"it is the value inside matching : ";
   for(auto l :matching)
    cout<<l<<" ";

   cout<<endl<<"Match Found : "<<endl;
   for(int j=0;j<i;j++)
   {
      if(matching[j])
      cout<<arr[j]<<endl;
   }*/
   //method-2-------------------------------------------------------------
   cout<<"Match Found : \n";
   for(int j=0,k=0;j<i;j++)
   {
      for(k=0;k<a;k++)
      {
         if(comparestrings(arr[j],myfriend.names[k]))
         {
            cout<<arr[j]<<endl;;
            break;
         }
      }
   } 

   return 0;
}
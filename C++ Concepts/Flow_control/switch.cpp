#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
const int selected1 {1};   
const int selected2 {2};
const int selected3 {3};
const int selected4 {4};
const int selected5 {5};
const int selected6 {6};
const int selected7 {7};
const int selected8 {8};
const int selected9 {9};
const int selected10{10};
srand(static_cast<unsigned int>(time(0)));
int random = rand()%10 +1;
switch (random)
{
case selected1:
    {cout<<"lucky in love\n";
    break;}
    case selected2:
    {cout<<"Everyone arounds you likes you\n";
    break;}
    case selected3:
    {cout<<"Nobody loves you:/\n";
    break;}
    case selected4:
    {cout<<"You loves someone but can't say..\n";
    break;}
    case selected5:
    {cout<<"unluck in everything\n";
    break;}
    case selected6:
    {cout<<"Everyone wants you\n";
    break;}
    case selected7:
    {cout<<"Kalijuban but lucky\n";
    break;}
    case selected8:
    {cout<<"your are the cutest and prittest";
    break;}
    case selected9:
    {cout<<"Everyone wants your presence Because you are charming  and supportive\n";}
    break;
    case selected10:
    {cout<<"you wants to kill someone \n";
    break;}
   

default:
{
    cout<<"Kya karoge jaan kar:)..\n";
}
    break;
}    
}
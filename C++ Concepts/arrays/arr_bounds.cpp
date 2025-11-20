#include<iostream>
using namespace std;
int main()
{
    /*if we are touching or going behond the limits of array and makes changes (like storing values)
     it may corrup or makes changes or any thing can happnes to that memory location*/
    int arr[5]{0};
    for(int i = -2;i<10;i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    return 0;
}
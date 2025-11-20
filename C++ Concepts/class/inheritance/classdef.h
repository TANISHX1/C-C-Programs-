// classdef.h — This file demonstrates/contains: classdef
#include<iostream>
#include<string>
using namespace std;
class primary{
    public:
    //getters
  
    primary* mobile_number(){
        unsigned long int mobile_no;
       
        cout<<"Enter mobile :\t";
        cin>>mobile_no;
        this->mobile_no = mobile_no;
        return this;
    }
   
    primary* name_And_Place(){
        string name ; string country__state;
        cout<<"Enter name :\t";
        
        getline(cin,name);
        cout<<"Enter address :\t";
        cin.ignore();
        getline(cin,country__state);
        this->name = name;
        this->country__state = country__state;
        return this;
    }
   
    primary* Age( ){
        unsigned int age;
        cout<<"Enter Age :\t";
        cin>>age;        
        this->age = age;
       return this;
    }
  
    void print(){
        cout<<"\n-------------------------------------\n";
        cout<<" Name          : "<< this->name<<endl;         
        cout<<" Age           : "<<this->age <<endl;
        cout<<" Address       : "<<this->country__state <<endl;
        cout<<" Mobile number : "<<this->mobile_no <<endl;        
        cout<<"\n-------------------------------------\n";
       
    }

    private:
       long int mobile_no;
       string name;
       string country__state;
       short int age;
};

#include<iostream>
using namespace std;
int main(){

    int age;
    cin>>age;

    if(age<12){
        cout<<"Child"<<endl;    
    }
    else if(60>age>18){
        cout<<"Adult"<<endl;
    }
    else if(age>60){
        cout<<"Senior Citizen"<<endl;
    }
    else{
        cout<<"Teenager"<<endl;
    }

    return 0;
}
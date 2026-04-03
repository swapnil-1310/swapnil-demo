#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"menu"<<endl;
    cout<<"1:add\n2:substract\n3:multiply\n4:division\n";
    cout<<"enter choice"<<endl;
    cin>>c;
    cout<<"enter 1st value:"<<endl;
    cin>>a;
    cout<<"enter 2nd value"<<endl;
    cin>>b;
    switch(c){
        case 1: cout<<"addition is"<<a+b;
        break;
        case 2: cout<<"substraction is"<<a-b;
        break;
        case 3: cout<<"multiplication is"<<a*b;
        break;
        case 4: cout<<"division is"<<a/b;
        break;
        default: cout<<"invalid data entered";
    }
}
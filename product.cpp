#include<iostream>
using namespace std;

int main(){
    int *a , *b;
    int x,y;
    cout<<"Enter two numbers :"<<endl;
    cin>>x>>y;
    a = &x;
    b = &y;
    
    cout<<"Product of two numbers is :"<< (*a) * (*b)<<endl;
}
// 1: Write a program to find the product of two numbers using pointers.

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter your two number: "<<endl;
    cin>>a>>b;
    int *ptrX,*ptrY;
    ptrX = &a;
    ptrY = &b;
    cout<<"Product is: "<<(*ptrX)*(*ptrY)<<endl;
    return 0;
}
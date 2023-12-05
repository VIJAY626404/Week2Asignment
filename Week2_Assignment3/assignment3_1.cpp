// 1. Print all the odd numbers from 1 to 100
#include<iostream>
using namespace std;
int main(){
    cout<<"Odd number in range 1 to 100 is: "<<endl;
    for(int i=1; i<=100; i++){
        if(i%2!=0){
            cout<<i<<endl;
        }
    }
    return 0;
}
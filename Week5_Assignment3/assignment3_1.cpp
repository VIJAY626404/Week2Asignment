// 1. Count the number of triplets whose sum is equal to the given value x.

#include <iostream>
using namespace std;
int main() {
int x;
cout<<"Enter target value to find triplets: "<<endl;
cin>>x;
int A[5];
cout<<"Enter 5 elements for the array"<<endl;
for(int i=0;i<5;i++)cin>>A[i];
int count = 0;
 
 for(int i = 0; i < 5; i++){
 for(int j = i + 1; j < 5; j++){
 for(int k = j + 1; k < 5; k++){
 if(A[i] + A[j] == A[k]){
 count++;
 }
 }
 }
 }
 cout<<"Total number of triplets is: "<<count<<endl;
 return 0;
}
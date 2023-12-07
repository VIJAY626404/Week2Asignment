// 1. Count the number of elements strictly greater than x

#include<iostream>
using namespace std;
int main() {
 int arr[] = {3,23,15,8,2};
 int count = 0;
 int x;
 cout<<"Enter your target value: "<<endl;
 cin>>x;
 int n = sizeof(arr)/sizeof(arr[0]);
 
//  traverse and check array
for(int i=0; i<n; i++){
    if(arr[i]>x){
        count++;

    }
}
cout<<"Total number greater than"<<x<<" is: "<<count<<endl;
 return 0;
}

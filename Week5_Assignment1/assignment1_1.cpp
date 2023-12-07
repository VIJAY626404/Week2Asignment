// 1. Calculate the product of all the elements in the given array
#include<iostream>
using namespace std;
int main(){
int arr[] = {2,3,4,5,6};
int n = sizeof(arr)/sizeof(arr[0]);
int ans=1;
for(int i=0; i<n; i++){
    ans *= arr[i];

}
cout<<"Sum of element in list is: "<<ans<<endl;

}

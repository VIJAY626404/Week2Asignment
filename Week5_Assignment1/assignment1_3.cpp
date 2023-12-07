// 3. Find the minimum value out of all elements in the array.
#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,5,8,2,55};
    int min = INT16_MAX;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }

    }
    cout<<"minimum value in array is: "<<min<<endl;
}
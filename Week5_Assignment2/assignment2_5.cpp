// 5. Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed values by 10
#include <iostream>
using namespace std;
int main() {
int arr[5]={7,2,32,5,20};
// print array before change value
cout<<"Array before change value: "<<endl;
for(int i=0; i<5; i++){
    cout<<arr[i]<<" ";
}

// print array after change value
cout<<endl<<"Array after changed value: "<<endl;
for(int i=0;i<5;i++){
 if(i%2==0) arr[i]+=10;
 else arr[i]=2*arr[i];
 cout<<arr[i]<<" ";
 }
return 0;
}
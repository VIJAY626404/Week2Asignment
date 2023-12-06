/*
7. Print the factorials of first ‘n’ numbers
Sample Input : 10
Output :
1
2
6
24
120
720
5040
40320
362880
3628800
*/
#include <bits/stdc++.h>
using namespace std;
int main( ) {
int n;
cout<<"Enter your integer to find factorial: "<<endl;
cin >> n;
int fact = 1;
if (n==0){
    fact = 1;
}
for(int i=1;i<=n; i++){
    fact = fact*i;
cout<<fact<<endl;
}
}
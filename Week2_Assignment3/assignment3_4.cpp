// 4. Display this AP - 4,7,10,13,16.. upto ‘n’ terms
#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cout<<"Enter the value of n:"<<endl;
cin >> n;
int start = 4, d = 3;
cout<<"Your AP Series is:"<<endl;
while (n--) {
cout << start << " ";
start += 3;
}
}
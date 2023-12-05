// 5. Display this GP - 3,12,48,.. upto ‘n’ terms.
#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cout<<"Enter the value of terms: "<<endl;
cin >> n;
cout<<"Your GP Series is: "<<endl;
int start = 3, r = 4;
while (n--) {
cout << start << " ";
start *= r;
}
}

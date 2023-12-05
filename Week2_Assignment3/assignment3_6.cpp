// 6. Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using a while loop
#include <bits/stdc++.h>
using namespace std;
int main() {
cout<<endl<<"ASCII value of all aplphabets are : "<<endl;
int i = 0;
while (i < 26) {
cout << "ASCII value of " << (char)(i + 'A') << " is " << (int)(i + 'A') << 
endl;
i++;
}
}

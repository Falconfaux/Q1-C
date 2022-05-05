#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[] = "A string.";
    char *p = str;
    cout << str[0] << " " << *p << " " << p[3] << endl;
    p += 2; // the pointer is now at s (deflection of 2 indices)
    cout << *p << " " << p[2] << " " << p[5] << endl;
    return 0;
}
//By Ankit shetty 865

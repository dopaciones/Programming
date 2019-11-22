#include <iostream>

using namespace std;


string zaloopa(string *s)
{
    string a = " loh";
    *s += a;
    return *s;
}
int main()
{
    string s = "kostya";
    zaloopa(&s);
    cout << s;
    return 0;
}

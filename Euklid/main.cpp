#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;

    cout << "Input a, b" << endl;
    cin >> a >> b;

    while (a != b){
        if (a > b){
            a = a - b;
        }
        else {
            b = b - a;
        }
    }

    cout << a;
}

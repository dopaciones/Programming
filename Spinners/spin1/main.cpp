#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    int a = 0;
    int b = 0;
    int c = 0;
    int n = 0;

    cout << "Введите A, B, C: ";
    cin >> a >> b >> c;
    cout << endl;

    c -= a;
    n = c/b;

    cout << "Количество лопастей: " << n << endl;
}

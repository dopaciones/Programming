#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    int m = 0;
    int lop3 = 0;
    int lop4 = 0;

    cout << "������� ���������� �������� M: ";
    cin >> m;
    cout << endl;

    lop4 = m%3;
    lop3 = (m - lop4*4)/3;

    if (lop3 >= 0){
        cout << "���-�� ��������� � 3-�� ���������: " << lop3 << endl;
        cout << "���-�� ��������� � 4-�� ���������: " << lop4 << endl;
    }
    else cout << "���������� ���������� ��������" << endl;
}

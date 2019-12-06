#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    int m = 0;
    int n = 0;
    int i = 0;
    int j = 0;
    int sum_row = 0;
    int sum = 0;


    cout << "¬ведите N, M: ";
    cin >> n >> m;
    cout << endl;

    for (i = 1; i <= n; i++){
        sum_row += i;
    }

    for (i = 1; i <= m; i++){
        sum += sum_row*i;
    }

    cout << sum << endl;
}

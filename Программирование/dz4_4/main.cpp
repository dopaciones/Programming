#include <iostream>

using namespace std;

int main()
{
    int m = 13;
    int n = 26;

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if((i<=6)&&(j<=8)){
                cout << "*";
            }
            else {
                cout << "_";
            }
        }
        cout << endl;
    }
}

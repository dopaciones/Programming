#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int c = 0;
    int m = 0;
    int i = 0;
    int choose = 0;
    int j = 0;

    srand(time(NULL));

    cout << "Choose option (1 or 2)" << endl;
    cin >> choose;
    if (choose == 1){
        c = 64;
        m = 37;
        i = 3;
    }
    else {
        c = 65537;
        m = 25173;
        i = 13849;
    }

    int *arr = new int[i-1];

    for (j = 0; j <= i; j++){
        arr[j] = 0;
    }

    arr[0] = rand();

    for (j = 1; j <= i; j++){
        arr[j] = (arr[j-1]*m + j)%c;
        cout << arr[j] << endl;
    }
}

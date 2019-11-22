#include <iostream>

using namespace std;

int main()
{
    const int row1 = 2;
    const int col1 = 3;
    const int row2 = 3;
    const int col2 = 1;
    const int row3 = 2;
    const int col3 = 1;

    int** a;
    float** b;
    float** c;

    int i = 0;
    int j = 0;
    int k = 0;

    a = new int*[row1];
    for (i = 0; i <= row1; i++){
        a[i] = new int[col1];
        for (j = 0; j <= col1; j++){
            a[i][j] = 0;
            cin >> a[i][j];
        }
    }

    cout << endl;

    b = new float*[row2];
    for (i = 0; i <= row2; i++){
        b[i] = new float[col2];
        for (j = 0; j <= col2; j++){
            b[i][j] = 0;
            cin >> b[i][j];
        }
    }

    cout << endl;

    c = new float*[row3];
    for (i = 0; i <= row3; i++){
        c[i] = new float[row3];
        for (j = 0; j <= col3; j++){
            c[i][j] = 0;
            for (k = 0; k <= col1; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (i = 0; i <= row3; i++){
        for (j = 0; j <= col3; j++){
            cout.width(5);
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    //ответить на вопросы
}

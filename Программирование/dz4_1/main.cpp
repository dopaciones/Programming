#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n = 0;
    int sum = 0;

    ofstream fin;
    fin.open("sum.txt");
    for (int i = 0; i < 10; i++){
        cin >> n;
        fin << n << endl;
    }
    fin.close();

    ifstream fout;
    fout.open("sum.txt");
    for (int i = 0; i < 10; i++){
        fout >> n;
        cout << "." << n << endl;
        sum += n;
    }
    cout << "Sum = " << sum;
    fout.close();

    return 0;
}

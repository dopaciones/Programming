#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

int main()
{
    string nums;
    char ch;

    ifstream fout;
    fout.open("123.txt");
    while (fout.get(ch)){
        if (isdigit(ch)){
            nums += ch;
        }
    }
    cout << nums << endl;
    fout.close();

    return 0;
}

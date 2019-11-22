#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

int main()
{
    string s;
    ofstream fin;
    fin.open("123.txt");
    while (s != "!"){
        getline(cin,s);
        fin << s << endl;
    }
    fin.close();

    ifstream fout;
    fout.open("123.txt");
    while (!fout.eof()){
        getline(fout,s);
        cout << s << endl;
    }
    fout.close();

    return 0;
}

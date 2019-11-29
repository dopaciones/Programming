#include <iostream>
#include <math.h>

using namespace std;


bool func(int a){
    bool x = true;
    for (int j = 2; j <= trunc(sqrt(a)); j++){
        if (a%j == 0){
            x = false;
        }
    }
    if (x == true){
        cout << a << " ";
    }
    return x;
}

int main()
{
    int n = 0;
    int i = 0;
    cout << "Input highest border" << endl;
    cin >> n;
    for (i = 2; i < n; i++){
        func(i);
    }
}

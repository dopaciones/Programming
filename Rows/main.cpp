#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int factorial(int n){
    int fact = 1;
    int i = 0;

    for (i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}

int main()
{
    const double e = pow(10,-6);

    int k = 0;
    double x = 0.0;
    double res = 0.0;
    double sum = 0.0;

    cout << "Input x: ";
    cin >> x;
    cout << endl;

    res = x;
    sum = x;

    for (k = 1; abs(res) > e; k++){
        res = factorial(k)/(pow(3,k)*(3*k+2));
        sum += res;
    }

    cout << setprecision(8) << sum << endl;
}

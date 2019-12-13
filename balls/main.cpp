#include <iostream>

using namespace std;

int arr[100];
int N;
int m = 0;

void Swap(int a,int b)
{
    int t = arr[a];
    arr[a]= arr[b];
    arr[b] = t;
}

void Generate(int k)
{
    if (k == N) {
        for(int i = 0; i < N; i++) {
            if (arr[i]==i+1){
                m++;
                i = N;
            }
        }
    }
    else {
        for(int j = k; j < N; j++) {
            Swap(k,j);
            Generate(k+1);
            Swap(k,j);
        }
    }
}

int main(){

    setlocale (LC_ALL, "RUS");

    cout << "¬ведите N: ";
    cin >> N;

    for(int i = 0; i < N; i++){
        arr[i] = i+1;
    }
    Generate(0);

    cout << m;

    return 0;
}

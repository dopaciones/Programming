#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    int coupe[9];
    int i = 0;
    int n = 0;
    int place = 0;
    int amount = 0;
    int max = -1;

    for (i = 0; i < 9; i++){
        coupe[i] = 0;
    }

    cout << "Введите количество свободных мест: ";
    cin >> n;
    cout << endl;
    cout << "Введите номера свободных мест: " << endl;

    for (i = 0; i < n; i++){
        cin >> place;
        if (((place>=1)&&(place<=4))||(place==53)||(place==54)){
            coupe[0]++;
        }
        if (((place>=5)&&(place<=8))||(place==51)||(place==52)){
            coupe[1]++;
        }
        if (((place>=9)&&(place<=12))||(place==49)||(place==50)){
            coupe[2]++;
        }
        if (((place>=13)&&(place<=16))||(place==47)||(place==48)){
            coupe[3]++;
        }
        if (((place>=17)&&(place<=20))||(place==45)||(place==46)){
            coupe[4]++;
        }
        if (((place>=21)&&(place<=24))||(place==43)||(place==44)){
            coupe[5]++;
        }
        if (((place>=25)&&(place<=28))||(place==41)||(place==42)){
            coupe[6]++;
        }
        if (((place>=29)&&(place<=32))||(place==39)||(place==40)){
            coupe[7]++;
        }
        if (((place>=33)&&(place<=36))||(place==37)||(place==38)){
            coupe[8]++;
        }
    }

    for (i = 0; i < n; i++){
        if (coupe[i] == 6){
            amount++;
            if (amount > max){
                max = amount;
            }
            else {
                amount = 0;
            }
        }
    }

    cout << "Количество свободных купе: " << amount << endl;
}

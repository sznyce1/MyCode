

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a;
    while (cin.good() == false) {
        cin.clear();
        cin.ignore(999999, '\n');
        cout << "blad wejscia" << endl;
        cin >> a;
    }
    cin >> b;
    while (cin.good() == false) {
        cin.clear();
        cin.ignore(999999, '\n');
        cout << "blad wejscia" << endl;
        cin >> b;
    }

   

    if (a == b) {
        cout << "najwiekszy wspolny dzielnik to: " << a << endl;
    }
    if(a<b){
    for (int i = a; i > 0; i--) {
        if (a % i == 0 && b % i == 0) {
            cout << "najwiekszy wspolny dzielnik to: " << i << endl;
            break;
        }
        }
    }
    else {
        for (int i = b; i > 0; i--) {
            if (a % i == 0 && b % i == 0) {
                cout << "najwiekszy wspololny dzielnik to: " << i << endl;
                break;
            }
        }
    }
}


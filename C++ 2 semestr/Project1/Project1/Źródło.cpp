#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout << "Hello World! :)" << endl;
    const int i = 10;
    const int j = 10;
    int tab[i][j];
    for (int y = 0; y < i; ++y) {
        for (int c = 0; c < j; ++c) {
            tab[y][c] = y * c;
            if (y * c < 10) {
                cout <<"  "<< tab[y][c] <<" ";
                }
            else
            cout << " " << tab[y][c] <<" ";
        }
        cout <<endl;
    }


    return 0;
}
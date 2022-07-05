
#include <math.h>
#include <iostream>


using namespace std;

bool test(int &s, int &i) {
    int w = 1;
    int l = 0;
    while (w != 0) {
        cin >> w;
        if (w == 0) {
            break;
        }

        l++;
        s += w;
        i *= w;
    }
    return l % 2 == 0;
}

int main()
{
    int q = 0, p = 1;
    cout << test(q, p) << " to odniesienie do parzystej ilosci liczb" << endl;
    cout << "Suma liczb: " << q << endl;
    cout << "Iloczyn liczb: " << p << endl;
    return 0;
}



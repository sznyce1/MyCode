

#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i <= 100; i++) {
        if (i % 4 == 0) {

            if (i % 8 == 0 || i % 10 == 0) {
                continue;
            }

            else {
                cout << i << endl;

            }
        }
    }

   
    return 0;
}


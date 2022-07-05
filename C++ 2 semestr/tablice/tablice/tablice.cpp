
#include <iostream>

using namespace std;

int main()
{
    
    unsigned long long int* tab = new unsigned long long int[100];
    long long int b = 1, a = 0;
    for (long long int i = 0; i < 100; i++) {

        b = b + a;
        a = b - a;
        for (int j = 0; j < 100; j++) {
            tab[j] = a;
            
        }
        cout << tab[i] << endl;
       
    }
    delete[] tab;
    return 0;
}

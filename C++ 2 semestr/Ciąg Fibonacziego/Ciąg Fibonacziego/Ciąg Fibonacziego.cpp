

#include <iostream>

using namespace std;
int fib(int l);

int main()
{
    int l;
    cin >> l;    
    cout << fib(l) <<endl;
}

int fib(int l) {
    long long int b = 1, a = 0;
    for (long long int i = 0; i < l; i++) {

        b = b + a;
        a = b - a;

    }
    return a;
}





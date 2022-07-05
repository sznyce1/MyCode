// lokata.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

using namespace std;
int main()
{
    
    float z = 12000;
    float l = 1;
    while (z < 200000) {
        z = (z * 1.05) + 12000;
        l++;
    }
    cout << l;
}



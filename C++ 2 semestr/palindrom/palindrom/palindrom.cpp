#include <string>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    string t;
    int r = 1;
    getline(cin, t);
    for (int i = 0, j= t.length()-1; i < t.length()-1; i++, j--) {       
            if (t[i] == t[j]) {
                r++;
            }       
    }
    if (r == t.length()) {
        cout << "jest palindromem";
    }else{
        cout << "nie jest palindromem";
    }   
    return 0;
}


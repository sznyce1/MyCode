#include <iostream>
#include <string>

using namespace std;

int main()
{
    string n;
    getline(cin, n);
    
    for (int i = 0; i < n.length(); i++) {
        if (islower(n[i])) {
            n[i] = toupper(n[i]);
        }
        else
            n[i] = tolower(n[i]);

    }
    cout << n;
    
    return 0;
}

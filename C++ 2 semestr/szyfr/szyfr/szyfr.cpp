#include <string>
#include <cstring>
#include <iostream>

using namespace std;

string G(string a);
string K(string a);
string P(string a);
string M(string a);

int main()
{
    string s;        
    char t;   
    //getline(cin, s);
    cout << "podej typ kodu" <<endl;  
    cout << "g   -   GA-DE-RY-PO-LU-KI" << endl;
    cout << "k   -   KO-NI-EC-MA-TU-RY" << endl;
    cout << "p   -   PO-LI-TY-KA-RE-NU" << endl;
    cout << "m   -   MA-LI-NO-WE-BU-TY" << endl;
    cin >> t;
    while (cin.good() == 0 ||( t != 'g' && t != 'k' && t != 'p' && t != 'm')) {
        cin.clear();
        cin.ignore(99999, '\n');
        cout << "blad sprobuj ponownie" << endl;
        cin >> t;
    }
    cout << "podej tekst zrodlowy" << endl;
      
    cin.ignore();
    getline(cin, s);
    
    switch (t) {

    case 'g':        
        cout << G(s) << endl;
        break;
    case 'k':       
        cout << K(s) << endl;
        break;
    case 'p':        
        cout << P(s) << endl;
        break;
    case 'm':       
        cout << M(s) << endl;
        break;
        
    }
    
    return 0;
}
string K(string a) {
    for (int i = 0; i < a.length(); i++) {
        switch(a[i]) {

        case 'K':
            a[i] = 'O';
            break;
        case 'k':
            a[i] = 'o';
            break;
        case 'O':
            a[i] = 'K';
            break;
        case 'o':
            a[i] = 'k';
            break;
        case 'N':
            a[i] = 'I';
            break;
        case 'n':
            a[i] = 'i';
            break;
        case 'I':
            a[i] = 'N';
            break;
        case 'i':
            a[i] = 'n';
            break;
        case 'E':
            a[i] = 'C';
            break;
        case 'e':
            a[i] = 'c';
            break;
        case 'C':
            a[i] = 'E';
            break;
        case 'c':
            a[i] = 'e';
            break;
        case 'M':
            a[i] = 'A';
            break;
        case 'm':
            a[i] = 'a';
            break;
        case 'A':
            a[i] = 'M';
            break;
        case 'a':
            a[i] = 'm';
            break;
        case 'T':
            a[i] = 'U';
            break;
        case 't':
            a[i] = 'u';
            break;
        case 'U':
            a[i] = 'T';
            break;
        case 'u':
            a[i] = 't';
            break;
        case 'R':
            a[i] = 'Y';
            break;
        case 'r':
            a[i] = 'y';
            break;
        case 'Y':
            a[i] = 'R';
            break;
        case 'y':
            a[i] = 'r';
            
        }
    }
    
    return a;
}
string G(string a) {
    for (int i = 0; i < a.length(); i++) {
        switch(a[i]) {

        case 'G':
            a[i] = 'A';
            break;
        case 'g':
            a[i] = 'a';
            break;
        case 'A':
            a[i] = 'G';
            break;
        case 'a':
            a[i] = 'g';
            break;
        case 'D':
            a[i] = 'E';
            break;
        case 'd':
            a[i] = 'e';
            break;
        case 'E':
            a[i] = 'D';
            break;
        case 'e':
            a[i] = 'd';
            break;
        case 'R':
            a[i] = 'Y';
            break;
        case 'r':
            a[i] = 'y';
            break;
        case 'Y':
            a[i] = 'R';
            break;
        case 'y':
            a[i] = 'r';
            break;
        case 'P':
            a[i] = 'O';
            break;
        case 'p':
            a[i] = 'o';
            break;
        case 'O':
            a[i] = 'P';
            break;
        case 'o':
            a[i] = 'p';
            break;
        case 'L':
            a[i] = 'U';
            break;
        case 'l':
            a[i] = 'u';
            break;
        case 'U':
            a[i] = 'L';
            break;
        case 'u':
            a[i] = 'l';
            break;
        case 'K':
            a[i] = 'I';
            break;
        case 'k':
            a[i] = 'i';
            break;
        case 'I':
            a[i] = 'K';
            break;
        case 'i':
            a[i] = 'k';
            
        }
    }
    
    return a;
}
string P(string a) {
    for (int i = 0; i < a.length(); i++) {
        switch (a[i]) {
            
        case 'P':
            a[i] = 'O';
            break;
        case 'p':
            a[i] = 'o';
            break;
        case 'O':
            a[i] = 'P';
            break;
        case 'o':
            a[i] = 'p';
            break;
        case 'L':
            a[i] = 'I';
            break;
        case 'l':
            a[i] = 'i';
            break;
        case 'I':
            a[i] = 'L';
            break;
        case 'i':
            a[i] = 'l';
            break;
        case 'T':
            a[i] = 'Y';
            break;
        case 't':
            a[i] = 'y';
            break;
        case 'Y':
            a[i] = 'T';
            break;
        case 'y':
            a[i] = 't';
            break;
        case 'K':
            a[i] = 'A';
            break;
        case 'k':
            a[i] = 'a';
            break;
        case 'A':
            a[i] = 'K';
            break;
        case 'a':
            a[i] = 'k';
            break;
        case 'R':
            a[i] = 'E';
            break;
        case 'r':
            a[i] = 'e';
            break;
        case 'E':
            a[i] = 'R';
            break;
        case 'e':
            a[i] = 'r';
            break;
        case 'N':
            a[i] = 'U';
            break;
        case 'n':
            a[i] = 'u';
            break;
        case 'U':
            a[i] = 'N';
            break;
        case 'u':
            a[i] = 'n';
            
        }
    }
   
    return a;
}
string M(string a) {
    for (int i = 0; i < a.length(); i++) {
        switch (a[i]) {

        case 'M':
            a[i] = 'A';
            break;
        case 'm':
            a[i] = 'a';
            break;
        case 'A':
            a[i] = 'M';
            break;
        case 'a':
            a[i] = 'm';
            break;
        case 'L':
            a[i] = 'I';
            break;
        case 'l':
            a[i] = 'i';
            break;
        case 'I':
            a[i] = 'L';
            break;
        case 'i':
            a[i] = 'l';
            break;
        case 'N':
            a[i] = 'O';
            break;
        case 'n':
            a[i] = 'o';
            break;
        case 'O':
            a[i] = 'N';
            break;
        case 'o':
            a[i] = 'n';
            break;
        case 'W':
            a[i] = 'E';
            break;
        case 'w':
            a[i] = 'e';
            break;
        case 'E':
            a[i] = 'W';
            break;
        case 'e':
            a[i] = 'w';
            break;
        case 'B':
            a[i] = 'U';
            break;
        case 'b':
            a[i] = 'u';
            break;
        case 'U':
            a[i] = 'B';
            break;
        case 'u':
            a[i] = 'b';
            break;
        case 'T':
            a[i] = 'Y';
            break;
        case 't':
            a[i] = 'y';
            break;
        case 'Y':
            a[i] = 'T';
            break;
        case 'y':
            a[i] = 't';
            
        }
    }
    
    return a;
}


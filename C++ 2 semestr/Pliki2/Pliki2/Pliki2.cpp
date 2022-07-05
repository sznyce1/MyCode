#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    int min = 111111;
    int max = 0;
    int p = 0, n = 0, c=0;
    bool t = false;
    int r = 1;
    string linia , smin , smax;
    ifstream plik;
    ofstream plik1;
    plik.open("hasla.txt");
    plik1.open("odpowiedzi1.txt", ofstream::app);
    plik1 << "3) suma dwoch kolejnych znaków = 220" << endl;
    do {
        plik >> linia;
        
        for (int i = 0; i + 1 <= linia.length(); i++) {

            if (int(linia[i]) + int(linia[i + 1]) == 220) {
                plik1 << linia << endl;
                break;
            }

        }
    } while (!plik.eof());
    plik.close();
    plik1 << "2) palindromy" << endl;
    plik.open("hasla.txt");
    do {
        plik >> linia; 
               
        for (int i = 0, j = linia.length()-1; i < linia.length()-1; i++, j--) {
            if (linia[i] == linia[j]) {
                r++;
            }
        }
        if (r == linia.length()) {
            plik1 << linia << endl;
            
        }

        if (linia.length() % 2 == 0) {
            p++;
        }
        else {
            n++;
        }

        if (linia.length()<=min) {
            min = linia.length();
            smin = linia;
        }
        else if(linia.length()>=max){
            max = linia.length();
            smax = linia;
        }
        r = 1;
    } while (!plik.eof());
    plik.close();
    
    plik1 << "4) najkrótsze i najdłuższe hasło: " << smin << " " << smax << endl << "1)"<< endl<<"a. przysta liczba znakow: " << p << endl << "b. nieparzysta liczba znakow: " << n;


    return 0;

}

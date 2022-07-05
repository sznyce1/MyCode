#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    double s = 0;
    double c = 0;
    double min = 111111;
    double max = 0;
    double t[8];
    int n = 1 , m = 0;
    string linia;
    ifstream plik;
    plik.open("tekst.txt");
    do {
        plik >> linia;
        
        if (n %3 == 0) {
            c = stod(linia);
            s += c;            
            cout << s << endl;  
            if (c >= max) {
                max = c;
            }
            else if (c <= min) {
                min = c;
            }
            t[m] = c;
            m++;
        } 
        n++;

    } while (!plik.eof());
    plik.close();
    s /= (n/3);
    cout << s << endl;
    cout << min << endl;
    cout << max << endl;
    for (int i = 0; i <= 7; i++) {
        t[i]= (t[i] - min) / (max - min);
        cout << t[i] << endl;
    }



    ofstream plik1;
    plik1.open("tekst1.txt" , ofstream::app );
    plik.open("tekst.txt");
    n = 1;
    m = 0;
    do {
        
        if (n % 3 == 0) {
            plik1 << t[m] <<"\n";
            cout << t[m]<<endl;
            m++;
            plik >> linia;
            
         
        }
        else {
            plik >> linia;
            plik1 << linia <<"\t";
            cout << linia << " ";
        }
        n++;

    } while (!plik.eof());
    plik.close();
    plik1.close();
    
    
    return 0; //Wszystko jest w jednym pliku gdyż przy podziale na osobne nawraca wyjątek który pokazywałem na laboratorium.
    
}


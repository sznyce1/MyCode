#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include "Kasa.h"
#include "Gra.h"
#include "Bandyta.h"
#include "Ruletka.h"
#include "Gracz.h"
#include "oczko.h"
#include <conio.h>

using namespace std;


void zapisz(string gr, int wyn);
void sort(string* im, string* wy,int n);
int graj(Gra* x);

int main()
{
    //init
        srand(time(NULL));
        int c = 0;
        c =  rand() % 150+50;
        Kasa* k = new Kasa(c);       
        char g;
        Bandyta* b = new Bandyta();
        Ruletka* r = new Ruletka();
        Gracz* plejer = new Gracz();
        oczko* oko = new oczko();
    //interfejs
        cout << "Podaj swoje imie:" ;
        string imie;
        getline(cin, imie);
        plejer->setNazwa(imie);
        system("cls");
    do {
        cout << " Witaj w kasynie " << plejer->getNazwa() << "!" << endl;
        cout << " Masz " << k->getKasa() << " zetonow!" << endl;
        cout << " Ktora gre wybierasz?" << endl;
        cout << " 1. Black Jack \n 2. Jednoreki bandyta \n 3. Ruletka \n 4. Wyjdz" << endl;          
        cin >> g;
        while (g != '1' && g != '2' && g != '3' && g != '4') {
            cin.clear();
            cin.ignore(999, '\n');
            cout << "Blad wejscia ponow probe wyboru gry!" << endl;
            cin >> g;
        }
        system("cls");
        switch (g) {
        case '1':
            char e;
            do {

            
                cout << "Masz " << k->getKasa() << " zetonow!" << endl;
                cout << "Ile stawiasz?" << endl;
                int zaklad;
                cin >> zaklad;
                while (cin.good() == false || k->getKasa() < zaklad || zaklad < 1) {
                    cin.clear();
                    cin.ignore(999, '\n');
                    cout << "Blad wjscia! Sprobuj ponownie!" << endl;
                    cin >> zaklad;
                }            
                system("cls");
                k->Kasazmien(-zaklad);
                oko->setz(zaklad);
                k->Kasazmien(graj(oko));
                cout << "Graj dalej 'g' wyjdz 'w'" << endl;
                cin >> e;
                system("cls");
            } while (k->getKasa() > 0 && e != 'w');
            break;
        case '2':
            char w;
            do{
                cout << "Masz " << k->getKasa() << " zetonow!" << endl;           
                cout << "Ile stawiasz?" << endl;           
                int zaklad;                
                cin >> zaklad;
                while (cin.good() == false || k->getKasa()<zaklad || zaklad<1 ) {
                    cin.clear();
                    cin.ignore(999, '\n');
                    cout << "Blad wjscia! Sprobuj ponownie!" << endl;                   
                    cin >> zaklad;
                }
                system("cls");
                k->Kasazmien(-zaklad);
                b->setz(zaklad);
                zaklad = graj(b);
                k->Kasazmien(zaklad);                   
                cout << "Graj dalej 'g' wyjdz 'w'" << endl;           
                cin >> w;
                system("cls");
            } while (k->getKasa() > 0 && w != 'w');
            break;
        case '3':
            char q;
            do {
                cout << "Masz " << k->getKasa() << " zetonow!" << endl;
                cout << "Ile stawiasz?" << endl;
                int zaklad;
                cin >> zaklad;
                while (cin.good() == false || zaklad > k->getKasa() || zaklad < 1) {
                    cin.clear();
                    cin.ignore(999, '\n');                   
                    cout << "Blad wjscia! Sprobuj ponownie!" << endl;
                    cin >> zaklad;
                }
                k->Kasazmien(-zaklad);
                r->setz(zaklad);
                system("cls");
                cout << "na jaki kolor? || b - czarny r - czerwony g - zielony" << endl;
                char p;
                cin >> p;
                while (p != 'b' && p != 'r' && p != 'g') {
                    cin.clear();
                    cin.ignore(999, '\n');
                    cout << "nie ma takiego koloru! sprobuj ponownie!" << endl;
                    cin >> p;
                }
                r->setp(p);
                system("cls");
                k->Kasazmien(graj(r));
                cout << "Graj dalej 'g' wyjdz 'w'" << endl;
                cin >> q;
                system("cls");
            } while (k->getKasa() > 0 && q != 'w');            
            break;
        }             
        if (k->getKasa() <= 0) {         
            g = '4';
            cout << "Skonczyly ci sie zetony!" << endl;
        }
    } while (g != '4');
    cout << "Koniec gry!" << endl;
    //zapis
    zapisz(plejer->getNazwa(), k->getKasa());
    //deinicjalizacja
    delete r;
    delete k;
    delete b;
    delete plejer;
    delete oko;
    
return 0;
}

int graj(Gra* x) {
    return x->Graj();
}

void zapisz(string gr, int wyn) {
    remove("ranking.txt");
    ifstream plik;
    ofstream plik1;

    plik.open("bufor.txt");
    plik1.open("bufor.txt", ofstream::app);
    plik1 << gr << "\t"  << wyn << endl;
    plik1.close();

    string g;
    string wynik ; 
    int rozmiar = 100;    
    rozmiar:
    rozmiar += 50;
    
    string* w = new string[rozmiar];
    string* w1 = new string[rozmiar];
    int i=0;
    do{
    getline(plik, g , '\t');  
    getline(plik, wynik);   
    w[i] = g;
    w1[i] = wynik;
    if (i > rozmiar) {
        delete[] w;
        delete[] w1;
        goto rozmiar;
    }
    i++;

    } while (!plik.eof());
    plik.close();

    sort(w, w1,i);

    plik1.open("ranking.txt", ofstream::app);    
    
    int numer = 1;
    for (int j = 0; j <= i; j++) {
        if (j == 100) {
            break;
        }
        if (w[j].empty()) {
            goto skip;
        }              
        if (w[j] == w[j - 1] && w1[j] == w1[j - 1]) {
            goto skip;
        }
        plik1 << numer++ << '.' << w[j] << '\t' << w1[j] <<endl;
    skip:
        cout << "";
    }
    plik1.close();
    delete[] w;
    delete[] w1;
}
void sort(string* im, string* wy , int n) {   
    for (int i = 1; i < n; i++)
    {
        for (int j = n - 1; j >= 1; j--)
        {
            if (stoi(wy[j]) > stoi(wy[j - 1]))
            {
                string bufor , bufor1;
                bufor = wy[j - 1];
                bufor1 = im[j - 1];
                wy[j - 1] = wy[j];
                im[j - 1] = im[j];
                wy[j] = bufor;
                im[j] = bufor1;
                
            }            
        }
    }

}


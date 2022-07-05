#include "oczko.h"


using namespace std;

void oczko::setz(int z)
{
	oczko::z = z;
}

int oczko::getz()
{
	return oczko::z;
}
int oczko::Graj() {
	int liczba = 0;
	int liczbak = 0;
	int c = 0;

	string* karty = new string[10];
	string* kartyk = new string[10];
	while(c!=2){
	cout << "krupier rozdaje karty";
	karty[c] = oczko::losuj();
	kartyk[c] = oczko::losuj();
	liczba += oczko::wartosc(karty[c]);
	liczbak += oczko::wartosc(kartyk[c]);
	c++;
	system("cls");
	}
	cout << "twoje karty to: " << karty[0] << " " << karty[1] << endl;
	cout << "karty krupiera to: " << kartyk[0] << " jedna jest zakryta " << endl;
	int akcja;
	do {
		robienie:
		cout << "Co robisz? \n 1-hit \n 2-pas " << endl;
		cin >> akcja;
		while (cin.good() == false || akcja != 1 && akcja != 2) {
			cin.clear();
			cin.ignore(999, '\n');
			cout << "Blad wjscia! Sprobuj ponownie!" << endl;
			cin >> akcja;
		}
		switch(akcja) {
			case 1:
				system("cls");
				cout << "Krupier daje ci karte..."<<endl;
				karty[c] = oczko::losuj();
				liczba += oczko::wartosc(karty[c]);				
				c++;
				system("cls");
				cout << "twoje karty to: ";
				for (int i = 0; i < c; i++) {					
					cout << karty[i] << " ";
									}
				if (liczba > 21) {
					cout << "przegrales! masz wiecej niz 21 punktow " << endl;
					return 0;
				}
				goto robienie;
				cout << "";
			case 2:
				break;
		}
		if (liczbak < 17) {			
			cout << "krupier dobiera " << endl;
			kartyk[c] = oczko::losuj();
			liczbak += oczko::wartosc(kartyk[c]);
			c++;
			cout << "Karty krupier to: ";
			for (int i = 1; i < c; i++) {
				cout << kartyk[i] << " ";
			}
			cout << " jedna jest zakryta " << endl;
		}
			
			if (liczbak > 17 && liczbak < 22) {
				cout << "krupier pasuje!" << endl;

			}
			if (liczba == liczbak) {
				cout << "remis! macie tyle smo punktow" << endl;
				return oczko::getz();
			}
			if (karty[0] == "AS" && karty[1] == "AS") {
				cout << "perskie oczko, wygrales! " << endl;
				return oczko::getz() * 2;
			}
			if (kartyk[0] == "AS" && kartyk[1] == "AS") {
				cout << "perskie oczko, krupier wygrywa! " << endl;
				return 0;
			}
			if (liczbak == 21) {
				cout << "krupier wygral! ma 21 punktow " << endl;
				return 0;
			}
			if (liczbak > 21) {
				cout << "krupier przegral! ma wiecej niz 21 punktow "<<endl;
				return oczko::getz() * 2;
			}			
			if (liczba == 21) {
				cout << "wygrales! masz 21 punktow "<<endl;
				return oczko::getz() * 2;
			}
			if (liczba > liczbak) {
				cout << "wygrales! masz wiecej punktow od krupiera "<<endl;
				return oczko::getz() * 2;
			}
			if (liczba < liczbak) {
				cout << "przegrales! krupier ma wiecej punktow"<<endl;
				return 0;
			}
			
			
			
			
	} while (liczba < 21&& liczbak < 21);

	delete[] karty;
	delete[] kartyk;
	return 0;
}

string oczko::losuj()
{
	srand(time(NULL));
	int karta = rand() % 13 + 1;
	Sleep(rand()%1500+500);
	switch(karta) {
	case 1:
		return "AS";
		break;
	case 2:
		return "2";
		break;
	case 3:
		return "3";
		break;
	case 4:
		return "4";
		break;
	case 5:
		return "5";
		break;
	case 6:
		return "6";
		break;
	case 7:
		return "7";
		break;
	case 8:
		return "8";
		break;
	case 9:
		return "9";
		break;
	case 10:
		return "10";
		break;
	case 11:
		return "Krol";
		break;
	case 12:
		return "Dama";
		break;
	case 13:
		return "Walet";
		break;
	case 14:
		return "AS";
		break;

	}	
}
int oczko::wartosc(string karta) {
	if (karta == "Krol" || karta == "Dama" || karta == "Walet" || karta == "10") {
		return 10;
	}
	if (karta == "AS" ) {
		return 11;
	}
	if (karta == "2") {
		return 2;
	}
	if (karta == "3") {
		return 3;
	}
	if (karta == "4") {
		return 4;
	}
	if (karta == "5") {
		return 5;
	}
	if (karta == "6") {
		return 6;
	}
	if (karta == "7") {
		return 7;
	}
	if (karta == "8") {
		return 8;
	}
	if (karta == "9") {
		return 9;
	}

}

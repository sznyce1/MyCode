

#include <iostream>

using namespace std;
int main()
{
   cout << "silnia :\n";
   int s , c=1;
   cin >> s;
   while (cin.good() == false || s < 0) {
       cin.clear();
       cin.ignore(999999, '\n');
       cout << "blad wejscia" << endl;
       cin >> s;
   }
   
   for (int i = s; i > 0; i--) {
	   c *= i;
   }
   cout << c;
   
}



#include <math.h>
#include <iostream>

using namespace std;

int main()
{
    int zasiegb=15, zasiegs=3 , c=0;
    cout << "Podaj liczbe dziesietna" << endl;
    int l;
    cin >> l;
    int* b = new int[zasiegb];
    int* s = new int[zasiegs];
    int a = l;
       for(int i = zasiegb; i >= 0 ;i--){
           b[i] = l % 2;
           l = l / 2;
       }
       for (int i = 0; i <= zasiegb; i++) {
           cout << b[i];
       }
       cout << endl;
       for (int i = 0; a != 0; i++) {
           s[i] = a % 16;
           a = a / 16;
        
       }
       for (int i = zasiegs; i >= 0; i--) {
           
          if (s[i] == 15) {
               cout << "F";
           }else
           if (s[i] == 14) {
               cout << "E";
           }else
           if (s[i] == 13) {
               cout << "D";
           }else
           if (s[i] == 12) {
               cout << "C";
           }else
           if (s[i] == 11) {
               cout << "B";
           }else
           if (s[i] == 10) {
               cout << "A";
           }else
           if (s[i] > 0 && s[i] < 10) {
                   cout << s[i];
           }else
           if (s[i] <= 0 || s[i] > 16) {
                   cout << 0;
           }
           
       }
    
       
       
        
    return 0; 
}


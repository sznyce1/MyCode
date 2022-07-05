

#include <iostream>

using namespace std; 

int main(){

int i=4 , min= 99999 , max=-99999 ;

while (i != 0) {
    cin >> i;
    if (i == 0) {     
        break;
    }
    if (i >= max) {
        max = i;
    }
    else if (i < min) {
        min = i;
    }
}
cout << "min:  " << min << "  max:  " << max << endl;

return 0;
}


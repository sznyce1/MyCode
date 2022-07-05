

#include <iostream>

using namespace std;


int main()
{
    
    int* l = new int[256];    
    for (int i = 0; i < 256; i++) {
        l[i] = i;        
    }
    for (int i = 0; i < 256; i++) {
       cout << l[i] <<" "<<(char)l[i] << endl;       
    }
    delete[] l;   
    return 0;    
}


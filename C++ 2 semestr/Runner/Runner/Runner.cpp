#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <conio.h>

class Runner {
public:
    int x;
    int y;
    char znak;

    void show();
    void hide();
    void up();
    void down();
    void left();
    void right();

};


using namespace std;

int main()
{
    Runner r;
    r.x = 25;
    r.y = 25;
    r.znak = '*';
    cout << "Hello World!\n";
    return 0;
    
}
void Runner::show(){
    writeCharXY(x, y, znak);
}
void Runner::hide(){
    writeCharXY(x, y, ' ');
}
void Runner::up(){
    hide();
    if (y > 1)
        --y;
    show();
}
void Runner::down() {
    hide();
    if (y < 24)
        ++y;
    show();
}
void Runner::left() {
    hide();
    if (x > 1)
        --x;
    show();
}
void Runner::right() {
    hide();
    if (x < 80)
        ++x;
    show();
}
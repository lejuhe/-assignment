#include <iostream>
#include <conio.h>

int main() {
    while (true) {
        if (_kbhit() && _getch() == 27) {
            break;
        }
    }
    return 0;
}

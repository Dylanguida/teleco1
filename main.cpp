#include "libs/analog.h"
#include "libs/LCD.h"

int main(void) {
    LCD lcd(5, 4, 3, 2, 1, 0);
    while(1) {
        float temp = ((analogRead(0) * 0.00488) - (analogRead(1) * 0.00488)) * 100;
        lcd.clear();
        lcd.print(temp);
    }
    return 0;
}
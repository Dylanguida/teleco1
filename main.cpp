#include <math.h>
#include "libs/analog.h"
#include "libs/LCD.h"


int main(void) {

    const float B = 3.9E3;   // El beta de la formula, en grados Kelvin
    const float T0 = 298;    // T0 que es 25 °C pero lo ponemos en Kelvin
    const float R = 10E3;    // R(T0)
    LCD lcd(5, 4, 3, 2, 1, 0);
    while(1) {
        
        float temp = ((T0*B)/(T0*log10((((analogRead(0) * 0.00488)*10000)/(5-(analogRead(0) * 0.00488)))/R)+B)) - 273.15;
        lcd.clear();
        lcd.setXY(1,1);
        lcd.print("R: ");
        lcd.print(((analogRead(0) * 0.00488)*10000)/(5-(analogRead(0) * 0.00488)));
        lcd.setXY(1,2);
        lcd.print("T: ");
        lcd.print(temp);
        lcd.print(" C");

    }

    return 0;
}

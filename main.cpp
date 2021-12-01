#include "libs/analog.h"
#include "libs/LCD.h"
#include "libs/bmp180.h"

int main(void) {

    BMP180 bmp;                 // Inicializacion del sensor
    LCD lcd(2, 3, 4, 5, 6, 7);  // Inicializacion del display
    float presion = 0; 

    while(1) {
        uint8_t status = bmp.read();    // Hago una lectura completa y guardo el estado
        if (status == bmp.status_ok) {  // Si no hubo error en la lectura, prosigo
        if(digitalRead(8)){
            presion = bmp.getPressure(0);
            lcd.print(presion);
            lcd.clear();
        }

        if(digitalRead(9)){
            presion = bmp.getPressure(1);
            lcd.print(presion);
            lcd.clear();
        }

        if(digitalRead(10)){
            presion = bmp.getPressure(2);
            lcd.print(presion);
            lcd.clear();
        }

        if(digitalRead(11)){
            presion = bmp.getPressure(3);
            lcd.print(presion);
            lcd.clear();
        }

        if(digitalRead(12)){
            presion = bmp.getPressure(4);
            lcd.print(presion);
            lcd.clear();
        }

        if(digitalRead(13)){
            presion = bmp.getPressure(5);
            lcd.print(presion);
            lcd.clear();
        }

        if(digitalRead(14)){
            presion = bmp.getPressure(6);
            lcd.print(presion);
            lcd.clear();
        }

        if(digitalRead(15)){
            presion = bmp.getPressure(7);
            lcd.print(presion);
            lcd.clear();
            }
        }

    }
       return 0;
}


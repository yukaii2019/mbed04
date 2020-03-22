// uLCD-144-G2 basic text demo program for uLCD-4GL LCD driver library
//
#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2); // serial tx, serial rx, reset pin;

int main()
{
    // basic printf demo = 16 by 18 characters on screen
    uLCD.textbackground_color(WHITE);
    uLCD.background_color(0xFFFFFF);
    uLCD.printf("\nHello uLCD World\n"); //Default Green on black text
    uLCD.printf("\n  Starting Demo...");    
    wait(2);
    uLCD.cls();
    uLCD.locate(0,0);
    uLCD.color(BLUE);
    uLCD.printf("107033137");
    uLCD.text_width(4); //4X size text
    uLCD.text_height(4);
    uLCD.color(GREEN);
    for (int i=30; i>=0; --i) {
        uLCD.locate(1,2);
        uLCD.printf("%2D",i);
        wait(1);
    }
}

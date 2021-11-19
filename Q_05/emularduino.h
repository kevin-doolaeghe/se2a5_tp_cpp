#ifndef EMULARDUINO_H
#define EMULARDUINO_H

void initEmulArduino(int _idAppli);

void defIRQ(int num,void f(void));

void sleep();

int * getVar(int id);

#define PORTA (*(getVar(0)))
#define PINA (*(getVar(1)))
#define DDRA (*(getVar(2)))
#define PORTB (*(getVar(3)))
#define PINB (*(getVar(4)))
#define DDRB (*(getVar(5)))
#define PORTC (*(getVar(6)))
#define PINC (*(getVar(7)))
#define DDRC (*(getVar(8)))
#define PORTD (*(getVar(9)))
#define PIND (*(getVar(10)))
#define DDRD (*(getVar(11)))
#define EIMSK (*(getVar(12)))
#define EICRA (*(getVar(13)))
#define EICRB (*(getVar(14)))
#define WDTCSR (*(getVar(15)))
#define ADC (*(getVar(16)))

#define INT0 0
#define INT1 1
#define INT2 2
#define INT3 3
#define WDT 4

#define APPLI_1Bt_1LED 0
#define APPLI_2Bt_2LED 1
#define APPLI_Barriere 2
#define APPLI_7Seg_2Bt 3
#define APPLI_Four 4
#define APPLI_Analog_7Seg 5
#define APPLI_Analog_2x7Seg 6
#define APPLI_2Seg_4Bt_2Voyant 7

#endif // EMULARDUINO_H

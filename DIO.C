/*
 * File:   DIO.C
 * Author: DELL
 *
 * Created on April 11, 2020, 12:01 AM
 */


#include <xc.h>

void _setPIN(int pinNum) {
    PORTA |= (1 << pinNum);
}

void _resetPIN(int pinNum) {
    PORTA &= ~(1 << pinNum);
}
int isPressedA(int pinNum) {
    if (PINA & (1 << pinNum)) {
        return 1;
    } else {
        return 0;
    }
}
int isPressedB(int pinNum) {
    if (PINB & (1 << pinNum)) {
        return 1;
    } else {
        return 0;
    }
}
int isPressedC(int pinNum) {
    if (PINC & (1 << pinNum)) {
        return 1;
    } else {
        return 0;
    }
}
int isPressedD(int pinNum) {
    if (PIND & (1 << pinNum)) {
        return 1;
    } else {
        return 0;
    }
}
//setPIN(LED, portA);

void setPIN(int pinNum, char port) {

    switch (port) {

        case 1:
            PORTA |= (1 << pinNum);
            break;
        case 2:
            PORTB |= (1 << pinNum);
            break;
        case 3:
            PORTC |= (1 << pinNum);
            break;
        case 4:
            PORTD |= (1 << pinNum);
            break;
    }

}

void resetPIN(int pinNum, char port) {

    switch (port) {

        case 1:
            PORTA &= ~(1 << pinNum);
            break;
        case 2:
            PORTB &= ~(1 << pinNum);
            break;
        case 3:
            PORTC &= ~(1 << pinNum);
            break;
        case 4:
            PORTD &= ~(1 << pinNum);
            break;
    }

}

void setPINA(int pinNum) {
    PORTA |= (1 << pinNum);
}

void setPINB(int pinNum) {
    PORTB |= (1 << pinNum);
}

void setPINC(int pinNum) {
    PORTC |= (1 << pinNum);
}

void setPIND(int pinNum) {
    PORTD |= (1 << pinNum);
}
void resetPORT(char port) {

    switch (port) {

        case 1:
            PORTA =0x00;
            break;
        case 2:
            PORTB =0x00;
            break;
        case 3:
            PORTC =0x00;
            break;
        case 4:
            PORTD =0x00;
            break;
    }

}


void setPORT(char port) {

    switch (port) {

        case 1:
            PORTA =0xFF;
            break;
        case 2:
            PORTB =0xFF;
            break;
        case 3:
            PORTC =0xFF;
            break;
        case 4:
            PORTD =0xFF;
            break;
    }

}


void PIN_INPUT(int pinNum, char port) {

    switch (port) {

        case 1:
            DDRA &= ~(1 << pinNum);
            break;
        case 2:
            DDRB &= ~(1 << pinNum);
            break;
        case 3:
            DDRC &= ~(1 << pinNum);
            break;
        case 4:
            DDRD &= ~(1 << pinNum);
            break;
    }

}



void PIN_OUTPUT(int pinNum, char port) {

    switch (port) {

        case 1:
            DDRA |= (1 << pinNum);
            break;
        case 2:
            DDRB |= (1 << pinNum);
            break;
        case 3:
            DDRC |= (1 << pinNum);
            break;
        case 4:
            DDRD |= (1 << pinNum);
            break;
    }

}



void PORT_OUTPUT(char port) {

    switch (port) {

        case 1:
            DDRA =0xFF;
            break;
        case 2:
            DDRB =0xFF;
            break;
        case 3:
            DDRC =0xFF;
            break;
        case 4:
            DDRD =0xFF;
            break;
    }

}



void PORT_INPUT(char port) {

    switch (port) {

        case 1:
            DDRA =0x00;
            break;
        case 2:
            DDRB =0x00;
            break;
        case 3:
            DDRC =0x00;
            break;
        case 4:
            DDRD =0x00;
            break;
    }

}

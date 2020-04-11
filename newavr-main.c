

#include <avr/io.h>
#include "DIO.h"
#define  BUTTON         0
#define  LED            3

#define portA           1
#define portB           2
#define portC           3
#define portD           4

int main(void) {

    
    PIN_OUTPUT(3,portA);
    PIN_OUTPUT(2,portA);
    PIN_OUTPUT(2,portC);
    PIN_OUTPUT(7,portC);
    PIN_OUTPUT(LED,portD);
    
    PIN_INPUT(BUTTON,portB);
    PIN_INPUT(4,portB);
    PIN_INPUT(2,portD);
    
    
    while (1) {
        if (isPressedB(BUTTON)) { 
            setPIN(3, portA);
            setPIN(LED, portD);
        } else {
            resetPIN(3, portA);
            resetPIN(LED, portD);
        }
        
        
        
        
        
        if (isPressedB(4)) { 
            setPIN(2, portA);
            setPIN(2, portC);
        } else {
           resetPIN(2, portA);
            resetPIN(2, portC);
        }
        
       
        if (isPressedD(2)) { 
            
            setPIN(7, portC);
        } else {
       
            resetPIN(7, portC);
        }
    }
}

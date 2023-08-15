// 
//  Interfacing a Blinking LED using AVR Microcontroller.

#define F_CPU 16000000UL 
#include <avr/io.h> 
#include <util/delay.h> 
int main(void) 
{ 
 DDRC = 0xFF; // Set PORTC as an output 
 while(1) 
 { 
 PORTC = 0xFF; // Turn on the LED 
 _delay_ms(100); // Delay for 100 milliseconds 
 PORTC = 0x00; // Turn off the LED 
 _delay_ms(100); // Delay for 100 milliseconds 
 } 
}

// Interface a stepper motor and control it's direction using AVR Microcontrolle
#define F_CPU 16000000UL 
#include <avr/io.h> #include <util/delay.h> 
int main(void) 
{ 
unsigned int x=100; 
DDRA&=~(1<<1); 
PORTA=0x02; 
DDRA&=0xFF; while (1) 
{ 
if((PINA&(1<<1))==0) 
{ 
PORTD = 0x66; 
_delay_ms(x); 
PORTD = 0xCC; 
_delay_ms(x); 
PORTD = 0x99; 
_delay_ms(x); 
PORTD = 0x33; 
_delay_ms(x); 
} 
else 
{ 
PORTD = 0x66; 
_delay_ms(x); 
PORTD = 0x33; 
_delay_ms(x); 
PORTD = 0x99; 
_delay_ms(x); 
PORTD = 0xCC; 
_delay_ms(x); 
} 
} 
return 0; 
}

// : Interface a stepper motor and control its speed using Arduino
#include <Stepper.h>
#define STEPS 20
Stepper stepper(STEPS, 8, 9, 10, 
11); const int button = 12; void
setup()
{ stepper.setSpeed(30); 
pinMode(button, INPUT_PULLUP); 
} int direction = 1, speed = 
0; void loop() { 
if(digitalRead(button) == 0)
 { 
if(debounce())
 { direction *= 
-1; while
(debounce()); 
 } } 
stepper.step(direction); 
}
bool debounce()
{ byte count = 
0; 
 for(byte i =0; i < 5; i++)
 { 
if(digitalRead(button)==0) 
count++; delay(10); 
 } 
if(count>2) 
return 1; 
else 
return 0; 
}

// Interface a stepper motor and control it's direction using Arduin
#include <Stepper.h>
#define STEPS 20
Stepper stepper(STEPS, 8, 9, 10, 11); 
const int button = 12; void setup()
{ stepper.setSpeed(30); 
pinMode(button, INPUT_PULLUP); 
} int direction = 1, speed = 
0; void loop()
{ if(digitalRead(button) == 
0)
 { 
if(debounce())
 { direction *= 
-1; while
(debounce()); 
 } } 
stepper.step(direction); 
} bool
debounce()
{ byte count = 
0; 
 for(byte i =0; i < 5; i++)
 { 
if(digitalRead(button)==0) 
count++; delay(10); 
 } 
if(count>2) 
return 1; 
else 
return 0; 
}

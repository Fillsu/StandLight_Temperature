#include <iostream>
#include <wiringPi.h>
#include "Button.h"
#include "Led.h"
#include "Listener.h"
#include "Controler.h"
#include "View.h"
#include "LCD.h"
#include "Service.h"
#include "Clock_Check.h"
#include "Clock_Service.h"
#include "Clock_View.h"
#include "time.h"


int main()
{
std::cout << "Hellodddw Wddorld" <<std::endl;


Button Button1(27);
Button Button2(28);

Led led(21);
Led led2(22);
Led led3(23);
Led led4(24);
Led led5(25);
LCD lcd1(new I2C("/dev/i2c-1", 0x27));
led.Off();
led2.Off();
led3.Off();
led4.Off();
led5.Off();


View view1(&led,&led2,&led3,&led4,&led5);

Clock_View clkview1(&lcd1);
Clock_Check clkcheck1;

Clock_Service clkservice1(&clkview1);
Service service1(&view1);

Controler controler1(&service1,&clkservice1);
Listener listener(&Button1,&Button2,&controler1,&clkcheck1);

// time_t a;
// struct tm *b;
//     char buff[60];
    while(1)
    {  
        // time(NULL);
        // b=localtime(&a);
     
        // sprintf(buff,"%d %d %d ",b->tm_hour,b->tm_min,b->tm_sec);
        // lcd1.WriteStringXY(1,0,buff);

         listener.checkEvent();
         view1.lightView();
         delay(50);

    }

return 0;
}

#include "Listener.h"


Listener:: Listener(Button *modbutton,Button *powerbutton, Controler *led,Clock_Check *clk)
{
 ledButton=modbutton;
 powerButton=powerbutton;
 cont = led;
 clkcheck=clk;
}

Listener::~Listener()
{

}

void Listener::checkEvent()
{
        if(ledButton->getState()==RELEASE_ACTIVE)
    {
        
            cont->updateEvent("ledButton");

    }
    
    if(clkcheck->Is_Clock_update()==true)
    {
        
            cont->updateEvent("clockupdate");

    }

        if(powerButton->getState()==RELEASE_ACTIVE)
    {
        
            cont->updateEvent("powerButton");

    }
    
}


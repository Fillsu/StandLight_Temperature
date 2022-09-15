#include "Service.h"

Service::Service(View *view)
{
viewer=view;
lightState=LIGHT_OFF;
}

Service::~Service()
{

}

void Service::updateservice(std::string strServ)
{
    switch(lightState)
    {
        case LIGHT_OFF:
        if(strServ=="ServiceOn")
        {
            //lightState=LIGHT_ON;
            viewer->UpdateView("ViewOn");
        }
        break;

        case LIGHT_ON:
        if(strServ=="ServiceOff")
        {
            lightState=LIGHT_OFF;
            viewer->UpdateView("ViewOff");
        }
        break;
    }
}
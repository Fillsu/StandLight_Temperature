#ifndef CONTROLER_H
#define CONTROLER_H


#include <string>
#include "Service.h"
#include "Clock_Service.h"


class Controler
{
private:
    int lightState;
    Service *service;
    Clock_Service *Clock_servicer;
public:
    
    virtual ~Controler();
    void updateEvent(std::string strBtn);
     Controler(Service *servi,Clock_Service *Clock_service);

};

#endif
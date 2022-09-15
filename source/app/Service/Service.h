#ifndef SERVICE_H
#define SERVICE_H

#pragma once
#include <string>
#include "View.h"


class Service
{
public:
    Service(View *view);
    ~Service();
    void updateservice(std::string strServ);
    
private:
 int lightState;
 View *viewer;
};

#endif
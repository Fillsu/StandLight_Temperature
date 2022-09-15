#ifndef VIEW_H
#define VIEW_H

#pragma once
#include "string"
#include "Led.h"
//#include "Controler.h"



class View
{
public:
    View(Led *led,Led *led2,Led *led3,Led *led4,Led *led5);
    ~View();
    void lightView();
    void UpdateView(std::string strView);
    void lighton();
    void lightoff();

private:
    int ViewState;
    Led *ledarry[5];

   
};

#endif
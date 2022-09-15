#ifndef CLOCK_VIEW_H
#define CLOCK_VIEW_H

#pragma once
#include "time.h"
#include "LCD.h"

class Clock_View
{
public:
    Clock_View(LCD *lcd);
    ~Clock_View();
    void updateTime(struct tm *timeData);
    void off_lcd();
    void on_lcd();
    LCD *lcd;
    char led_lcd[17];

private:
    struct tm timeDate;

};

#endif
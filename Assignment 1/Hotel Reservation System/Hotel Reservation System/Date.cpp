//
//  Date.cpp
//  Hotel Reservation System
//
//  Created by Simon El Kallassi on 2022-01-23.
//

#include <stdio.h>

class Date {
    
private:
    
    int month;
    int day;
    int year;

public:
    
    Date(int month, int day, int year) {
        
        this->setMonth(month);
        this->setDay(day);
        this->year = year;
        
    }
    
    int getMonth() {
        return this->month;
        
    }
    
    int getDay() {
        return this->day;
        
    }
    int getYear() {
        return this->year;
        
    }
    void setMonth(int month){
        
        if (month>12 || month <1) {
            return;
        }
        this->month = month;
        
        
    }
    void setDay(int day){
        
        if (day>31 || day <1) {
            return;
        }
        this->day = day;
        
        
    }
    void setYear(int year){
       
        this->year = year;
        
    }
};

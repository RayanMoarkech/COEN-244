//
//  Guests.cpp
//  Hotel Reservation System
//
//  Created by Simon El Kallassi on 2022-01-23.
//

#include <stdio.h>
#include "Date.cpp"
#include "Information.cpp"

using namespace std;

class Guests{
    
private:
    
    Date checkInDate;
    Date checkOutDate;
    Information info[4];
    int roomNumber;
    
public:
    
    Guests (Date checkInDate, Date checkOutDate, Information info[4], int roomNumber){
        
        this->setCheckInDate(checkInDate);
        this->setCheckOutDate(checkOutDate);
        this->setInfo(info);
        this->setRoomNumber(roomNumber);
    
    }
    
    Date getCheckInDate(){
        
        return this->checkInDate;
    }
     
    Date getCheckOutDate(){
        
        return this->checkOutDate;
    }
    
    Information* getInfo(){
        
        return this->info;
    
    }
    
    int getRoomNumber(){
        
        return this->roomNumber;
    }
    
    void setCheckInDate(Date checkInDate) {
       
        this->checkInDate = checkInDate;
        
    }

    void setCheckOutDate(Date checkOutDate) {
       
        this->checkOutDate = checkOutDate;
        
    }
    
    void setInfo(Information  info[4]) {
        for (int i = 0; i < 4; i++) {
            this->info[i] = info[i];
        }
        
    }
    
    void setRoomNumber(int roomNumber) {
        
        if (roomNumber<1 || roomNumber>20){
            return;
        }
       
        this->roomNumber = roomNumber;
        
    }
    
};



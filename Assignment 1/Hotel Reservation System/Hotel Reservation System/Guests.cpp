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
    
    Information getInfo(){
        
        return this->info;
    
    }
    
    int getRoomNumber(){
        
        return this->roomNumber;
    }
    

    
    
    
    
    
}



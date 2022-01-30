//
//  Guests_Res_Request.cpp
//  Hotel Reservation System
//
//  Created by Simon El Kallassi on 2022-01-28.
//

#include <stdio.h>
#include "Guests.cpp"
#include "Date.cpp"
#include "Information.cpp"

using namespace std;

class GuestsResRequest{
    
private:
    
    Guests guestsObj; //GuestsObject as required in the assignment question
    static int idCounter ;
    int id;
    int numberOfNights;
    
    void setId() {
        // no re-setting
        if (this->id) { // if id was set
            return;
        }
        // if there is no idCounter, start with 1
        if (!this->idCounter) {
            this->idCounter = 1;
        }
        this->id = this->idCounter++;
    }
    
public:
    
    GuestsResRequest (Guests guestsObj, int id){
        
        this->setGuestsObj(guestsObj);
        this->setNumberOfNights();
        this->setId();
        
    }
    
    Guests getGuestsObj(){
        
        return this->guestsObj;
        
    }
    
    int getId(){
        
        return this->id;
        
        
    }
    
    int getNumberOfNights(){
        
        return this->numberOfNights;
    }
    
    void setGuestsObj(Guests guestsObj){
        
        this->guestsObj = guestsObj;
        
    }
    
    void setNumberOfNights(int numberOfNights){
        
        if (this->guestsObj.getCheckOutDate().getYear() != this->guestsObj.getCheckInDate().getYear()) {
            return;
        }
        if (this->guestsObj.getCheckOutDate().getMonth() != 3 && this->guestsObj.getCheckInDate().getMonth() != 3) {
            return;
        }
        if (this->guestsObj.getCheckInDate().getDay() < 1 || this->guestsObj.getCheckOutDate().getDay() > 7) {
            return;
        }
        this->numberOfNights = this->guestsObj.getCheckOutDate().getDay() - this->guestsObj.getCheckInDate().getDay();
    }
    
};
    

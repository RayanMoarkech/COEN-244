//
//  Reservation_Mananger.cpp
//  Hotel Reservation System
//
//  Created by Simon El Kallassi on 2022-01-28.
//

#include <stdio.h>
#include "Guests.cpp"
#include "Date.cpp"
#include "Information.cpp"
#include "Guests_Res_Request.cpp"

using namespace std;

class ReservationManager{
    
private:
    const static int maxNights = 7; //max number of nights
    const static int numberOfRooms = 20;
    GuestsResRequest *arr;
    int reservations[maxNights][numberOfRooms] = {0};
    
    
public:
    ReservationManager() {
    }
    
    void addReservation(GuestsResRequest guestsResRequest) {
        *this->arr = guestsResRequest;
        this->arr++;
        Date checkInDate = guestsResRequest.getGuestsObj().getCheckInDate();
        for (int i = 0; i < guestsResRequest.getNumberOfNights(); i++) {
            this->reservations[checkInDate.getDay() + i][guestsResRequest.getGuestsObj().getRoomNumber()] = guestsResRequest.getId();
        }
    }
};

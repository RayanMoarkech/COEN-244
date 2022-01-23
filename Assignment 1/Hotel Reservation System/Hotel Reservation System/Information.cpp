//
//  Information.cpp
//  Hotel Reservation System
//
//  Created by Simon El Kallassi on 2022-01-23.
//

#include <stdio.h>
#include "Date.cpp"
#include <iostream>

using namespace std;

class Information {
    
private :
    
    string firstName;
    string lastName;
    Date dateOfBirth;
    
public :
    
    Information (string firstName, string lastName, Date dateOfBirth){
        
        this->setFirstName(firstName);
        this->setLastName(lastName);
        this->setDateOfBirth(dateOfBirth);
        
    }
    
    string getFirstName(){
        
        return this-> firstName;
    }
    
    string getLastName(){
        
        return this-> lastName;
    }
    
    Date getDateOfBirth(){
        
        return this-> dateOfBirth;
    }
    
    void setFirstName(string firstName) {
       
        this->firstName = firstName;
        
    }
    
    void setLastName(string lastName) {
       
        this->lastName = lastName;
        
    }
    
    void setDateOfBirth(Date dateOfBirth) {
        
        this->dateOfBirth = dateOfBirth;
        
    }
};

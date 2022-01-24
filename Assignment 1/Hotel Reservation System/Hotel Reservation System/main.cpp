//
//  main.cpp
//  Hotel Reservation System
//
//  Created by Simon El Kallassi on 2022-01-23.
//

#include <iostream>
#include "Date.cpp"

using namespace std;

int main() {
    
    Date guest1 = Date(2, 3, 2023);
    
    cout << guest1.getMonth();
    return 0;
}

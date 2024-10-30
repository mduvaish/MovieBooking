#include "User.h"
#include <iostream>

User::User(MovieBookingSystem& system) : bookingSystem(system) {}

void User::bookSeats() {
    std::string theaterName;
    int seatCount;

    std::cout << "Enter theater name: ";
    std::cin.ignore();
    std::getline(std::cin, theaterName);

    std::cout << "Enter number of seats to book: ";
    std::cin >> seatCount;

    std::vector<int> seatNumbers(seatCount);
    std::cout << "Enter seat numbers (1-20): ";
    for (int i = 0; i < seatCount; ++i) {
        std::cin >> seatNumbers[i];
    }

    bookingSystem.bookSeatsInTheater(theaterName, seatNumbers);
}

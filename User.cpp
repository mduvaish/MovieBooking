#include "User.h"
#include <iostream>

User::User(MovieBookingSystem& system) : bookingSystem(system) {}

void User::bookMovie() {
    std::string title;
    int seats;
    std::cout << "Enter movie title: ";
    std::cin.ignore();
    std::getline(std::cin, title);
    std::cout << "Enter number of seats: ";
    std::cin >> seats;
    bookingSystem.bookMovie(title, seats);
}

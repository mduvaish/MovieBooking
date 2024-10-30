#include "Admin.h"
#include <iostream>

Admin::Admin(MovieBookingSystem& system) : bookingSystem(system) {}

bool Admin::authenticate() {
    std::string password;
    const std::string adminPassword = "admin123";
    std::cout << "Enter admin password: ";
    std::cin >> password;
    return password == adminPassword;
}

void Admin::addTheater() {
    if (authenticate()) {
        std::string theaterName, movieTitle;
        int seats;
        std::cout << "Enter theater name: ";
        std::cin.ignore();
        std::getline(std::cin, theaterName);
        std::cout << "Enter movie title: ";
        std::getline(std::cin, movieTitle);
        std::cout << "Enter number of seats: ";
        std::cin >> seats;
        bookingSystem.addTheater(theaterName, movieTitle, seats);
    } else {
        std::cout << "Invalid admin password. Access denied.\n";
    }
}

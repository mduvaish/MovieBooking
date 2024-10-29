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

void Admin::addMovie() {
    if (authenticate()) {
        std::string title;
        int seats;
        std::cout << "Enter movie title: ";
        std::cin.ignore();
        std::getline(std::cin, title);
        std::cout << "Enter number of seats: ";
        std::cin >> seats;
        bookingSystem.addMovie(title, seats);
    } else {
        std::cout << "Invalid admin password. Access denied.\n";
    }
}

#include "Theater.h"
#include <iostream>

Theater::Theater(const std::string& name, const Movie& movie)
    : name(name), movie(movie), seats(20, true) {}  // Initializes 20 seats as available

const std::string& Theater::getName() const { return name; }

const Movie& Theater::getMovie() const { return movie; }

bool Theater::isSeatAvailable(int seatNumber) const {
    return seatNumber > 0 && seatNumber <= 20 && seats[seatNumber - 1];
}

bool Theater::bookSeats(const std::vector<int>& seatNumbers) {
    // Check availability first
    for (int seatNumber : seatNumbers) {
        if (!isSeatAvailable(seatNumber)) {
            std::cout << "Seat " << seatNumber << " is already booked.\n";
            return false;
        }
    }

    // Book seats
    for (int seatNumber : seatNumbers) {
        seats[seatNumber - 1] = false;
    }
    std::cout << "Successfully booked seats: ";
    for (int seatNumber : seatNumbers) {
        std::cout << seatNumber << " ";
    }
    std::cout << "\n";
    return true;
}

void Theater::displayAvailableSeats() const {
    std::cout << "Available seats in " << name << ": ";
    for (int i = 0; i < seats.size(); ++i) {
        if (seats[i]) std::cout << (i + 1) << " ";
    }
    std::cout << "\n";
}

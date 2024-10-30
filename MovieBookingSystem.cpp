#include "MovieBookingSystem.h"
#include <iostream>

void MovieBookingSystem::addTheater(const std::string& theaterName, const std::string& movieTitle, int seats) {
    theaters.emplace_back(theaterName, Movie(movieTitle), seats);
    std::cout << "Theater \"" << theaterName << "\" added with movie \"" << movieTitle 
              << "\" and " << seats << " seats.\n";
}

void MovieBookingSystem::displayTheaters() const {
    std::cout << "Available theaters and movies:\n";
    for (const auto& theater : theaters) {
        std::cout << "Theater: " << theater.getName() 
                  << " | Movie: " << theater.getMovie().getTitle() 
                  << " | Seats available: " << theater.getAvailableSeats() << "\n";
    }
}

bool MovieBookingSystem::bookMovieInTheater(const std::string& theaterName, int seats) {
    for (auto& theater : theaters) {
        if (theater.getName() == theaterName) {
            if (theater.bookSeats(seats)) {
                std::cout << "Successfully booked " << seats << " seats at " << theaterName << " for movie "
                          << theater.getMovie().getTitle() << ".\n";
                return true;
            } else {
                std::cout << "Not enough seats available at " << theaterName << ".\n";
            }
            return false;
        }
    }
    std::cout << "Theater not found.\n";
    return false;
}

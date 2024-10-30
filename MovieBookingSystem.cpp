#include "MovieBookingSystem.h"
#include <iostream>

void MovieBookingSystem::addTheater(const std::string& theaterName, const std::string& movieTitle) {
    theaters.emplace_back(theaterName, Movie(movieTitle));
    std::cout << "Theater \"" << theaterName << "\" added with movie \"" << movieTitle << "\".\n";
}

void MovieBookingSystem::displayTheaters() const {
    for (const auto& theater : theaters) {
        std::cout << "Theater: " << theater.getName() << " | Movie: " << theater.getMovie().getTitle() << "\n";
        theater.displayAvailableSeats();
    }
}

bool MovieBookingSystem::bookSeatsInTheater(const std::string& theaterName, const std::vector<int>& seatNumbers) {
    for (auto& theater : theaters) {
        if (theater.getName() == theaterName) {
            return theater.bookSeats(seatNumbers);
        }
    }
    std::cout << "Theater not found.\n";
    return false;
}

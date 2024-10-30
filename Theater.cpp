#include "Theater.h"

Theater::Theater(const std::string& name, const Movie& movie, int availableSeats)
    : TheaterName(name), movie(movie), availableSeats(availableSeats) {}

const std::string& Theater::getName() const { return theaterName; }

const Movie& Theater::getMovie() const { return movie; }

int Theater::getAvailableSeats() const { return availableSeats; }

bool Theater::bookSeats(int seats) {
    if (seats <= availableSeats) {
        availableSeats -= seats;
        return true;
    }
    return false;
}

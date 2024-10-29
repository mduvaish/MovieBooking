#include "Movie.h"

Movie::Movie(const std::string& title, int availableSeats)     : title(title), availableSeats(availableSeats) {}
const std::string& Movie::getTitle() const { return title; }
int Movie::getAvailableSeats() const { return availableSeats; }
bool Movie::bookSeats(int seats) {    if (seats <= availableSeats) {        availableSeats -= seats;        return true;    }    return false;}

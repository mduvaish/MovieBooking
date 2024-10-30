#ifndef THEATER_H
#define THEATER_H

#include "Movie.h"
#include <string>
#include <vector>

class Theater {
public:
    Theater(const std::string& name, const Movie& movie);

    const std::string& getName() const;
    const Movie& getMovie() const;
    bool isSeatAvailable(int seatNumber) const;
    bool bookSeats(const std::vector<int>& seatNumbers);

    void displayAvailableSeats() const;

private:
    std::string name;
    Movie movie;
    std::vector<bool> seats;  // True if the seat is available, false if booked
};

#endif // THEATER_H

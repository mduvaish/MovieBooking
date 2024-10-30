#ifndef MOVIEBOOKINGSYSTEM_H
#define MOVIEBOOKINGSYSTEM_H

#include "Theater.h"
#include <vector>
#include <string>

class MovieBookingSystem {
public:
    void addTheater(const std::string& theaterName, const std::string& movieTitle);
    void displayTheaters() const;
    bool bookSeatsInTheater(const std::string& theaterName, const std::vector<int>& seatNumbers);

private:
    std::vector<Theater> theaters;
};

#endif // MOVIEBOOKINGSYSTEM_H

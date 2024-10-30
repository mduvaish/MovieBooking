#ifndef MOVIEBOOKINGSYSTEM_H
#define MOVIEBOOKINGSYSTEM_H

#include "Theater.h"
#include <vector>
#include <string>

class MovieBookingSystem {
public:
    void addTheater(const std::string& theaterName, const std::string& movieTitle, int seats);
    void displayTheaters() const;
    bool bookMovieInTheater(const std::string& theaterName, int seats);

private:
    std::vector<Theater> theaters;
};

#endif // MOVIEBOOKINGSYSTEM_H

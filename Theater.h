#ifndef THEATER_H
#define THEATER_H

#include "Movie.h"
#include <string>

class Theater {
public:
    Theater(const std::string& theaterName, const Movie& movie, int availableSeats);

    const std::string& getName() const;
    const Movie& getMovie() const;
    int getAvailableSeats() const;
    bool bookSeats(int seats);

private:
    std::string theaterName;
    Movie movie;
    int availableSeats;
};

#endif // THEATER_H

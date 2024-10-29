#ifndef MOVIE_H
#define MOVIE_H

#include <string>

class Movie {
public:
    Movie(const std::string& title, int availableSeats);
    
    const std::string& getTitle() const;
    int getAvailableSeats() const;
    bool bookSeats(int seats);

private:
    std::string title;
    int availableSeats;
};

#endif // MOVIE_H

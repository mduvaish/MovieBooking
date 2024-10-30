#ifndef MOVIE_H
#define MOVIE_H

#include <string>

class Movie {
public:
    Movie(const std::string& title);    
    const std::string& getTitle() const;

private:
    std::string title;
};

#endif // MOVIE_H

#ifndef MOVIEBOOKINGSYSTEM_H
#define MOVIEBOOKINGSYSTEM_H

#include "Movie.h"
#include <unordered_map>
#include <string>
class MovieBookingSystem {
public:    
      void addMovie(const std::string& title, int seats);
      void displayMovies() const;
      bool bookMovie(const std::string& title, int seats);
private:    
      std::unordered_map<std::string, Movie> movies;};
#endif // MOVIEBOOKINGSYSTEM_H

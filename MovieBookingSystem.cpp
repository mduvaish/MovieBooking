#include "MovieBookingSystem.h"
#include <iostream>
void MovieBookingSystem::addMovie(const std::string& title, int seats) {
    movies[title] = Movie(title, seats);
    std::cout << "Movie \"" << title << "\" added successfully with " << seats << " seats.\n";
}

void MovieBookingSystem::displayMovies() const {
    std::cout << "Available movies:\n";    
    for (const auto& pair : movies) {
      std::cout << " - " << pair.first << " (Seats available: " << pair.second.getAvailableSeats() << ")\n";
    }
}
bool MovieBookingSystem::bookMovie(const std::string& title, int seats) {
   auto it = movies.find(title);
   if (it != movies.end()) { 
      if (it->second.bookSeats(seats)) {
          std::cout << "Successfully booked " << seats << " seats for " << title << ".\n";
          return true;
      } else {
         std::cout << "Not enough seats available for " << title << ".\n";
      }
   } else {
     std::cout << "Movie not found.\n";    
   }    
   return false;
}

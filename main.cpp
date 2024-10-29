#include "MovieBookingSystem.h"
#include "Admin.h"
#include "User.h"
#include <iostream>

int main() {
   MovieBookingSystem bookingSystem;
   Admin admin(bookingSystem);
   User user(bookingSystem);
    
   int choice;    
   do {
       std::cout << "\nMovie Booking System\n";
       std::cout << "1. Display available movies\n";
       std::cout << "2. Book a movie (User)\n";
       std::cout << "3. Add a new movie (Admin)\n";
       std::cout << "4. Exit\n";
       std::cout << "Enter your choice: ";
       std::cin >> choice;
       switch (choice) {
          case 1:
             bookingSystem.displayMovies();
             break;
          case 2:
             user.bookMovie();
             break;
          case 3:
             admin.addMovie();
             break;
          case 4:
             std::cout << "Exiting the system.\n";
             break;
          default:
             std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);
    return 0;
}

# MovieBooking
Centralized movie booking system allows user to view available movies, book seats and for adminstrators add new movies to the system.

How to build and Run:

Compile:
Using g++:
    g++ main.cpp Movie.cpp MovieBookingSystem.cpp Admin.cpp User.cpp -o movie_booking_system

Run:
   ./movie_booking_system
   

Usage
Main Menu:
     Select options by entering the corresponding number and pressing Enter.
     Options include displaying theaters, booking seats as a user, adding a theater as an admin.

Admin Authentication:
    To add a movie, you will be prompted to enter an admin password. The default password is admin123.
    If authentication is successful, admin can add theater name, movie title.
    
Booking a Movie:
    Enter the theater name and the number of seats you wish to book.
    Enter seat numbers (from 1 to 20). The system checks availability and confirms the booking if seats are available.

Display Available Theaters and Seats:
    View a list of theaters with movies that are showing and a list of currently available seats.
    

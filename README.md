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
     Options include displaying movies, booking a movie (user), adding a movie (admin), and exiting.

Admin Authentication:
    To add a movie, you will be prompted to enter an admin password. The default password is admin123.
    If authentication is successful, you can add a movie by entering the title and available seats.
    
Booking a Movie:
    Enter the movie title and the number of seats you want to book.
    The system will check availability and confirm the booking if seats are available.
    

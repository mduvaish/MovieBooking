#ifndef USER_H
#define USER_H

#include "MovieBookingSystem.h"

class User {
public:
    User(MovieBookingSystem& system);
    void bookMovie();

private:
    MovieBookingSystem& bookingSystem;
};

#endif // USER_H

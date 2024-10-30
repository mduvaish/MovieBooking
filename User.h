#ifndef USER_H
#define USER_H

#include "MovieBookingSystem.h"
#include <vector>

class User {
public:
    User(MovieBookingSystem& system);
    void bookSeats();

private:
    MovieBookingSystem& bookingSystem;
};

#endif // USER_H

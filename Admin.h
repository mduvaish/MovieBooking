#ifndef ADMIN_H
#define ADMIN_H

#include "MovieBookingSystem.h"

class Admin {
public:
    Admin(MovieBookingSystem& system);
    bool authenticate();
    void addTheater();

private:
    MovieBookingSystem& bookingSystem;
};

#endif // ADMIN_H

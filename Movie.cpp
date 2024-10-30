#include "Movie.h"

Movie::Movie(const std::string& title) : title(title) {}

const std::string& Movie::getTitle() const { return title; }


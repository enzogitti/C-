bool can_eat_ghost(bool power_pellet_active, bool touching_ghost) {
    return power_pellet_active && touching_ghost;
}

bool scored(bool touching_power_pellet, bool touching_dot) {
    return touching_power_pellet or touching_dot;
}

bool lost(bool power_pellet_active, bool touching_ghost) {
    return !power_pellet_active && touching_ghost;
}

// The function should return true if Pac-Man
// has eaten all of the dots and has not lost
bool won(bool has_eaten_all_dots, bool power_pellet_active,
         bool touching_ghost) {
     return has_eaten_all_dots && !(!power_pellet_active && touching_ghost) ;
}

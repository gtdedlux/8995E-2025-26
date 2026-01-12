#ifndef INTAKE_CONTROL_HPP

#include "pros/rtos.hpp"

// Global intake speed variable
extern int intake1Speed;
extern int intake2Speed;

// Function declarations
void intake1Task();
void intake2Task();



void startIntakeTasks();

#endif

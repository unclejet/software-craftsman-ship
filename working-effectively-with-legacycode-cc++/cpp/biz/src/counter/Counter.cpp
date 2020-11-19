/*
 * Counter.cpp
 *
 *  Created on: Nov 15, 2014
 *      Author: jehan
 */

#include <stdio.h>
#include "Counter.h"

int Counter::Incr() {
  return counter_++;
}

int Counter::value() {
  return counter_;
}




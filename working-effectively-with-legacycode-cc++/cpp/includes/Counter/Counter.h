/*
 * Counter.h
 *
 *  Created on: Nov 15, 2014
 *      Author: jehan
 */

#ifndef COUNTER_H_
#define COUNTER_H_

class Counter {
  private:
    int counter_;
  public:
    Counter() : counter_(0) {}
      int Incr();
      int value();
};




#endif /* COUNTER_H_ */

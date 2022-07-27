#include <iostream>
#include "counter.h"

Counter::Counter() {}
Counter::Counter(int count) { this->count = count; }
void Counter::increaseCount() { ++count; }
void Counter::reduceCount() { --count; }
void Counter::checkCount() { std::cout << count << std::endl; }
#pragma once

class Counter
{
private:
    int count;
public:
    Counter();
    Counter(int count);
    void increaseCount();
    void reduceCount();
    void checkCount();
};
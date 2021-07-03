#include<iostream>

using namespace std;

class Counter
{
private:
    int count, incrementstepvalue;

public:
    void setIncrementStep(int step_val)
{
    incrementstepvalue = step_val;
}
    void resetCount()
{
    count=0;
}
    void increment()
{
    count = count + incrementstepvalue;
}
    int get_count()
{
    return count;
}
};

int main()
{
   Counter C;
   C.setIncrementStep(2);
   C.get_count();
}

#include <iostream>

using namespace std;

class Hospital
{
public:
    virtual int surgery() = 0;
};

class Patient : public Hospital

{
    int H;
    public :
    Patient(int v)
    {
        H = v;
    }
    int surgery()
    {
        return H;
    }
};

int main()
{
    Hospital *h;
    Patient p(2);
    h = &p;
    int a = h -> surgery();
    cout << "Total number of patients who undergo surgery are :" <<a<< endl;
    return 0;
}

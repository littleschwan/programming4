#include <iostream>

using namespace std;

class stock {
    public:
        void buy();
        void sell();
    private:
        char name[3]= {'A','B','C'};
        int quantity = 10;
}
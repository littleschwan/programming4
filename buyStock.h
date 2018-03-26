#include <iostream>
#include <stock.h>
using namespace std;

class buyStock : public order{
    private:
    stock abcStock;

    public:

    buyStock(stock abcStock);
}
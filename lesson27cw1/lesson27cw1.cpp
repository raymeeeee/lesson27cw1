#include "Buy.h"
int main()
{
    Product a("Apple", 100, 0.5);
    a.showProduct();
    cout << "==================" << endl;
    Buy b(a, 2);
    b.printBuy();
}
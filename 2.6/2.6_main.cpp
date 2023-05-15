#include <iostream>
using namespace std;

int main() {
    double dollars, franks, euro, yen, sterling;
    cout << "Enter money in dollars" << endl;
    cin >>  dollars;
    sterling = dollars / 1.487;
    franks = dollars / 0.172;
    euro = dollars / 0.584;
    yen = dollars / 0.00955;
    cout << "sterling: " << sterling << endl
    << "franks: " << franks << endl
    << "euro: " << euro << endl
    << "yen: " << yen << endl;
    return 0;
}

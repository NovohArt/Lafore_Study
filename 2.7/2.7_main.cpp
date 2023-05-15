#include <iostream>
using namespace std;

int main() {
    double Ctemperature, Ftemperature;
    cout << "Enter temperature in Celcium:"<< endl;
    cin >> Ctemperature;
    Ftemperature= Ctemperature * (9 / 5) +32;
    cout << "Temperature in Fahrenheits: " << Ftemperature << endl;
    return 0;
}

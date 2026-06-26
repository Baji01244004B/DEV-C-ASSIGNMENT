#include <iostream>
using namespace std;

int main() {
    double resistor, totalResistance = 0;
    
    cout << "Enter the resistance values for 5 resistors in series (Ohms):" << endl;
    
    for(int i = 1; i <= 5; i++) {
        cout << "Resistor " << i << ": ";
        cin >> resistor;
        totalResistance += resistor;
    }
    
    cout << "Total Resistance = " << totalResistance << " Ohms" << endl;
    
    return 0;
}

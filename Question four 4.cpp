#include <iostream>
using namespace std;

int main() {
    int option;
    
    cout << "===== Electrical Component Menu =====" << endl;
    cout << "1. Resistor" << endl;
    cout << "2. Capacitor" << endl;
    cout << "3. Diode" << endl;
    cout << "4. Transistor" << endl;
    cout << "5. LED" << endl;
    cout << "Enter your choice (1-5): ";
    cin >> option;
    
    switch(option) {
        case 1:
            cout << "Resistor: Used to limit current in a circuit." << endl;
            break;
        case 2:
            cout << "Capacitor: Stores and releases electrical energy." << endl;
            break;
        case 3:
            cout << "Diode: Allows current to flow in one direction only." << endl;
            break;
        case 4:
            cout << "Transistor: Used to amplify or switch electronic signals." << endl;
            break;
        case 5:
            cout << "LED: Light Emitting Diode that emits light when current passes through." << endl;
            break;
        default:
            cout << "Invalid option. Please select 1-5." << endl;
    }
    
    return 0;
}

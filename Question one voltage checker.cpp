#include <iostream>
using namespace std;

int main() {
    double voltage;
    
    cout << "Enter voltage reading: ";
    cin >> voltage;
    
    if (voltage < 0) {
        cout << "Invalid voltage reading" << endl;
    }
    else if (voltage >= 0 && voltage <= 50) {
        cout << "Low voltage" << endl;
    }
    else if (voltage >= 51 && voltage <= 240) {
        cout << "Normal voltage" << endl;
    }
    else if (voltage >= 241 && voltage <= 415) {
        cout << "High voltage" << endl;
    }
    else { // voltage > 415
        cout << "Dangerous voltage" << endl;
    }
    
    return 0;
}

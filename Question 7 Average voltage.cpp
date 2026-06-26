#include <iostream>
using namespace std;

int main() {
    double voltage, totalVoltage = 0, averageVoltage;
    
    cout << "Enter 10 voltage readings from the sensor:" << endl;
    
    for(int i = 1; i <= 10; i++) {
        cout << "Reading " << i << ": ";
        cin >> voltage;
        totalVoltage += voltage;
    }
    
    averageVoltage = totalVoltage / 10;
    
    cout << "Total Voltage = " << totalVoltage << " V" << endl;
    cout << "Average Voltage = " << averageVoltage << " V" << endl;
    
    return 0;
}

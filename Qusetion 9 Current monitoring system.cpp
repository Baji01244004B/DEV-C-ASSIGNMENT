#include <iostream>
using namespace std;

int main() {
    double current;
    
    cout << "Current Monitoring System Started" << endl;
    cout << "Enter current readings (A). Monitoring stops if > 10 A:" << endl;
    
    while(true) {
        cout << "Enter current: ";
        cin >> current;
        
        if(current > 10) {
            cout << "Overcurrent detected. Monitoring stopped." << endl;
            break;
        }
        else {
            cout << "Current is normal." << endl;
        }
    }
    
    return 0;
}

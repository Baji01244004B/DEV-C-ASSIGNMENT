#include <iostream>
using namespace std;

int main() {
    double ratedCurrent, measuredCurrent;
    
    cout << "Enter rated current of the circuit breaker (A): ";
    cin >> ratedCurrent;
    
    cout << "Enter measured current in the circuit (A): ";
    cin >> measuredCurrent;
    
    if (measuredCurrent > ratedCurrent) {
        cout << "Overload detected. Circuit breaker should trip." << endl;
    }
    else {
        cout << "Current is within safe limit." << endl;
    }
    
    return 0;
}

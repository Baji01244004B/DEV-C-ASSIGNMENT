#include <iostream>
using namespace std;

int main() {
    double current;
    int safeCount = 0, unsafeCount = 0;
    
    cout << "Enter 8 current readings (A):" << endl;
    
    for(int i = 1; i <= 8; i++) {
        cout << "Reading " << i << ": ";
        cin >> current;
        
        if(current <= 10) {
            cout << "Safe" << endl;
            safeCount++;
        }
        else {
            cout << "Unsafe" << endl;
            unsafeCount++;
        }
    }
    
    cout << "\nSummary:" << endl;
    cout << "Safe readings: " << safeCount << endl;
    cout << "Unsafe readings: " << unsafeCount << endl;
    
    return 0;
}

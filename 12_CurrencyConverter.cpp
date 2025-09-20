#include <iostream>
using namespace std;

int main() {
    double inr;
    cout << "Enter amount in INR: ";
    cin >> inr;

    cout << "\n💰 Currency Conversion from INR\n";
    cout << "---------------------------------\n";
    cout << "USD = " << inr / 83.0 << endl;
    cout << "EUR = " << inr / 90.0 << endl;
    cout << "GBP = " << inr / 100.0 << endl;
    cout << "JPY = " << inr * 1.78 << endl;     
    cout << "AUD = " << inr / 55.0 << endl;     
    cout << "CAD = " << inr / 61.0 << endl;    
    cout << "CNY = " << inr / 11.5 << endl;     
    cout << "AED = " << inr / 22.6 << endl;    
    cout << "SAR = " << inr / 22.1 << endl;     
    cout << "RUB = " << inr / 0.9 << endl;     

    return 0;
}

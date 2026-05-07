#include <iostream>
using namespace std;
int main(){
    double celsius, fahrenheit;
    cout << "Temperature in Celsiuss: " << endl;
    cin >> celsius;

    fahrenheit = 9.0 * celsius / 5.0 + 32;
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

    return 0;
}
#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;
double f(double x, bool &ok) {
    double expression = (x-1)*(2-x);
    if (expression >= 0) {
        ok = true; 
        return sqrt(expression);
    } else {
        ok = false;
        return 0;
    }
}
int main() {
    double x;
    cout << "Entrez un nombre reel : ";
    cin >> x; 
    bool ok=true;
    double result = f(x,ok);
    if (ok) {
        cout << "La racine carree de (x-1)*(2-x) est : " << result << endl;
    } else {
        cout << "La fonction n'est pas definie au point x = " << x << endl;
    }
    return 0;
} 

#include "header.h"

double firstRoot(double b, double a, double partOne)
{
    double first = -b + sqrt(partOne);
    return first / (2 * a);
}
double secondRoot(double b, double a, double partOne)
{
    double first = -b - sqrt(partOne);
    return first / (2 * a);
}
int main() {
    double a;
    double b;
    double c;
    double partOne;
    
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    partOne = pow(b, 2.0) - (4 * a * c);
    if (partOne < 0)
        cout << "Whoops! The numbers you entered will not result in roots! :(";
    else 
        cout << "Your question's roots are: " << firstRoot(b, a, partOne) << " and " << secondRoot(b, a, partOne) << ".";
}
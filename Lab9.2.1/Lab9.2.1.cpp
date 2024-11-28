#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

using namespace std;


#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define ABS(a) ((a) < 0 ? -(a) : (a))
#define SQUARE(a) ((a) * (a))
#define POWER(a, b) (pow((a), (b)))
#define PRINT_DOUBLE(var) cout << #var " = " << (var) << endl


#define Z 3


double calculateWFormula1(double x);
double calculateWFormula2(double x);

double calculateW(double x) {
#if (Z > 5 && Z < 10)
    return calculateWFormula1(x);
#else
    return calculateWFormula2(x);
#endif
}


double calculateWFormula1(double x) {
    return MAX(x, Z) * MIN(x + Z, x * Z);
}


double calculateWFormula2(double x) {
    return SQUARE(MIN(ABS(x - Z), Z));
}

int main() {
    double x;


    cout << "Enter x: ";
    cin >> x;


#if (Z > 5 && Z < 10)
    cout << "WARNING: Z is between 5 and 10. Using calculateWFormula1.\n";
#else
    cout << "WARNING: Z is not in range (5,10). Using calculateWFormula2.\n";
#endif


    double w = calculateW(x);
    PRINT_DOUBLE(w);

    return 0;
}
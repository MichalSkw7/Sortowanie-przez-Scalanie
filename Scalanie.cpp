#include <iostream>
#include <cmath>

// Przykładowa funkcja f(x)
double f(double x) {
    return x * x - 2; // miejsce zerowe: sqrt(2)
}

// Algorytm bisekcji
double bisekcja(double a, double b, double epsilon) {
    if (f(a) == 0.0) return a;
    if (f(b) == 0.0) return b;

    while ((b - a) > epsilon) {
        double srodek = (a + b) / 2;

        if (f(srodek) == 0.0) return srodek;

        if (f(a) * f(srodek) < 0) {
            b = srodek;
        } else {
            a = srodek;
        }
    }

    return (a + b) / 2;
}

int main() {
    double a = 0, b = 2, epsilon = 1e-6;
    double wynik = bisekcja(a, b, epsilon);
    std::cout << "Miejsce zerowe: " << wynik << std::endl;
    return 0;
}

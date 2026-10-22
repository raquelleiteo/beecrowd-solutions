#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    std::cout << std::fixed <<std::setprecision(5);

    double a, b, c;
    std::cin >> a >> b >> c;

    double delta = (b * b) - (4 * a * c);

    if(delta < 0 || a == 0) {
        std::cout << "Impossivel calcular\n";
    }
    else {
        float R1 = (-b + sqrt(delta)) / (2 * a);
        float R2 = (-b - sqrt(delta)) / (2 * a);

        std::cout << "R1 = " << R1 << std::endl;
        std::cout << "R2 = " << R2 << std::endl;
    }

    return 0;
}
#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    
std::cout << std::fixed << std::setprecision(2);

    double value;
    std::cin >> value;
    
    int round_value = std::round(value * 100);

    int possible_banknotes[6] = {10000, 5000, 2000, 1000, 500, 200};
    int possible_coins[6] = {100, 50, 25, 10, 5, 1};

    int banknotes;
    int coins;

    std::cout << "NOTAS:\n";

    for(int i = 0; i < 6; i++){
        banknotes = round_value / possible_banknotes[i];
        round_value %= possible_banknotes[i];

        std::cout << banknotes << " nota(s) de R$ " << possible_banknotes[i] / 100.0 << std::endl;
    }

    std::cout << "MOEDAS:\n";

    for(int i = 0; i < 6; i++){
        coins = round_value / possible_coins[i];
        round_value %= possible_coins[i];

        std::cout << coins << " moeda(s) de R$ " << possible_coins[i] / 100.0 << std::endl;
    }

    return 0;
}
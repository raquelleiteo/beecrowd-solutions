#include <iostream>

int main() {

    int value;
    
    std::cin >> value;
    int possible_values[7] = {100, 50, 20, 10, 5, 2, 1};
    int banknotes;

    std::cout << value << std::endl;

    for(int i = 0; i < 7; i++) {
        banknotes = value / possible_values[i];
        value = value % possible_values[i];
        std::cout << banknotes << " nota(s) de R$ " << possible_values[i] 
                      << ",00\n";
    }
    
    return 0;
}
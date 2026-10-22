#include <iostream> 

int main() {
    int N; 
    std::cin >> N;

    int hours = N / 3600; 
    N %= 3600;

    int minutes = N / 60;
    N %= 60;

    std::cout << hours << ":" << minutes << ":" << N << std::endl;

    return 0;
}
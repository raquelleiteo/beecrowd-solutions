#include <iostream>

void troca(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    
    int a, b, c;
    std::cin >> a >> b >> c;
    int x = a, y = b, z = c;
    if(x > y) {
        troca(x, y);
    }
    if(y > z) { 
        troca(y, z);
    }
    if(x > y) {
        troca(x, y);
    }

    std::cout << x << std::endl << y << std::endl << z << "\n\n";
    std::cout << a << std::endl << b << std::endl << c <<std::endl;

    return 0;
}
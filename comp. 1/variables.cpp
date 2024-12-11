#include <iostream>
#include <random>

int main(){
    
    int numero;
    
    std::random_device rd;
    
    std::mt19937 gen(rd());
    
    std::uniform_int_distribution<> distrib(0, 500);
    
    numero = distrib(gen);
    
    std::cout << "El numero aleatorio es: " << numero <<endl;
    
    return 0;
    }

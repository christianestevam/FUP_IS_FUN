#include <iostream>
#include <iomanip>

int main(){
    int n1{ }, n2{ };
    
    std::cin >> n1 >> n2;
    
    std::cout << n1/n2 << '\n';
    
    std::cout << n1 % n2 << '\n';
    
    std::cout << std::setprecision(2) << std::fixed;
    
    std::cout << float (n1)/n2 << '\n';
    
    
}
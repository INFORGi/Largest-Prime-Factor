// Простые делители числа 13195 — 5, 7, 13 и 29.
// Каков наибольший простой делитель числа 600851475143? (716151937)

#include <iostream>
#include <cmath>

int main(){

    const long long number = 600851475143;
    const long long length = number / 2;
    // const long long length = std::sqrt(number);

    int max_factor = -1;

    for(int i = 2; i < length; ++i){
        if(number % i == 0){
            if(i < 0){
                break;
            }

            max_factor = i;
        }
    }

    std::cout << "Largest Prime Factor: " << max_factor << std::endl;

    return 0;
}
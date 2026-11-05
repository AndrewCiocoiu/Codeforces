#include <iostream>

int main(){
    int i;
    std::cin >> i;

    if(i > 2 && i % 2 == 0){
        std::cout << "YES";
    } else{
        std::cout << "NO";
    }
}
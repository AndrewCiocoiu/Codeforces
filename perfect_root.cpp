#include <iostream>

int main(){
    int n;
    std::cin >> n;

    for(int i = 0; i < n; i++){
        int a;
        std::cin >> a;

        for(int i = 0; i < a; i++){
            std::cout << i + 1 << " ";
        }
        std::cout << "\n";
    }
}
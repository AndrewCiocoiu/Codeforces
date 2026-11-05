#include <iostream>

int main(){
    int n;
    std::cin >> n;

    for(int i = 0; i < n; i++){
        int a;
        std::cin >> a;

        int current_max = 0;
        for(int j = 0; j < a; j++){
            int b;
            std::cin >> b;
            if(b > current_max){
                current_max = b;
            }
        }
        std::cout << a * current_max << "\n";
    }
}
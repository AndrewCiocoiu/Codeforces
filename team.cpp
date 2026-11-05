#include <iostream>

int main(){
    int n;
    std::cin >> n;

    int total = 0;

    for(int i = 0; i < n; i++){
        int a, b, c;
        std::cin >> a >> b >> c;
        if(a + b + c >= 2){
            total += 1;
        }
    }

    std::cout << total;
}
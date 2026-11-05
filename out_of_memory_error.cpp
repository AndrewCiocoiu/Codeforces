#include <iostream>
#include <vector>
#include <fstream>

int main(){
    int n;

    std::ofstream fout("test.txt");

    std::cin >> n;

    for(int i = 0; i < n; i++){
        int a, b, c;
        std::cin >> a >> b >> c;

        std::vector<int> nums(a);
        for(int j = 0; j < a; j++){
            std::cin >> nums[j];
        }

        std::vector<std::pair<int, int>> history;

        for(int j = 0; j < b; j++){
            int x, y;
            std::cin >> x >> y;
            if(y + nums[x - 1] > c){
                for(int k = (int)history.size() - 1; k >= 0; k--){
                    nums[history[k].first] -= history[k].second;
                }
                history.clear();
                continue;
            } else {
                nums[x - 1] += y;
                history.push_back({x - 1, y});
            }
        }

        for(int j = 0; j < a; j++){
            std::cout << nums[j] << " ";
        }
        std::cout << "\n";
    }
}
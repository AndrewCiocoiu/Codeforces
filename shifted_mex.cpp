#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int n;
    std::cin >> n;

    for(int i = 0; i < n; i++){
        int m;
        std::cin >> m;

        if(m == 0){
            std::cout << m << "\n";
            continue;
        }

        std::vector<long long> nums(m);
        for(int i = 0; i < m; i++){
            std::cin >> nums[i];
        }

        std::sort(nums.begin(), nums.end());
        nums.erase(std::unique(nums.begin(), nums.end()), nums.end());

        int max_seq = 1;
        int curr_seq = 1;
        
        for(int i = 1; i < nums.size(); i++){
            if (nums[i] - nums[i - 1] == 1){
                curr_seq++;
            } else{
                if(curr_seq > max_seq){
                    max_seq = curr_seq;
                }
                curr_seq = 1;
            }
        }

        if(curr_seq > max_seq){
                    max_seq = curr_seq;
        }

        std::cout << max_seq << "\n";

    }

}
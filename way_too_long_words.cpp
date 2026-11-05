#include <iostream>
#include <string>
#include <vector>

int main(){
    std::vector<std::string> words;
    int n;
    std::cin >> n;


    for(int i = 0; i < n; i++){
        std::string current_word;
        std::cin >> current_word;

        if (current_word.size() > 10){
            current_word = current_word[0] + std::to_string(current_word.size() - 2) + current_word[current_word.size() - 1];
        }

        words.push_back(std::move(current_word));
    }

    for(auto & word : words){
        std::cout << word << "\n";
    }
}
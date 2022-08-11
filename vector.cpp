#include <iostream>
#include <vector>
#include <algorithm>

int main() {

    std::vector<int> vec = {1,2,3,4,5};
    vec.push_back(6);
    vec.insert(vec.begin(), 0);
    vec.insert(find(vec.begin(), vec.end(), 1), 10);

    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    std::vector<int> vec2 = {0,1,2,3,4,5,6,7,8,9};
    vec2.pop_back();

    for (int i = 0; i < vec2.size(); i++) {
        std::cout << vec2[i];
    }
    std::cout << std::endl;

    vec2.erase(vec2.begin());

    for (int i = 0; i < vec2.size(); i++) {
        std::cout << vec2[i];
    }

    std::cout << std::endl;

    vec2.erase(vec2.begin() + 1, vec2.begin() + 4);

    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i];
    }

    std::cout << std::endl;
}
#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr = {1,2,3,4,5};

    std::cout << arr.size() << std::endl;

    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] <<" ";
    }

    auto it = arr.begin();
    it += 3;
    std::cout << *arr.data();
}
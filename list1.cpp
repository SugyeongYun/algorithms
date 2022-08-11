#include <iostream>
#include <list>

int main() {
    std::list<int> list1 = {1,2,3,4,5};
    list1.push_back(6); 

    for (auto i = list1.begin(); i != list1.end(); i++) {
        std::cout << *i << " ";
    }
    std::cout << std::endl;

    list1.insert(next(list1.begin()), 0);

    for (auto i = list1.begin(); i != list1.end(); i++) {
        std::cout << *i << " ";
    }
    std::cout << std::endl;

    list1.insert(list1.end(), 7);

    for (auto i = list1.begin(); i != list1.end(); i++) {
        std::cout << *i << " ";
    }
    std::cout << std::endl;

    
}
#include <iostream>
#include <forward_list>
#include <vector>

int main() {
    std::vector<std::string> vec = {
        "Joe Biden", "Donald Trump", "Barack Obama", "George W. Bush", "Bill Clinton"
    };

    auto it = vec.begin();
    std::cout << "Current US President: " << *it << std::endl;
    it++;
    std::cout << "His Predecessor: " << *it << std::endl;
    it+=3;
    std::cout << "President 3 Terms Before Him: " << *it << std::endl;
    advance(it, -1);
    std::cout << "His Successor: " << *it << std::endl;

    std::forward_list<std::string> fwd(vec.begin(), vec.end());
    auto it1 = fwd.begin();
    std::cout << "Current US President: " << *it1 << std::endl;
    advance(it1, 2);
    std::cout << "President 2 Terms Before Him: " << *it1 << std::endl;
}
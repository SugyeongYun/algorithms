#include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> fwd_list = {1,2,3,4,5};
    fwd_list.push_front(0);
    auto it = fwd_list.begin();
    fwd_list.insert_after(it, 10);
    fwd_list.insert_after(it, 0);

    for (auto i = fwd_list.begin(); i!= fwd_list.end(); i++) {
        std::cout << *i << " ";
    }

    std::cout << std::endl;

    fwd_list.pop_front();
    
    fwd_list.erase_after(fwd_list.begin());

    for (auto i = fwd_list.begin(); i!= fwd_list.end(); i++) {
        std::cout << *i << " ";
    }
    
    std::cout << std::endl;

    fwd_list.erase_after(fwd_list.begin(), fwd_list.end());

    for (auto i = fwd_list.begin(); i!= fwd_list.end(); i++) {
        std::cout << *i << " ";
    }
    std::cout << std::endl;
}
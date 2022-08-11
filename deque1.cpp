#include <iostream>
#include <deque>

int main() {
    std::deque<int> deq = {1,2,3,4,5};
    deq.push_front(0);
    deq.push_back(6);

    for(int i = 0; i < deq.size(); i++) {
        std::cout << deq[i] << " ";
    }
    std::cout << std::endl;

    auto it = deq.begin();
    
    it = deq.insert(it, 8);

    deq.insert(it, 2, 0);

    for(int i = 0; i < deq.size(); i++) {
        std::cout << deq[i] << " ";
    }
    std::cout << std::endl;

    deq.pop_back();
    deq.pop_front();

     for(int i = 0; i < deq.size(); i++) {
        std::cout << deq[i] << " ";
    }
    std::cout << std::endl;
}
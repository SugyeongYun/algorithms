#include <iostream>
#include <array>

class cat {
    std::string name;
    std::string hair;
    int age;
    public:
        cat(std::string name, std::string hair, int age) : name(name), hair(hair), age(age) {}
        cat(const cat& other) {
            name = other.name;
            hair = other.hair;
            age = other.age;
        }
        void print() {
            std::cout << "[Name: " << name << ", Hair: " << hair << ", Age: " << age << "]" << std::endl;
        }
};


int main() {
    cat Gilmak("Gilmak", "Grey", 6);
    cat Yattong("Yattong", "Grey", 4);
    cat Yeonnim("Yeonnim", "Grey", 4);
    cat Samsaek("Samsaek", "Calico", 5);
    cat Marilyn("Marilyn", "Black and White", 4);
    cat Dodo("Dodo", "Grey", 4);

    std::array<cat, 6> arr = {Gilmak, Yattong, Yeonnim, Samsaek, Marilyn, Dodo};
    
    for (auto element : arr) {
        element.print();
    }

    std::cout << arr.size() << std::endl;

    auto it = arr.begin();
    it += 3;
    it->print();
}
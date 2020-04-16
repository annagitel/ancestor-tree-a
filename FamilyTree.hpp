#include <iostream>
namespace family {
    class Tree {
        std::string rootName;
    public:
        Tree(std::string){};

        Tree &addFather(std::string myName, std::string fatherName);

        Tree &addMother(std::string myName, std::string motherName);

        std::string relation(std::string name);

        std::string find(std::string chain);

        void display();

        void remove(std::string name);
    };
};
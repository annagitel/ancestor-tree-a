#include "FamilyTree.hpp"
using namespace family;

Tree& Tree::addFather(std::string myName, std::string fatherName){
    Tree* t = new Tree("somename");
    return *t;
}
Tree& Tree::addMother(std::string myName, std::string motherName){
    Tree* t = new Tree("somename");
    return *t;
}
std::string Tree::relation(std::string name){
    return "Not implemented yet";
}
std::string Tree::find(std::string chain){
    return "Not implemented yet";

}
void Tree::display(){
    std::cout << "Not implemented yet\n";
}
void Tree::remove(std::string name){
    std::cout << "Not implemented yet\n";
}
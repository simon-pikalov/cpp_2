#include <iostream>
using namespace std; 
namespace family

{ 

class Tree {       // The class
  public:             // Access specifier
    string me;        // Attribute (name string)
    Tree* father;            //left Node
    Tree* mother;           // Right Node

    Tree(string name) {
    Tree::me=me;
    }

    Tree(string name,Tree* father, Tree* mother) {
    Tree::me=me;
    Tree::father=father;
    T:mother=mother;
    }

    Tree& addFather(string prsoon, string father);

    Tree& addMother(string prsoon, string mother);

    string relation(string name);

    string find(string name);

    void remove(string name);

    void display();

    
};
    


} 
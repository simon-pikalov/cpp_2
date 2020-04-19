#include "FamilyTree.hpp"

#include <iostream>
using namespace family;
using namespace std;


Tree& Tree::addFather(string to, string name){
    return *this;
}

Tree& Tree::addMother(string to, string name){
    return *this;
}

void Tree::display(){
if(father!=NULL) cout<<me<<"mother : "<<this->mother->me;
if(mother!=NULL)cout<<me<<"father : "<<this->father->me;
Tree* father = this->father;
Tree* mother = this->father;
 if(father!=NULL) father->display();
if(mother!=NULL)mother->display();




}

string Tree::relation(string name){
    return "TO_DO";
}

string Tree::find(string relation){
   return "TO_DO";
}

void Tree::remove(string name){

}

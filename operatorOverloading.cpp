#include <iostream>
#include "class.h"

StanfordID::StanfordID(std::string name, std::string sunet, int idNumber) : 
m_name(name), m_sunet(sunet), m_idNumber(idNumber) {}

std::string StanfordID::getName(){
    return this->m_name;
}

std::string StanfordID::getSunet(){
    return this->m_sunet;
}   

int StanfordID::getID(){
    return this->m_idNumber;
}

StanfordID::~StanfordID(){
    std::cout << "Destroying StanfordID object for " << this->m_name << "\n";
}

bool StanfordID::operator == (const StanfordID &other) const {
    return this->m_idNumber == other.m_idNumber;
}

bool StanfordID::operator != (const StanfordID &other) const {
    return !(*this == other);
}

bool StanfordID::operator < (const StanfordID &other) const {
    return this->m_idNumber < other.m_idNumber;
}

int main(void){
    StanfordID id1("Alice", "alice123", 1001);
    StanfordID id2("Bob", "bob456", 1002);
    StanfordID id3("Alice", "alice123", 1001);

    std::cout << "id1 == id2: " << (id1 == id2) << "\n"; // false
    std::cout << "id1 != id2: " << (id1 != id2) << "\n"; // true
    std::cout << "id1 == id3: " << (id1 == id3) << "\n"; // true
    std::cout << "id1 < id2: " << (id1 < id2) << "\n";   // true
    std::cout << "id2 < id1: " << (id2 < id1) << "\n";   // false

    return 0; 
}
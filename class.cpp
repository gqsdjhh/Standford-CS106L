#include "class.h"
#include <iostream>
#include <string>

// StanfordID::StanfordID(std::string name, std::string sunet, int idNumber){
//     this->m_name = name;
//     this->m_sunet = sunet;
//     if(idNumber < 0){
//         std::cout << "Error: ID number cannot be negative. Setting to 0.\n";
//         this->m_idNumber = 0;
//     }
//     else{
//         this->m_idNumber = idNumber;
//     }
// }

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

int main(void){
    Circle c{5.0};

    std::cout << c.area();
}



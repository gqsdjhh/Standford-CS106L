#include <iostream>
#include <map>
#include <vector>
#include <tuple>
#include <string>

void maptest(){
    // Uniform initialization of a map
    std::map<std::string, int> ages{
        {"Alice", 25},
        {"Bob", 30},
        {"Charlie", 35}
    };
    // Accessing map elements
    std::cout << "Alice's age: " << ages["Alice"] << std::endl;
    std::cout << "Bob's age: " << ages.at("Bob") << std::endl;

    ages.insert(std::make_pair("Aavid", 10));
    ages.insert(std::make_pair("John", 32));

    for(auto i : ages){
        std::cout << i.first << ": " << i.second << "\n";
    }
}

void vectortest(){
    // Uniform initialization of a vector
    std::vector<int> numbers{1, 2, 3, 4, 5};
    // Accessing vector elements
    std::cout << "First number: " << numbers[0] << std::endl;
    std::cout << "Second number: " << numbers.at(1) << std::endl;

    numbers.push_back(6);
    numbers.push_back(7);

    for(auto i : numbers){
        std::cout << i << "\n";
    }
}

std::tuple<std::string, std::string, std::string> getClassInfo() {
    std::string className = "CS106L";
    std::string buildingName = "260-113";
    std::string language = "C++";
    return {className, buildingName, language};
 }

void tupletest() {
    // Structured binding to unpack tuple
    auto [className, buildingName, language] = getClassInfo();
    std::cout << "Come to " << buildingName << " and join us for " << className
              << " to learn " << language << "!" << std::endl;
}

int main() {
    // maptest();

    // vectortest();

    tupletest();
    
    return 0;
 }

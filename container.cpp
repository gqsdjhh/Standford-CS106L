#include <iostream>
#include <vector>
#include <deque>
#include <map>

using namespace std;

void vectortest(){
    vector<int> abc{1,2,3,4,5};

    for(auto &i : abc){
        i *= i;
        std::cout << i << "\n";
    }
    std::cout << "\n";

    abc.push_back(6);
    for(auto i : abc){
        std::cout << i << "\n";
    }
    std::cout << "\n";    

    abc.pop_back();
    for(auto i : abc){
        std::cout << i << "\n";
    }
    std::cout << "size: " << abc.size() << "\n";
}

void dequetest(){
    deque<int> abc{1,2,3,4,5};

    for(auto &i : abc){
        i *= i;
        std::cout << i << "\n";
    }
    std::cout << "\n";

    abc.push_front(6);
    for(auto i : abc){
        std::cout << i << "\n";
    }
    std::cout << "\n";    

    abc.pop_front();
    for(auto i : abc){
        std::cout << i << "\n";
    }
    std::cout << "size: " << abc.size() << "\n";    
}

void maptest(){
    map<int, string> abc
    {
        {1, "one"},
        {2, "two"},
        {3, "three"},
        {10, "ten"},
        {6, "six"},
        {0, "zero"}
    };

    for(auto &i : abc){
        std::cout << i.first << ": " << i.second << "\n";
    }
    std::cout << "\n";

    abc.erase(2);
    for(auto &i : abc){
        std::cout << i.first << ": " << i.second << "\n";
    }
    std::cout << "\n";

    std::cout << "size: " << abc.size() << "\n";
}

int main(void){
    // vectortest();

    // dequetest();

    // maptest();

    return 0;
}
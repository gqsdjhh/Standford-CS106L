#include <iostream>
#include <vector>
#include <deque>

using namespace std;

void vectortest(){
    vector<int> abc{1,2,3,4,5};

    for(auto &i : abc){
        i *= i;
        cout << i << "\n";
    }
    cout << "\n";

    abc.push_back(6);
    for(auto i : abc){
        cout << i << "\n";
    }
    cout << "\n";    

    abc.pop_back();
    for(auto i : abc){
        cout << i << "\n";
    }
    cout << "size: " << abc.size() << "\n";
}

void dequetest(){
    deque<int> abc{1,2,3,4,5};

    for(auto &i : abc){
        i *= i;
        cout << i << "\n";
    }
    cout << "\n";

    abc.push_front(6);
    for(auto i : abc){
        cout << i << "\n";
    }
    cout << "\n";    

    abc.pop_front();
    for(auto i : abc){
        cout << i << "\n";
    }
    cout << "size: " << abc.size() << "\n";    
}

int main(void){
    // vectortest();

    dequetest();


    return 0;
}
#include <iostream>
#include <utility>
#include <cmath>

using namespace std;

void fortest(){
    std::cout << "Hello World" << std::endl;
    std::cout << "Welcome to " << std::endl;
    
    for (auto c : "CS106L") {
        std::cout << c << std::endl;
    }
}

void pairtest(){
    pair<int, string> p1 {10, "Hello, pair"};
    cout << p1.first << " " << p1.second << "\n";
}

pair<bool, pair<double, double>> quadratic(double a, double b, double c){
// auto quadratic(double a, double b, double c){
    double discriminant = b * b - 4 *a * c;
    if (discriminant < 0) {
        return {false, {0, 0}};
    } else {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        return {true, {root1, root2}};
    }
}

int main() {
    // fortest();
    
    // pairtest();

    auto result = quadratic(1, -3, 2);
    if (result.first) {
        cout << "Roots: " << result.second.first << ", " << result.second.second << "\n";
    } else {
        cout << "No real roots\n";
    }

    return 0;
}
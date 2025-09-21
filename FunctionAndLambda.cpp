#include <iostream>
#include <vector>
#include <cctype>
#include <cmath>

bool isVowel(char c) {
    c = toupper(c);
    return c == 'A' || c == 'E' ||
           c == 'I' || c == 'O' ||
           c == 'U';
}

bool isPrime(size_t n) {
    if (n < 2) return false;
    for (auto i = 3; i <= sqrt(n); i++)
        if (n % i == 0) return false;
    return true;
}

bool isLessThan(int x, int y) {
    return x < y;
}

bool isDivisible(int n, int d) {
    return n % d == 0;
}

template <typename It, typename Pred>
It find(It first, It last, Pred pred) {
    for (auto it = first; it != last; ++it) {
        if (pred(*it)) return it;
    }
    return last;
}

int main() {
    std::vector<int> numbers = {10, 15, 23, 42, 55, 60, 73, 88, 91};

    // // Using function pointers
    // auto it1 = find(numbers.begin(), numbers.end(), isLessThan);
    // if (it1 != numbers.end())
    //     std::cout << "First number less than another: " << *it1 << std::endl;

    // auto it2 = find(numbers.begin(), numbers.end(), [](int n) { return isDivisible(n, 5); });
    // if (it2 != numbers.end())
    //     std::cout << "First number divisible by 5: " << *it2 << std::endl;

    // auto it3 = find(numbers.begin(), numbers.end(), isPrime);
    // if (it3 != numbers.end())
    //     std::cout << "First prime number: " << *it3 << std::endl;

    // // Using lambda expressions
    // auto it4 = find(numbers.begin(), numbers.end(), [](int n) { return n > 50; });
    // if (it4 != numbers.end())
    //     std::cout << "First number greater than 50: " << *it4 << std::endl;

    std::string text = "Hello World";
    auto it5 = find(text.begin(), text.end(), isVowel);
    if (it5 != text.end())
        std::cout << "First vowel in text: " << *it5 << std::endl;

    return 0;
}








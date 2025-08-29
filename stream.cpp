#include <sstream>
#include <fstream>
#include <iostream>

using namespace std;

void foo() {
    // partial Bjarne Quote
    std::string initial_quote = "Bjarne Stroustrup C makes it easy to shoot yourself in the foot"; 
    /// create a stringstream
    std::stringstream ss(initial_quote);
    // data destinations
    std::string first;
    std::string last;
    std::string language, extracted_quote;
    ss >> first >> last >> language;
    std::getline(ss, extracted_quote);
    std::cout << first << " " << last << " said this: " << language << " " << extracted_quote << std::endl;
}

void outputFileStreamExample(){
    std::ofstream ofs("hello.txt");
    if (ofs.is_open()) {
        ofs << "Hello CS106L!" << '\n';
    }
    ofs.close();
    ofs << "this will not get written";
    ofs.open("hello.txt");
    //注意：第二次打开文件时会默认清空原有内容，如果需要在原有内容后追加，应使用 ofs.open("hello.txt", std::ios::app);
    ofs << "this will though! It's open again";
}

int inputFileStreamExample() {
    std::ifstream ifs("input.txt");
    if (ifs.is_open()) {
        std::string line;
        std::getline(ifs, line);
        std::cout << "Read from the file: " << line << '\n';
    }
    if (ifs.is_open()) {
        std::string lineTwo;
        std::getline(ifs, lineTwo);
        std::cout << "Read from the file: " << lineTwo << '\n';
    }
    return 0;
}

int main(){
    // ostringstream oss("Hello, World!", stringstream::ate);
    // cout << oss.str() <<endl;

    // oss << 16.9 << " Ounce" << endl;
    // cout << oss.str() <<endl;

    // foo();

    // outputFileStreamExample();

    inputFileStreamExample();


    return 0;
}
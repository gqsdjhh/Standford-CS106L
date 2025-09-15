/*
 * CS106L Assignment 2: Marriage Pact
 * Created by Haven Whitney with modifications by Fabio Ibanez & Jacob Roberts-Baca.
 *
 * Welcome to Assignment 2 of CS106L! Please complete each STUDENT TODO
 * in this file. You do not need to modify any other files.
 *
 */

#include <fstream>
#include <sstream>
#include <iostream>
#include <queue>
#include <set>
#include <string>
#include <unordered_set>

std::string kYourName = "David Tian"; // Don't forget to change this!

/**
 * Takes in a file name and returns a set containing all of the applicant names as a set.
 *
 * @param filename  The name of the file to read.
 *                  Each line of the file will be a single applicant's name.
 * @returns         A set of all applicant names read from the file.
 *
 * @remark Feel free to change the return type of this function (and the function
 * below it) to use a `std::unordered_set` instead. If you do so, make sure
 * to also change the corresponding functions in `utils.h`.
 */
std::set<std::string> get_applicants(std::string filename) {
  // STUDENT TODO: Implement this function.
  std::ifstream ifs(filename);
    if (ifs.is_open()) {
      std::string name;
      std::set<std::string> applicants;
        
      while(std::getline(ifs, name)) {
        applicants.insert(name);
      } 

      return applicants;
    }
    else {
      std::cerr << "Could not open file" << std::endl;

      return {};
    }
}

std::string get_initials(const std::string& name) {
  std::istringstream iss(name);
    std::string word;
    std::string initials;

    while(iss >> word) {
        initials += toupper(word[0]);
    }

    return initials;
}

/**
 * Takes in a set of student names by reference and returns a queue of names
 * that match the given student name.
 *
 * @param name      The returned queue of names should have the same initials as this name.
 * @param students  The set of student names.
 * @return          A queue containing pointers to each matching name.
 */
std::queue<const std::string*> find_matches(std::string name, std::set<std::string>& students) {
  // STUDENT TODO: Implement this function.
  auto initials = get_initials(name);
    std::queue<const std::string*> matches;

    for(const auto& student : students) {
        if(get_initials(student) == initials) {
            matches.push(&student);
        }
    }

    return matches;
}

/**
 * Takes in a queue of pointers to possible matches and determines the one true match!
 *
 * You can implement this function however you'd like, but try to do something a bit
 * more complicated than a simple `pop()`.
 *
 * @param matches The queue of possible matches.
 * @return        Your magical one true love.
 *                Will return "NO MATCHES FOUND." if `matches` is empty.
 */
std::string get_match(std::queue<const std::string*>& matches) {
  // STUDENT TODO: Implement this function.
  while(!matches.empty()){
    if(*(matches.front()) == "David Tian")
    {
      return *(matches.front());
    }
    else
    {
      matches.pop();
    }
  }

  return "NO MATCHES FOUND";
}

/* #### Please don't remove this line! #### */
// #include "autograder/utils.hpp"

int main(void){
  std::set<std::string> applicants;
  applicants = get_applicants("students.txt");

  std::queue<const std::string*> matches = find_matches(kYourName, applicants);

  std::cout << get_match(matches) << "\n";

  return 0;
}

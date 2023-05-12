#include <iostream>
#include <vector>
#include <string>

// update program to have a menu
// options -> add new employee, list out employees (looping through the list and print to console employee's name and age, each in its own line), 
// and then an option to exit the program

struct Employee {
  std::string name;
  int age;
  Employee(std::string newName, int newAge){
    this->name = newName;
    this->age = newAge;
  };
};

int main() {
  std::cout << "Hello, Welcome to Employee Manager\n";
  std::vector<Employee> employees;
  while(true) {
    std::cout << "Enter employee name: \n";
    std::string name;
    std::cin >> name;
    std::cout << "Enter employee age: \n";
    int age;
    std::cin >> age;
    Employee employee = Employee(name, age);
    employees.push_back(employee);
    std::cout << employees.size() << "\n";
  }

  return 0;

};

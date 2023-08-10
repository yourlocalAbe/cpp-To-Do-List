#include <iostream>
#include <string>
#include <vector>

int main() {
std::vector<std::string> todo;
std::string addtodo;
std::string done;
int choice;
char redoChoice = 'y';

while (redoChoice == 'y' || redoChoice == 'Y') {
    std::cout << "1.Your To-Do List\n2.Want to add something To-Do in your list?\n";
    std::cin >> choice;

if (choice == 1) {
    if (todo.empty()) {
        std::cout << "You don't have anything To-Do\n";
    } else {
        std::cout << "Your To-Do List is :\n";
    for (size_t i = 0; i < todo.size(); ++i) {
    std::cout << "- " << todo[i] << std::endl;
    }
    }
    
} else if (choice == 2) {
    std::cout << "What's something that u have to do in your mind?\n";
    std::cin >> addtodo;
    todo.push_back(addtodo);
} else {
    std::cout << "please put the valid code based on the number above!\n";
} 

std::cout << "Do you want to do it again? (y/n): ";
std::cin >> redoChoice;
}
return 0;
}
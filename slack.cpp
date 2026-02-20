#include "clsStack.h"
#include <iostream>

int main() {
    // 🔢 Stack with integers
    clsStack<int> numbers;
    
    // Push elements onto the stack
    numbers.push(10);
    numbers.push(20);
    numbers.push(30);
    
    std::cout << "Top: " << numbers.Top() << std::endl;   // 30
    std::cout << "Size: " << numbers.Size() << std::endl; // 3
    
    // Pop element from top
    numbers.pop();
    std::cout << "After pop, Top: " << numbers.Top() << std::endl; // 20
    
    // Check if empty
    if (!numbers.Empty()) {
        std::cout << "Stack is not empty!" << std::endl;
    }
    
    // 📝 Stack with strings
    clsStack<std::string> names;
    names.push("Alice");
    names.push("Bob");
    names.push("Charlie");
    
    std::cout << "Top name: " << names.Top() << std::endl; // Charlie
    
    // Clear all elements
    names.clear();
    std::cout << "After clear, Empty: " << names.Empty() << std::endl; // 1 (true)
    
    return 0;
}
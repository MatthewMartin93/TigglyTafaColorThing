// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
std::string a;
int main() {
    std::cout << "What is your favorite color?" << std::endl;
    std::cin >> a;
//puts the string into lower case using google fix that i dont understand
    for (auto& c : a)
    {
        c = tolower(c);
    }

    if (a == "red") {
        std::cout << "Red" << std::endl;
        std::cout << "#FF0000" << std::endl;
        std::cout << "Cherry" << std::endl;
    }
    else if (a == "orange") {
        std::cout << "Orange" << std::endl; 
        std::cout << "#FFA500" << std::endl;
        std::cout << "Oranges" << std::endl;
    }
    else if (a == "yellow") {
        std::cout << "Yellow" << std::endl;
        std::cout << "#FFFF00" << std::endl;
        std::cout << "Bananas" << std::endl;
    }
    else if (a == "green") {
        std::cout << "Green" << std::endl;
        std::cout << "#00FF00" << std::endl;
        std::cout << "Kiwi" << std::endl;
    }
    else if (a == "blue") {
        std::cout << "Blue" << std::endl;
        std::cout << "#0000FF" << std::endl;
        std::cout << "Blueberry" << std::endl;
    }
    else if (a == "purple") {
        std::cout << "Purple" << std::endl;
        std::cout << "#A020F0" << std::endl;
        std::cout << "Grapes" << std::endl;
    }
    else {
        std::cout << "That isn't your favorite color because I said so" << std::endl;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

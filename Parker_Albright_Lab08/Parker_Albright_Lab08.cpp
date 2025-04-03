// Parker_Albright_Lab08.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream inputFile("C:\Users\4lett\OneDrive\Desktop\College2023spring\GameProg\Repositories\EECS348_Lab8test.txt"); // Open the file
    std::string line;

    if (inputFile.is_open()) {
        while (std::getline(inputFile, line)) {
            std::cout << line << std::endl; // Print each line
        }
        inputFile.close(); // Always close the file
    }
    else {
        std::cerr << "Unable to open file" << std::endl;
    }

    return 0;
}

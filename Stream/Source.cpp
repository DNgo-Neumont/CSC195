#pragma once
#include <iostream>
#include <fstream>


void Write(const std::string& text, std::ostream& ostream) {
	ostream << text;
}

int main() {
	std::string text = "Hello World!\n";

	std::cout << text;

	Write(text, std::cout);

	std::ofstream output("file1.txt");

	output << text;
	output.close();

}
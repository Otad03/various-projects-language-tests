#include <iostream>
#include <windows.h>
#include <string>

void type(const std::string& str) {
    for (size_t i = 0; i < str.length(); i++) {
        std::cout << str[i];
        Sleep(100); // Sleep for 100 milliseconds
    }
}

int main() {
    system("title <3");
    type("Help!");
    system("cls");
    type("Tulong! AH");
    system("cls");
    type("Nag iba ng anyo AAHGRGH");
    system("cls");
    type("di ma pigilang mag isiiipppp");
    system("cls");
    type("HAHAHHAHAHA");
    system("cls");
    type("Jeiel E. Gamboa");
    system("cls");
    type("BSIT First year");
    system("cls");

    return 0; // Return 0 to indicate successful execution
}

#include <iostream>

int main() {

    int grade;

    std::cout << "Enter the grade: ";
    std::cin >> grade;


    double gpa;

    if (grade >= 98 && grade <= 100) {
        gpa = 1.00;
    } else if (grade >= 95 && grade <= 97) {
        gpa = 1.25;
    } else if (grade >= 90 && grade <= 94) {
        gpa = 1.50;
    } else if (grade >= 87 && grade <= 89) {
        gpa = 1.75;
    } else if (grade >= 84 && grade <= 86) {
        gpa = 2.00;
    } else if (grade >= 81 && grade <= 83) {
        gpa = 2.25;
    } else if (grade >= 78 && grade <= 80) {
        gpa = 2.50;
    } else if (grade >= 76 && grade <= 77) {
        gpa = 2.75;
    } else if (grade == 75) {
        gpa = 3.00;
    } else {
        gpa = 5.00;
    }


    std::cout << "GPA: " << gpa << std::endl;

    return 0;
}

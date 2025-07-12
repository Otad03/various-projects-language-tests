#include <iostream>
#include <iomanip>

int main() {
    int choice;

    do {
std::cout << "\n----------------------------------------------------------------------------";
std::cout << "\n1. Arithmetic";
std::cout << "\n2. Salary Computation";
std::cout << "\n3. Grades Computation";
std::cout << "\n4. Odd or Even";
std::cout << "\n----------------------------------------------------------------------------";
std::cout << "\nChoose a whole number between 1 and 4 (Enter 0 to exit): ";
std::cin >> choice;

    switch (choice) {
            case 1: {
std::cout << "You chose option 1.\n";

    double num1, num2;

std::cout << "\nEnter the first whole number: ";
std::cin >> num1;
std::cout << "\nEnter the second whole number: ";
std::cin >> num2;

std::cout << "Sum: " << num1 + num2 << std::endl;
std::cout << "Difference: " << num1 - num2 << std::endl;
std::cout << "Product: " << num1 * num2 << std::endl;
std::cout << "Division: " << num1 / num2 << std::endl;

            break;
            }

            case 2: {
std::cout << "You chose option 2.\n";

    double hourlyRate, workHours;

std::cout << "Enter hourly rate: Pesos ";
std::cin >> hourlyRate;
std::cout << "Enter work hours: ";
std::cin >> workHours;

    double salary = hourlyRate * workHours;
    double grossIncome;
    double tax = 0.0, sss = 0.0, philHealth = 0.0, pagIbig = 0.0;

    if (salary > 30000) {
        tax = 0.12 * salary;
        sss = 0.045 * salary;
        philHealth = 0.02 * salary;
        pagIbig = 100.0;

        grossIncome = salary - tax - sss - philHealth - pagIbig;

std::cout << "Deductions:\n";
std::cout << "Tax: Pesos " << tax << " (" << (0.12 * 100) << "%)" << std::endl;
std::cout << "SSS: Pesos " << sss << " (" << (0.045 * 100) << "%)" << std::endl;
std::cout << "PhilHealth: Pesos " << philHealth << " (" << (0.02 * 100) << "%)" << std::endl;
std::cout << "PagIbig: Pesos " << pagIbig << " (Fixed)" << std::endl;

    } else if (salary >= 10000) {
        sss = 0.045 * salary;
        philHealth = 0.02 * salary;
        pagIbig = 100.0;

        grossIncome = salary - sss - philHealth - pagIbig;

std::cout << "Deductions:\n";
std::cout << "SSS: Pesos " << sss << " (" << (0.045 * 100) << "%)" << std::endl;
std::cout << "PhilHealth: Pesos " << philHealth << " (" << (0.02 * 100) << "%)" << std::endl;
std::cout << "PagIbig: Pesos " << pagIbig << " (Fixed)" << std::endl;

    } else {
        grossIncome = salary;
std::cout << "No deductions.\n";
    }

std::cout << std::fixed << std::setprecision(2);
std::cout << "Gross Income: Pesos " << salary << std::endl;
std::cout << "Net Income: Pesos " << grossIncome << std::endl;

            break;
            }

            case 3: {
std::cout << "You chose option 3.\n";

            int grade;

std::cout << "\nEnter your grade: ";
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
            } else if (grade >> 100) {
                gpa = 0;
            } else {
                gpa = 5.00;
            }

std::cout << "\nGrades to GPA(General Point Average)";
std::cout << "\n------------------------------------";
std::cout << "\nGPA: " << gpa << std::endl;
            break;
            }

            case 4: {
std::cout << "You chose option 4.\n";

    int number;

std::cout << "Enter a number: ";
std::cin >> number;

        if (number == 0) {
std::cout << "0 is neither odd nor even." << std::endl;

        } else if (number % 2 == 0) {
std::cout << number << " is even." << std::endl;

        } else {
std::cout << number << " is odd." << std::endl;
        }


            break;
            }

            case 0:
std::cout << "Exiting program. Thank You!\n";
                break;

            default:
std::cout << "MALI! DIBA 1 to 4?!\n";
        }
    } while (choice != 0);

    return 0;
}

//JEIEL GAMBOA NOVEMBER 30, 2023

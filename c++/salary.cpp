#include <iostream>
#include <iomanip>

int main() {
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

    return 0;
}

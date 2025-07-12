#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char usn[30];
    char name[30];
    char age[30];
    char gradelevel[30];
    char course[30];
    char address[30];
    char birthday[30];
    char birthplace[30];
    char subject1[30];
    double unit1;
    char subject2[30];
    double unit2;
    char subject3[30];
    double unit3;
    double l, k;
    double j, i;

    cout << "Enter USN: ";
    cin.getline(usn, sizeof(usn));
    cout << "Enter Name: ";
    cin.getline(name, sizeof(name));
    cout << "Enter Age: ";
    cin.getline(age, sizeof(age));
    cout << "Enter Grade Level: ";
    cin.getline(gradelevel, sizeof(gradelevel));
    cout << "Enter Course: ";
    cin.getline(course, sizeof(course));
    cout << "Enter Address: ";
    cin.getline(address, sizeof(address));
    cout << "Enter Birthday: ";
    cin.getline(birthday, sizeof(birthday));
    cout << "Enter Birthplace: ";
    cin.getline(birthplace, sizeof(birthplace));
    cout << "Enter Subject 1: ";
    cin.getline(subject1, sizeof(subject1));
    cout << "Enter Units: ";
    cin >> unit1;
    cin.ignore();
    cout << "Enter Subject 2: ";
    cin.getline(subject2, sizeof(subject2));
    cout << "Enter Units: ";
    cin >> unit2;
    cin.ignore();
    cout << "Enter Subject 3: ";
    cin.getline(subject3, sizeof(subject3));
    cout << "Enter Units: ";
    cin >> unit3;

    cout << "\n----------------------------------------------------------";

    l = (unit1 + unit2 + unit3);
    k = (l * 785.50);

    cout << "\n----------------------------------------------------------";
    cout << "\nSubject" << setw(20) << "Units";
    cout << "\n" << subject1 << setw(20) << unit1;
    cout << "\n" << subject2 << setw(20) << unit2;
    cout << "\n" << subject3 << setw(20) << unit3;
    cout << "\n----------------------------------------------------------";
    cout << "\nTotal Units:                    "<< l;
    cout << "\nTuition Fee:                    "<< k;
    cout << "\n----------------------------------------------------------";
    cout << "\nCash Payment: ";
    cin >> j;

    i = (j - k);

    cout << "Change: " << i;

    return 0;
}

#include <iostream>
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
    cin >> usn;
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter Grade Level: ";
    cin >> gradelevel;
    cout << "Enter Course: ";
    cin >> course;
    cout << "Enter Address: ";
    cin >> address;
    cout << "Enter Birthday: ";
    cin >> birthday;
    cout << "Enter Birthplace: ";
    cin >> birthplace;
    cout << "Enter Subject 1: ";
    cin >> subject1;
    cout << "Enter Units: ";
    cin >> unit1;
    cout << "Enter Subject 2: ";
    cin >> subject2;
    cout << "Enter Units: ";
    cin >> unit2;
    cout << "Enter Subject 3: ";
    cin >> subject3;
    cout << "Enter Units: ";
    cin >> unit3;
    cout << "\n----------------------------------------------------------";

    l = (unit1 + unit2 + unit3);
    k = (l * 785.50);

    cout << "\n----------------------------------------------------------";
    cout << "\nSubject" << "\t                      " << "Units";
    cout << "\n" << subject1 << "\t                     " << unit1;
    cout << "\n" << subject2 << "\t                     " << unit2;
    cout << "\n" << subject3 << "\t                     " << unit3;
    cout << "\n----------------------------------------------------------";
    cout << "\nTotal Units:                          " << l;
    cout << "\nTuition Fee:                          " << k;
    cout << "\n----------------------------------------------------------";
    cout << "\nCash Payment: ";
    cin >> j;

    i = (j - k);

    cout << "Change: " << i;

    return 0;
}

#include <iostream>
#include <cstring>
using namespace std;

class Person
{
    char name[64];
    int age;
    char address[64];

    float basic, hra, da, totalSalary;

public:

    // Parameterized constructor
    Person(const char n[], int a, const char ad[], float b)
    {
        strcpy(name, n);
        age = a;
        strcpy(address, ad);

        basic = b;
        hra = basic * 0.20;
        da = basic * 0.10;
        totalSalary = basic + hra + da;
    }

    // Inline function
    inline int getAge()
    {
        return age;
    }

    void salarySlip()
    {
        cout << "\n-------------------------";
        cout << "\n       SALARY SLIP";
        cout << "\n-------------------------";
        cout << "\nName       : " << name;
        cout << "\nAge        : " << age;
        cout << "\nAddress    : " << address;
        cout << "\nBasic      : " << basic;
        cout << "\nHRA        : " << hra;
        cout << "\nDA         : " << da;
        cout << "\nGross Salary: " << totalSalary;
        cout << "\n-------------------------\n";
    }
};

int main()
{
    Person p[10] =
    {
        Person("Amit", 22, "Kolkata", 30000),
        Person("Rahul", 25, "Delhi", 35000),
        Person("Rohan", 20, "Mumbai", 28000),
        Person("Priya", 24, "Pune", 32000),
        Person("Neha", 21, "Chennai", 29000),
        Person("Karan", 30, "Delhi", 40000),
        Person("Ankit", 27, "Kolkata", 36000),
        Person("Sneha", 23, "Pune", 31000),
        Person("Vivek", 26, "Mumbai", 33000),
        Person("Riya", 29, "Delhi", 38000)
    };

    int youngest = p[0].getAge();
    int eldest = p[0].getAge();

    for (int i = 1; i < 10; i++)
    {
        if (p[i].getAge() < youngest)
            youngest = p[i].getAge();

        if (p[i].getAge() > eldest)
            eldest = p[i].getAge();
    }

    cout << "Youngest Age = " << youngest << endl;
    cout << "Eldest Age = " << eldest << endl;

    for (int i = 0; i < 10; i++)
    {
        p[i].salarySlip();
    }

    return 0;
}
#include <iostream>
using namespace std;

class Student {
    private:
        string name;
        double grade;
    public:
        Student(string n, double g) {
            name = n;
            grade = g;
        }

        void displayInfo() {
            cout << "Name: " << name << endl;
            cout << "Grade: " << grade << endl;
        }
    };

int main() {
    Student student1("John", 8.5);
    student1.displayInfo();
    return 0;
}

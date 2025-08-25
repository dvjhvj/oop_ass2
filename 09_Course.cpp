#include <iostream>
using namespace std;

class Course {
    private:
        string courseName;
        string courseCode;
        int credits;
        string instructorName;
    public:
        Course() {}
        void setCourseName(string n) {courseName = n;}
        void setCourseCode(string c) {courseCode = c;}
        void setCredit(int cre) {credits = cre;}
        void setInstructorName(string isn) {instructorName = isn;}

        void displayInfo() {
            cout << "Course Name: " << courseName << endl;
            cout << "Course Code: " << courseCode << endl;
            cout << "Instructor: " << instructorName << endl;
            cout << "Credits: " << credits << endl;
        }

        bool isHighCredit() {
            return credits > 3;
        }

        bool isLabRequired() {
            return credits > 4; 
        }
}; 

int main() {
    Course course1;
    course1.setCourseName("Object Oriented Programming");
    course1.setCourseCode("CS202");
    course1.setCredit(4);
    course1.setInstructorName("Huynh Xuan Phung");

    course1.displayInfo();

    if (course1.isHighCredit()) {
        cout << "This is a high credit course." << endl;
    } else {
        cout << "This is not a high credit course." << endl;
    }

    if (course1.isLabRequired()) {
        cout << "This course requires a lab." << endl;
    } else {
        cout << "This course does not require a lab." << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

class Person {
    private:
        string name;
        int age;
        string address;
        string phoneNumber;
    public:
        Person() {}
        void setName(string n) {name = n;}
        void setAge(int a) {age = a;}
        void setAddress(string ad) {address = ad;}
        void setPhoneNumber(string p) {phoneNumber = p;}

        void displayInfo() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Address: " << address << endl;
            cout << "Phone Number: " << phoneNumber << endl;
        }

        bool isAdult() {
            return age >= 18;
        }

        void move(string newAddress) {
            address = newAddress;
            cout << "Address updated to: " << address << endl;
        }

        void greet() {
            cout << "Hello, my name is " << name << endl;
        }
};

int main() {
    Person person1;
    person1.setName("John Doe");
    person1.setAge(20);
    person1.setAddress("123 Main St");
    person1.setPhoneNumber("090-000-2345");

    person1.greet();
    person1.displayInfo();

    if (person1.isAdult()) {
        cout << "This person is an adult." << endl;
    } else {
        cout << "This person is not an adult." << endl;
    }

    person1.move("999 Akay St");
    
    return 0;
}

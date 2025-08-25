#include <iostream>
using namespace std;

class Car {
    private:
        string brand;
        int year;
    public: 
        Car (string brand, int year) {  // this-> là con trỏ đến đối tượng hiện tại vì brand ở public và private trùng tên nên mới có this->
            this->brand = brand;        // nếu không dùng this-> thì chỉ cần Car (string b, int y) { brand = b; year = y; }
            this->year = year;
        }

        void displayInfo() {
            cout << "Brand: " << brand << endl;
            cout << "Year: " << year << endl;
        }
};

int main() {
    Car car1("Toyota", 2020);
    car1.displayInfo();
    return 0;
}

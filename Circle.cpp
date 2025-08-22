#include <iostream>
#include <cmath>
using namespace std;

class Circle {
public:
    double radius;
    string color;

    double circumference() {
        return 2 * M_PI * radius;
    }

    double area() {
        return M_PI * radius * radius;
    }

    bool isValid() {
        return radius > 0;
    }

    void displayColor() {
        cout << "Color: " << color << endl;
    }
};

int main() {
    Circle circle1;

    // Nhập bán kính hợp lệ
    do {
        cout << "Nhap ban kinh hinh tron: ";
        cin >> circle1.radius;
        if (!circle1.isValid()) {
            cout << "Ban kinh khong hop le. Vui long nhap lai!" << endl;
        }
    } while (!circle1.isValid());

    // Nhập màu
    cout << "Nhap mau sac hinh tron: ";
    cin >> circle1.color;

    // Xuất kết quả
    cout << "Chu vi hinh tron: " << circle1.circumference() << " don vi" << endl;
    cout << "Dien tich hinh tron: " << circle1.area() << " don vi vuong" << endl;
    circle1.displayColor();

    return 0;
}

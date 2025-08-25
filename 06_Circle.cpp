#include <iostream>
#include <cmath>
using namespace std;

class Circle {
    private:
        double radius;
        string color;
    public:
        Circle() {}

        void setRadius(double r) {radius = r;}
        double getRadius () {return radius;}
        void setColor(string c) {color = c;}
        string getColor () {return color;}

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

        void input_Radius() {
            double r;
            cin >> r;
            setRadius(r);
        }

        void input_Color() {
            string c;
            cin >> c;
            setColor(c);
        }
};

int main() {
    Circle circle1;
    cout << "Nhap ban kinh hinh tron: ";
    circle1.input_Radius();

    while (!circle1.isValid()) {
        cout << "Ban kinh khong hop le. Vui long nhap lai: ";
        circle1.input_Radius();
    }
        
    cout << "Nhap mau sac hinh tron: ";
    circle1.input_Color();

    cout << "Chu vi hinh tron: " << circle1.circumference() << " don vi" << endl;
    cout << "Dien tich hinh tron: " << circle1.area() << " don vi vuong" << endl;
    circle1.displayColor();
    return 0;
    }

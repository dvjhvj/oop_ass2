#include <iostream>
using namespace std;

class Laptop {
    private:
        string brand;
        string model;
        int ram; //RAM tính bằng GB
        int storage; //ổ cứng tính bằng GB
        int gpu; // Since there are many different types of graphics cards, we simplify the GPU attribute as a performance score from 1 to 10 with 1 = very weak and 10 = very powerful
    public:
        Laptop() {}
        void setBrand(string br) {brand = br;}
        void setModel(string m) {model = m;}
        void setRam(int r) {ram = r;}
        void setStorage(int s) {storage = s;}
        void setGpu(int g) {gpu = g;}

        void displayInfo() {
            cout << "Brand: " << brand << endl;
            cout << "Model: " << model << endl;
            cout << "RAM: " << ram << " GB" << endl;
            cout << "Storage: " << storage << " GB" << endl;
        }

        void checkRAM(int requiredRAM) {
            if (ram >= requiredRAM) {
                cout << "This laptop has enough RAM to run the software." << endl;
            } else {
                cout << "This laptop does not have enough RAM to run the software." << endl;
            }
        }

        bool checkGPU() {
            return gpu >= 5; // Assuming a score of 5 or higher is sufficient for most applications
        }

        void upgradeRAM(int additionalRAM) {
            ram += additionalRAM;
            cout << "RAM upgraded to: " << ram << " GB" << endl;
        }
};

int main() {
    Laptop laptop1;
    laptop1.setBrand("Dell");
    laptop1.setModel("XPS 13");
    laptop1.setRam(8); // RAM 8 GB
    laptop1.setStorage(256); // ổ cứng 256GB
    laptop1.setGpu(6); // GPU performance score of 6

    laptop1.displayInfo();
    // Kiểm tra xem laptop có đủ RAM để chạy phần mềm yêu cầu 16GB RAM
    laptop1.checkRAM(16);
    // Kiểm tra GPU
    if (laptop1.checkGPU()) {
        cout << "This laptop has a sufficient GPU for most applications." << endl;
    } else {
        cout << "This laptop's GPU is not sufficient for most applications." << endl;
    }
    // Nâng cấp RAM thêm 8GB
    laptop1.upgradeRAM(8);
    laptop1.checkRAM(16);
    return 0;
}

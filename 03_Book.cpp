#include <iostream>
using namespace std;   

class Book {
    private: 
        string title;
        string author;
    public:
        Book (string t, string au) {    //nếu dùng get & set thì chỉ cần Book () {} là được có thêm thì cũng không sao
            title = t;
            author = au;
        }
        void setTitle(string t) {title = t;}            
        string getTitle() {return title;}
        void setAuthor(string au) {author = au;}
        string setAuthor () {return author;}

        void displayInfo() {
            cout << "Title: " << title << endl;
            cout << "Author: " << author << endl;
        }
    };

int main() {
    Book book1("","");
    book1.setTitle("C++ Programming");
    book1.setAuthor("Bjarne Stroustrup");
    book1.displayInfo();
    return 0;
}

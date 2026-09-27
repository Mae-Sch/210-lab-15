#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>

using namespace std;

class Movie {
    string writer;
    int year;
    string title;

    public:
    string getWriter() const {return writer;}
    void setWriter(string writer) {this->writer = writer;}

    int getYear() const {return year;}
    void setYear(int year) {this->year = year;}

    string getTitle() const {return title;}
    void setTitle(string title) {this->title = title;}

    void print() {
        cout << 
        setw(8) << "title: " << title << endl <<
        setw(8) << "release year: " << year << endl <<
        setw(8) << "written by: " << writer << endl;
    }
}

int main() {
    ifstream infile()

}
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
        setw(8) << "title: " << this->getTitle() << endl <<
        setw(8) << "release year: " << this->getYear() << endl <<
        setw(8) << "written by: " << this->getWriter() << endl;
    }
};

int main() {
    ifstream infile("movieData.txt");

    if(!infile.is_open()) {
        cout << "File could not be opened";
        return -1;
    }

    vector<Movie> movies;

    while(!infile.eof()) {
        Movie tempMovie;
        string tempWriter;
        int tempYear;
        string tempTitle;
        getline(infile, tempTitle);
        infile >> tempYear;
        getline(infile, tempWriter);

        tempMovie.setWriter(tempWriter);
        tempMovie.setYear(tempYear);
        tempMovie.setTitle(tempTitle);

        movies.push_back(tempMovie);
        cout << "Debug: movie read\n";
    }

    infile.close();

    for (int i = 0; i < movies.size(); ++i) {
        movies.at(i).print();
        cout << endl;
    }

    return 1;
}
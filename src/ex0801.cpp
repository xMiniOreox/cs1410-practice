#include <iostream>
#include <string>

using namespace std;

class Author {
private:
    string name; 
    string nationality;

public:
    Author(const string& name, const string& nationality);

    string getName() const {return name;}
    string getNationality() const {return nationality;}

    void setName(const string& name) {this->name = name;}
    void setNationality(const string& nat) {nationality = nat;}
};

class Book {
private:
    string title;
    int year;
    Author author;
public:
    Book(const string& title, int year, const Author& author);
    
};
int main() {

    return 0;
}
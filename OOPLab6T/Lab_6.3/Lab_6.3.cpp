#include <iostream>
#include <string>

using namespace std;

// Базовий клас - Сутність
class Entity {
protected:
    string name;

public:
    Entity(const string& n) : name(n) {}

    virtual void displayInfo() const = 0;
};

// Клас - Студент, успадковує властивості та методи з класу Entity
class Student : virtual public Entity {
protected:
    int studentId;

public:
    Student(const string& n, int id) : Entity(n), studentId(id) {}

    void displayInfo() const override {
        cout << "Student Info:" << endl;
        cout << "Name: " << name << endl;
        cout << "Student ID: " << studentId << endl;
    }
};

// Клас - Батько сімейства, успадковує властивості та методи з класу Entity
class FamilyHead : virtual public Entity {
protected:
    int familySize;

public:
    FamilyHead(const string& n, int size) : Entity(n), familySize(size) {}

    void displayInfo() const override {
        cout << "Family Head Info:" << endl;
        cout << "Name: " << name << endl;
        cout << "Family Size: " << familySize << endl;
    }
};

// Клас - Студент-батько сімейства, успадковує властивості та методи з класу Student та FamilyHead
class StudentFamilyHead : public Student, public FamilyHead {
private:
    string universityName;

public:
    StudentFamilyHead(const string& n, int id, int size, const string& uni) :
        Entity(n), Student(n, id), FamilyHead(n, size), universityName(uni) {}

    void displayInfo() const override {
        cout << "Student Family Head Info:" << endl;
        cout << "Name: " << name << endl;
        cout << "Student ID: " << studentId << endl;
        cout << "Family Size: " << familySize << endl;
        cout << "University Name: " << universityName << endl;
    }
};

int main() {
    // Створення об'єктів
    Student student("John Doe", 1234);
    FamilyHead familyHead("Jane Smith", 4);
    StudentFamilyHead studentFamilyHead("Mike Johnson", 5678, 3, "ABC University");

    // Виклик методу displayInfo для кожного об'єкта
    student.displayInfo();
    cout << endl;
    familyHead.displayInfo();
    cout << endl;
    studentFamilyHead.displayInfo();

    return 0;
}





#include <iostream>

using namespace std;

// Клас Батько
class Parent {
protected:
    int data;

public:
    Parent(int value) : data(value) {}

    void printData() {
        cout << "Parent data: " << data << endl;
    }
};

// Клас Дитина без віртуального успадкування
class ChildNoVirtual : public Parent {
private:
    int childData;

public:
    ChildNoVirtual(int value1, int value2) : Parent(value1), childData(value2) {}

    void printData() {
        cout << "Child (without virtual) data: " << data << ", " << childData << endl;
    }
};

// Клас Дитина з віртуальним успадкуванням
class ChildVirtual : public virtual Parent {
private:
    int childData;

public:
    ChildVirtual(int value1, int value2) : Parent(value1), childData(value2) {}

    void printData() {
        cout << "Child (with virtual) data: " << data << ", " << childData << endl;
    }
};

int main() {
    // Створення об'єктів
    Parent parent(10);
    ChildNoVirtual childNoVirtual(20, 30);
    ChildVirtual childVirtual(40, 50);

    // Виведення розмірів об'єктів
    cout << "Size of Parent: " << sizeof(parent) << " bytes" << endl;
    cout << "Size of ChildNoVirtual: " << sizeof(childNoVirtual) << " bytes" << endl;
    cout << "Size of ChildVirtual: " << sizeof(childVirtual) << " bytes" << endl;

    // Виклик методів для перевірки вірності даних
    parent.printData();
    childNoVirtual.printData();
    childVirtual.printData();

    return 0;
}


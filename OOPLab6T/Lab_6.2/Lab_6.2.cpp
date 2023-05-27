#include <iostream>

using namespace std;

// Абстрактний базовий клас Фігура
class Shape {
public:
    virtual double area() const = 0; // Віртуальна функція площа
};

// Похідний клас Прямокутник
class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double area() const {
        return width * height;
    }
};

// Похідний клас Коло
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const {
        return 3.14159 * radius * radius;
    }
};

// Похідний клас Прямокутний трикутник
class RightTriangle : public Shape {
private:
    double base;
    double height;

public:
    RightTriangle(double b, double h) : base(b), height(h) {}

    double area() const {
        return 0.5 * base * height;
    }
};

// Похідний клас Трапеція
class Trapezoid : public Shape {
private:
    double topLength;
    double bottomLength;
    double height;

public:
    Trapezoid(double tl, double bl, double h) : topLength(tl), bottomLength(bl), height(h) {}

    double area() const {
        return 0.5 * (topLength + bottomLength) * height;
    }
};

int main() {
    Rectangle rectangle(5, 3);
    Circle circle(4);
    RightTriangle triangle(4, 5);
    Trapezoid trapezoid(3, 7, 4);

    // Виведення площі об'єктів
    cout << "Rectangle area: " << rectangle.area() << endl;
    cout << "Circle area: " << circle.area() << endl;
    cout << "Right Triangle area: " << triangle.area() << endl;
    cout << "Trapezoid area: " << trapezoid.area() << endl;

    return 0;
}





#include<iostream>
#include<cmath>
using namespace std;

class Triangle {
private:
    float a, b, c;

public:
    Triangle(float side1, float side2, float side3) {
        a = side1;
        b = side2;
        c = side3;
    }

    string Triangletype() {
        float sides[3] = {a, b, c};
        if (pow(sides[0], 2) + pow(sides[1], 2) > pow(sides[2], 2))
            return "Acute";
        else if (pow(sides[0], 2) + pow(sides[1], 2) == pow(sides[2], 2))
            return "Right";
        else
            return "Obtuse";
    }
};

int main() {
    float side1, side2, side3;

    cout << "Enter the length of first side of triangle: ";
    cin >> side1;

    cout << "Enter the length of second side of triangle: ";
    cin >> side2;

    cout << "Enter the length of third side of triangle: ";
    cin >> side3;

    Triangle triangle(side1, side2, side3);

    string type = triangle.Triangletype();

    cout << "The triangle is " << type << endl;

    return 0;
}


/*
�ǽ� 1. �߻� Ŭ����
class Shape {
protected:
	virtual void draw() = 0;
};
1. Shape Ŭ������ ��ӹ޴� Circle Ŭ����, Rect Ŭ����, Triangle Ŭ������ �������ּ���.
2. ������ �̸��� ����ϴ� ���� ���� �Լ� draw() �޼ҵ带 �������ּ���.
*/

#include <iostream>

using namespace std;

class Shape {
protected: // Shape, Circle, Rect, Triangle ���� ����
	virtual void draw() = 0;
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Circle" << endl;
    }
};

class Rect : public Shape {
public:
    void draw() override {
        cout << "Rectangle" << endl;
    }
};

class Triangle : public Shape {
public:
    void draw() override {
        cout << "Triangle" << endl;
    }
};

int main() {
    Circle circle;
    Rect rect;
    Triangle triangle;

    cout << "[������ �̸�]" << endl;
    circle.draw();
    rect.draw();
    triangle.draw();

    return 0;
}
/*
실습 1. 추상 클래스
class Shape {
protected:
	virtual void draw() = 0;
};
1. Shape 클래스를 상속받는 Circle 클래스, Rect 클래스, Triangle 클래스를 구현해주세요.
2. 도형의 이름을 출력하는 순수 가상 함수 draw() 메소드를 구현해주세요.
*/

#include <iostream>

using namespace std;

class Shape {
protected: // Shape, Circle, Rect, Triangle 접근 가능
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

    cout << "[도형의 이름]" << endl;
    circle.draw();
    rect.draw();
    triangle.draw();

    return 0;
}
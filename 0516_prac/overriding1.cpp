/*
실습2. 오버라이딩 이해하기
1. 실습1에서 구현한 printInfo() 오버라이딩
1-1. Rectangle 클래스에서는 " 사각형의 넓이는 {넓이}" 출력
1-2. Triangle 클래스에서는 " 삼각형의 넓이는 {넓이}" 출력
*/

#include <iostream>

using namespace std;

class Shape {
protected: // Rectangle, Triangle 접근 가능
    float num_sides; // 변의 개수
    float base_length; // 변의 길이
    float height; // 높이

public:
    // 기본 생성자
    Shape() {}

    void setting(float num_sides, float base_length, float height) {
        this->num_sides = num_sides;
        this->base_length = base_length;
        this->height = height;
    }

    void printInfo() {
        cout << "넓이는 { " << base_length * height << " }" << endl;
    }
};

class Rectangle : public Shape {
private: // Rectangle에서만 사용 가능
    float Rec_height; // 높이

public:
    // 생성자
    Rectangle(float base_length, float height)
        : Rec_height(height) {
        setting(4, base_length, height);
    }

    float area() {
        return base_length * Rec_height;
    }

    void printInfo() {
        cout << "사각형의 넓이는 { " << area() << " }" << endl;
    }

};

class Triangle : public Shape {
private: // Triangle에서만 사용 가능
    float Tri_height; // 높이

public:
    // 생성자
    Triangle(float base_length, float height)
        : Tri_height(height) {
        setting(3, base_length, height);
    }

    float area() {
        return 0.5 * base_length * Tri_height;
    }

    void printInfo() {
        cout << "삼각형의 넓이는 { " << area() << " }" << endl;
    }

};

int main() {
    Rectangle rectangle(5, 10);
    Triangle triangle(3, 7);

    rectangle.printInfo();
    triangle.printInfo();

    rectangle.Shape::printInfo();
    triangle.Shape::printInfo();

    return 0;
}
// 자식 클래스에서 직접 초기화 (부모 클래스 생성자 이용 XX)

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
        cout << "변의 개수: " << num_sides << endl;
        cout << "밑변 길이: " << base_length << endl;
        cout << "높이: " << height << endl;
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
};

int main() {
    Rectangle rectangle(5, 10);
    Triangle triangle(3, 7);

    cout << "[ 사각형 정보 ]" << endl;
    rectangle.printInfo();
    cout << "넓이: " << rectangle.area() << endl;

    cout << "\n[ 삼각형 정보 ]" << endl;
    triangle.printInfo();
    cout << "넓이: " << triangle.area() << endl;

    return 0;
}
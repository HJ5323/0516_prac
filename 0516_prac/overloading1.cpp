/*
실습3. 오버로딩 이해하기
1. 실습 1에서 구현한 printInfo() 오버로딩
2. printInfo(int w, int h)라는 밑변의 길이와 높이를 입력받아서 넓이 출력하는 함수 구현
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

    void printInfo(int w, int h) {
        this->base_length = w;
        this->height = h;

        cout << "\n사각형의 넓이는 { " << w * h << " }" << endl;
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

    void printInfo(int w, int h) { 
        this->base_length = w;
        this->height = h;

        cout << "\n삼각형의 넓이는 { " << w * h * 0.5 << " }" << endl;
    }

};

int main() {
  
    int w, h;

    cout << "밑변의 길이를 입력하세요: ";
    cin >> w;
    cout << "높이를 입력하세요: ";
    cin >> h;

    Rectangle rectangle(w, h);
    Triangle triangle(w, h);

    rectangle.printInfo(w, h);
    triangle.printInfo(w, h);


    return 0;
}
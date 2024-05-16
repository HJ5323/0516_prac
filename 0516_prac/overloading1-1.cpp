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
        cout << "[넓이]" << endl;
    }
};

class Rectangle : public Shape {
private: // Rectangle에서만 사용 가능
    float Rec_height; // 높이

public:
    // 생성자
    Rectangle() {}

    float area() {
        return base_length * Rec_height;
    }

    void printInfo() { // 오버라이딩 : 상속, 부모 메소드, 출력 입력 이름 다 같아야한다.
        cout << "[사각형]" << endl;
    }

    void printInfo(int w, int h) { // 오버 로딩 : 메소드 같음, 식별자, 출력, 입력은 다름
        this->base_length = w;
        this->Rec_height = h;

        cout << "\n사각형의 넓이는 { " << area() << " }" << endl;
    }
    // printInfo(), printInfo(int w, int h) 두 개가 있어야 오버로딩이라고 한다
};

class Triangle : public Shape {
private: // Triangle에서만 사용 가능
    float Tri_height; // 높이

public:
    // 생성자
    Triangle() {}

    float area() {
        return 0.5 * base_length * Tri_height;
    }

    void printInfo() { // 오버라이딩
        cout << "[삼각형]" << endl;
    }

    void printInfo(int w, int h) {
        this->base_length = w;
        this->Tri_height = h;

        cout << "\n삼각형의 넓이는 { " << area() << " }" << endl;
    }

};

int main() {

    int w, h;

    cout << "밑변의 길이를 입력하세요: ";
    cin >> w;
    cout << "높이를 입력하세요: ";
    cin >> h;

    Rectangle rectangle;
    Triangle triangle;

    rectangle.printInfo(w, h);
    triangle.printInfo(w, h);


    return 0;
}
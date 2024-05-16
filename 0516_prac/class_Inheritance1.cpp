//실습 1. class 상속 사용해보기
//1. Shape라는 클래스를 만들어주세요. 이 클래스는 아래 조건을 만족해야합니다.
//    1-1. 변의 개수, 빝변의 길이를 저장하는 변수를 가지고 있어야 합니다.
//    1-2. 변의 개수와 밑변의 길이를 출력하는 printInfo()함수를 가지고 있어야 합니다.
//2. Shape 클래스를 상속 받는 Rectangle, Triangle 클래스를 만들어주세요. 이 클래스들은 아래 조건을 만족해야 합니다.
//    2-1. Rectangel 클래스에는 세로 길이를 의미하는 변수를 가지고 있어야 합니다.
//    2-2. Triangle 클래스에는 높이, 길이를 의미하는 변수를 가지고 있어야 합니다.
//    2-3. 두 클래스에는 각각 도형의 넓이를 구하고 출력하는 area() 함수를 가지고 있어야 합니다.
//    2-4. 두 클래스 모두 생성자에서 모든 변수에 값을 대입해주세요. (변, 밑변도 대입)
//3. 메인 함수에서 Triangle과 Rectangle 클래스를 통해 각각 인스턴스를 만들고 area() 함수를 실행시키도록 만들어 주세요.

// 자식 클래스에서 부모 클래스의 생성자를 호출해서 필드 변수 초기화

#include <iostream>

using namespace std;

class Shape {
protected: // Rectangle, Triangle 접근 가능
    float num_sides; // 변의 개수
    float base_length; // 변의 길이
    float height; // 높이

public:
   Shape(float num_sides, float base_length, float height) : num_sides(num_sides), base_length(base_length), height(height) {}

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
    Rectangle(float num_sides, float base_length, float height)
        : Shape(num_sides, base_length, height), Rec_height(height) {}

    float area() {
        return base_length * Rec_height;
    }
};

class Triangle : public Shape {
private: // Triangle에서만 사용 가능
    float Tri_height; // 높이

public:
    Triangle(float num_sides, float base_length, float height)
        : Shape(num_sides, base_length, height), Tri_height(height) {}

    float area() {
        return 0.5 * base_length * Tri_height;
    }
};

int main() {
    Rectangle rectangle(4, 5, 10);
    Triangle triangle(3, 3, 7);

    cout << "[ 사각형 정보 ]" << endl;
    rectangle.printInfo();
    cout << "넓이: " << rectangle.area() << endl;

    cout << "\n[ 삼각형 정보 ]" << endl;
    triangle.printInfo();
    cout << "넓이: " << triangle.area() << endl;

    return 0;
}
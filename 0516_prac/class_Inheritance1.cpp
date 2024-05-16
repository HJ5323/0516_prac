/*�ǽ� 1. class ��� ����غ���
1. Shape��� Ŭ������ ������ּ���. �� Ŭ������ �Ʒ� ������ �����ؾ��մϴ�.
    1-1. ���� ����, ������ ���̸� �����ϴ� ������ ������ �־�� �մϴ�.
    1-2. ���� ������ �غ��� ���̸� ����ϴ� printInfo()�Լ��� ������ �־�� �մϴ�.
2. Shape Ŭ������ ��� �޴� Rectangle, Triangle Ŭ������ ������ּ���. �� Ŭ�������� �Ʒ� ������ �����ؾ� �մϴ�.
    2-1. Rectangel Ŭ�������� ���� ���̸� �ǹ��ϴ� ������ ������ �־�� �մϴ�.
    2-2. Triangle Ŭ�������� ����, ���̸� �ǹ��ϴ� ������ ������ �־�� �մϴ�.
    2-3. �� Ŭ�������� ���� ������ ���̸� ���ϰ� ����ϴ� area() �Լ��� ������ �־�� �մϴ�.
    2-4. �� Ŭ���� ��� �����ڿ��� ��� ������ ���� �������ּ���. (��, �غ��� ����)
3. ���� �Լ����� Triangle�� Rectangle Ŭ������ ���� ���� �ν��Ͻ��� ����� area() �Լ��� �����Ű���� ����� �ּ���.*/

#include <iostream>

using namespace std;

class Shape {
protected: // Rectangle, Triangle ���� ����
    float num_sides; // ���� ����
    float base_length; // ���� ����

public:
    Shape(float num_sides, float base_length) : num_sides(num_sides), base_length(base_length) {}

    void printInfo() {
        cout << "���� ����: " << num_sides << endl;
        cout << "�غ� ����: " << base_length << endl;
    }
};

class Rectangle : public Shape {
private: // Rectangle������ ��� ����
    float Rec_height; // ����

public:
    // ������
    Rectangle(float num_sides, float base_length, float Rectangle_height)
        : Shape(num_sides, base_length), Rec_height(Rectangle_height) {}

    float area() {
        return base_length * Rec_height;
    }
};

class Triangle : public Shape {
private: // Triangle������ ��� ����
    float Tri_height; // ����

public:
    Triangle(float num_sides, float base_length, float Triangle_height)
        : Shape(num_sides, base_length), Tri_height(Triangle_height) {}

    float area() {
        return 0.5 * base_length * Tri_height;
    }
};

int main() {
    Rectangle rectangle(4, 5, 10);
    Triangle triangle(3, 3, 7);

    cout << "[ �簢�� ���� ]" << endl;
    rectangle.printInfo();
    cout << "����: " << rectangle.area() << endl;

    cout << "\n[ �ﰢ�� ���� ]" << endl;
    triangle.printInfo();
    cout << "����: " << triangle.area() << endl;

    return 0;
}
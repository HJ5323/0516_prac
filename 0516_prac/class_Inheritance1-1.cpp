// �ڽ� Ŭ�������� ���� �ʱ�ȭ (�θ� Ŭ���� ������ �̿� XX)

#include <iostream>

using namespace std;

class Shape {
protected: // Rectangle, Triangle ���� ����
    float num_sides; // ���� ����
    float base_length; // ���� ����
    float height; // ����

public:
     // �⺻ ������
    Shape() {}

    void setting(float num_sides, float base_length, float height) {
        this->num_sides = num_sides;
        this->base_length = base_length;
        this->height = height;
    }

    void printInfo() {
        cout << "���� ����: " << num_sides << endl;
        cout << "�غ� ����: " << base_length << endl;
        cout << "����: " << height << endl;
    }
};

class Rectangle : public Shape {
private: // Rectangle������ ��� ����
    float Rec_height; // ����

public:
    // ������
    Rectangle(float base_length, float height)
        : Rec_height(height) {
        setting(4, base_length, height);
    }

    float area() {
        return base_length * Rec_height;
    }
};

class Triangle : public Shape {
private: // Triangle������ ��� ����
    float Tri_height; // ����

public:
    // ������
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

    cout << "[ �簢�� ���� ]" << endl;
    rectangle.printInfo();
    cout << "����: " << rectangle.area() << endl;

    cout << "\n[ �ﰢ�� ���� ]" << endl;
    triangle.printInfo();
    cout << "����: " << triangle.area() << endl;

    return 0;
}
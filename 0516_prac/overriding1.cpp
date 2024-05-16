/*
�ǽ�2. �������̵� �����ϱ�
1. �ǽ�1���� ������ printInfo() �������̵�
1-1. Rectangle Ŭ���������� " �簢���� ���̴� {����}" ���
1-2. Triangle Ŭ���������� " �ﰢ���� ���̴� {����}" ���
*/

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
        cout << "���̴� { " << base_length * height << " }" << endl;
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

    void printInfo() {
        cout << "�簢���� ���̴� { " << area() << " }" << endl;
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

    void printInfo() {
        cout << "�ﰢ���� ���̴� { " << area() << " }" << endl;
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
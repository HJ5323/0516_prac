/*
�ǽ�3. �����ε� �����ϱ�
1. �ǽ� 1���� ������ printInfo() �����ε�
2. printInfo(int w, int h)��� �غ��� ���̿� ���̸� �Է¹޾Ƽ� ���� ����ϴ� �Լ� ����
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

    void printInfo(int w, int h) {
        this->base_length = w;
        this->height = h;

        cout << "\n�簢���� ���̴� { " << w * h << " }" << endl;
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

    void printInfo(int w, int h) { 
        this->base_length = w;
        this->height = h;

        cout << "\n�ﰢ���� ���̴� { " << w * h * 0.5 << " }" << endl;
    }

};

int main() {
  
    int w, h;

    cout << "�غ��� ���̸� �Է��ϼ���: ";
    cin >> w;
    cout << "���̸� �Է��ϼ���: ";
    cin >> h;

    Rectangle rectangle(w, h);
    Triangle triangle(w, h);

    rectangle.printInfo(w, h);
    triangle.printInfo(w, h);


    return 0;
}
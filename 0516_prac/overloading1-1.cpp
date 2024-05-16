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
        cout << "[����]" << endl;
    }
};

class Rectangle : public Shape {
private: // Rectangle������ ��� ����
    float Rec_height; // ����

public:
    // ������
    Rectangle() {}

    float area() {
        return base_length * Rec_height;
    }

    void printInfo() { // �������̵� : ���, �θ� �޼ҵ�, ��� �Է� �̸� �� ���ƾ��Ѵ�.
        cout << "[�簢��]" << endl;
    }

    void printInfo(int w, int h) { // ���� �ε� : �޼ҵ� ����, �ĺ���, ���, �Է��� �ٸ�
        this->base_length = w;
        this->Rec_height = h;

        cout << "\n�簢���� ���̴� { " << area() << " }" << endl;
    }
    // printInfo(), printInfo(int w, int h) �� ���� �־�� �����ε��̶�� �Ѵ�
};

class Triangle : public Shape {
private: // Triangle������ ��� ����
    float Tri_height; // ����

public:
    // ������
    Triangle() {}

    float area() {
        return 0.5 * base_length * Tri_height;
    }

    void printInfo() { // �������̵�
        cout << "[�ﰢ��]" << endl;
    }

    void printInfo(int w, int h) {
        this->base_length = w;
        this->Tri_height = h;

        cout << "\n�ﰢ���� ���̴� { " << area() << " }" << endl;
    }

};

int main() {

    int w, h;

    cout << "�غ��� ���̸� �Է��ϼ���: ";
    cin >> w;
    cout << "���̸� �Է��ϼ���: ";
    cin >> h;

    Rectangle rectangle;
    Triangle triangle;

    rectangle.printInfo(w, h);
    triangle.printInfo(w, h);


    return 0;
}
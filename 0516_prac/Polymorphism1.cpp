/*
�ǽ� 2
1. Candy Ŭ������ Chocolate Ŭ������ ������ּ���.
1-1. Candy Ŭ������ ��, ����, ��ǰ�̸�, ����ȸ�縦 �Ǹ��ϴ� ������ ������ �־�� �մϴ�.
1-2. Chocolate Ŭ������ ���, ����, ��ǰ�̸�, ����ȸ�縦 �ǹ��ϴ� ������ ������ �־�� �մϴ�.
1-3. Candy Ŭ������ Chocolate Ŭ������ ��� ���� ���� Ŭ����(Snack)���κ��� ����� �޾ƾ� �մϴ�.

2. main �Լ��� snackBasket�̶�� �̸��� �迭�� ������ּ���.
2-1. ������ ���� Candy Ŭ������ Chocolate Ŭ������ ���� �� ���� ��ü �����
2-2. ���� �� 4���� ��ü�� snackBasket�̶�� �迭�� �־��ּ���.
2-3. 4���� �ν��Ͻ��� ��� �־��ٸ� main �Լ����� �ݺ����� ���� 
	snackBasket �ȿ� ����ִ� ���ĵ��� ��ǰ �̸��� ������ּ���.
*/

#include <iostream>

using namespace std;

class Snack{
protected: // Snack, Candy, Chocolate Ŭ���� ���� ����
    string name; // ����
    float price; // ����
    string productName; // ��ǰ�̸�
    string manufacturer; // ������

public:
    Snack(string name, float price, string productName, string manufacturer)
        : name(name), price(price), productName(productName), manufacturer(manufacturer) {}

    string getName() { // protected�� ����� name�� ���� �����ϰ� ����
        return name;
    }

    string getProductName() {
        return productName;
    }
};

class Candy : public Snack {
private: // Candy Ŭ���������� ���� ����
    string flavor; // ��

public:
    Candy(string flavor, float price, string productName, string manufacturer)
        : Snack("Candy", price, productName, manufacturer), flavor(flavor) {}
};

class Chocolate : public Snack {
private: // Chocolate Ŭ���������� ���� ����
    string shape; // ���

public:
    Chocolate(string shape, float price, string productName, string manufacturer)
        : Snack("Chocolate", price, productName, manufacturer), shape(shape) {}
};

int main()
{
    Candy candy_1("sour", 200, "Bear", "mm");
    Candy candy_2("sweet", 150, "Smile", "ss");
    Chocolate chocolate_1("round", 1000, "Coin", "ww");
    Chocolate chocolate_2("bar", 1500, "Milk Bar", "aa");

    Snack* snackBasket[4] = { &candy_1, &candy_2, &chocolate_1, &chocolate_2 };

    cout << "[Snack Basket]" << endl;
    for (int i = 0; i < 4; i++) {
        cout << i + 1 << ". " << snackBasket[i]->getName() << " : " << snackBasket[i]->getProductName() << endl;
    }

    return 0;
	
}
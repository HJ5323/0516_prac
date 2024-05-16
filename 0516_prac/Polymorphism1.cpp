/*
실습 2
1. Candy 클래스와 Chocolate 클래스를 만들어주세요.
1-1. Candy 클래스는 맛, 가격, 상품이름, 제조회사를 의마하는 변수를 가지고 있어야 합니다.
1-2. Chocolate 클래스는 모양, 가격, 상품이름, 제조회사를 의미하는 변수를 가지고 있어야 합니다.
1-3. Candy 클래스와 Chocolate 클래스는 모두 같은 상위 클래스(Snack)으로부터 상속을 받아야 합니다.

2. main 함수에 snackBasket이라는 이름의 배열을 만들어주세요.
2-1. 위에서 만든 Candy 클래스와 Chocolate 클래스로 각각 두 개의 객체 만들기
2-2. 만든 총 4개의 객체를 snackBasket이라는 배열에 넣어주세요.
2-3. 4개의 인스턴스를 모두 넣었다면 main 함수에서 반복문을 통해 
	snackBasket 안에 들어있는 간식들의 상품 이름을 출력해주세요.
*/

#include <iostream>

using namespace std;

class Snack{
protected: // Snack, Candy, Chocolate 클래스 접근 가능
    string name; // 종류
    float price; // 가격
    string productName; // 상품이름
    string manufacturer; // 제조사

public:
    Snack(string name, float price, string productName, string manufacturer)
        : name(name), price(price), productName(productName), manufacturer(manufacturer) {}

    string getName() { // protected로 선언된 name에 접근 가능하게 해줌
        return name;
    }

    string getProductName() {
        return productName;
    }
};

class Candy : public Snack {
private: // Candy 클래스에서만 접근 가능
    string flavor; // 맛

public:
    Candy(string flavor, float price, string productName, string manufacturer)
        : Snack("Candy", price, productName, manufacturer), flavor(flavor) {}
};

class Chocolate : public Snack {
private: // Chocolate 클래스에서만 접근 가능
    string shape; // 모양

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

/*
       File:ProductMange.c
       Created: 24-03-06
       Author: 손진용
*/
#include <iostream>
#include <string>
using namespace std;

// 부모 클래스 Product 정의
class Product {
public:
    int id;
    double price;
    string producer;

    // 생성자 정의
    Product(int _id, double _price, const string& _producer) : id(_id), price(_price), producer(_producer) {}
};

// 자식 클래스 Book 정의
class Book : public Product {
public:
    string ISBN;
    string author;
    string title;

    // 생성자 정의
    Book(int _id, double _price, const string& _producer, const string& _ISBN, const string& _author, const string& _title)
        : Product(_id, _price, _producer), ISBN(_ISBN), author(_author), title(_title) {}
};

// 자식 클래스 Handphone 정의
class Handphone : public Product {
public:
    string model;
    int RAM;

    // 생성자 정의
    Handphone(int _id, double _price, const string& _producer, const string& _model, int _RAM)
        : Product(_id, _price, _producer), model(_model), RAM(_RAM) {}
};

// 자식 클래스 Computer 정의
class Computer : public Product {
public:
    string model;
    string cpu;
    int RAM;

    // 생성자 정의
    Computer(int _id, double _price, const string& _producer, const string& _model, const string& _cpu, int _RAM)
        : Product(_id, _price, _producer), model(_model), cpu(_cpu), RAM(_RAM) {}
};

int main() {
    Product* products[100] = { nullptr }; // 상품을 가리키는 포인터 배열 초기화

    int choice;
    do {
        // 메인 화면 출력
        cout << "------상품관리 프로그램-----" << endl;
        cout << "1. 상품추가  2. 상품출력  3. 상품검색  0. 종료" << endl;
        cout << "선택: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            int type;
            cout << "1. 책  2. 핸드폰  3. 컴퓨터" << endl;
            cout << "선택: ";
            cin >> type;

            int productId;
            cout << "상품 ID 입력: ";
            cin >> productId;

            if (productId < 0 || productId >= 100) {
                cout << "잘못된 상품 ID입니다." << endl;
                break;
            }

            switch (type) {
            case 1: {
                // 책 추가 로직
                double book_price;
                string book_producer, book_ISBN, book_author, book_title;
                cout << "책 정보 입력" << endl;
                cout << "가격: ";
                cin >> book_price;
                cout << "제조사: ";
                cin >> book_producer;
                cout << "ISBN: ";
                cin >> book_ISBN;
                cout << "작가: ";
                cin >> book_author;
                cin.ignore(); // 이전 입력 버퍼 비우기
                cout << "제목: ";
                getline(cin, book_title); // 공백 포함한 문자열 입력 받기
                products[productId] = new Book(productId, book_price, book_producer, book_ISBN, book_author, book_title);
                break;
            }
            case 2: {
                // 핸드폰 추가 로직
                double handphone_price;
                string handphone_producer, handphone_model;
                int handphone_RAM;
                cout << "핸드폰 정보 입력" << endl;
                cout << "가격: ";
                cin >> handphone_price;
                cout << "제조사: ";
                cin >> handphone_producer;
                cout << "모델: ";
                cin >> handphone_model;
                cout << "RAM: ";
                cin >> handphone_RAM;

                if (productId < 0 || productId >= 100) {
                    cout << "잘못된 상품 ID입니다." << endl;
                    break;
                }

                products[productId] = new Handphone(productId, handphone_price, handphone_producer, handphone_model, handphone_RAM);
                break;
            }
            case 3: {
                // 컴퓨터 추가 로직
                double computer_price;
                string computer_producer, computer_model, computer_cpu;
                int computer_RAM;
                cout << "컴퓨터 정보 입력" << endl;
                cout << "가격: ";
                cin >> computer_price;
                cout << "제조사: ";
                cin >> computer_producer;
                cout << "모델: ";
                cin >> computer_model;
                cout << "CPU: ";
                cin >> computer_cpu;
                cout << "RAM: ";
                cin >> computer_RAM;

                if (productId < 0 || productId >= 100) {
                    cout << "잘못된 상품 ID입니다." << endl;
                    break;
                }

                products[productId] = new Computer(productId, computer_price, computer_producer, computer_model, computer_cpu, computer_RAM);
                break;
            }
            default:
                cout << "잘못된 선택입니다." << endl;
                break;
            }
            break;
        }
        case 2: {
            // 상품 출력 로직
            cout << "상품 목록 출력" << endl;
            bool productsFound = false;
            for (int i = 0; i < 100; ++i) {
                if (products[i] != nullptr) {
                    cout << "상품 ID: " << products[i]->id << endl;
                    cout << "가격: " << products[i]->price << endl;
                    cout << "제조사: " << products[i]->producer << endl;
                    cout << endl;
                    productsFound = true;
                }
            }
            if (!productsFound) {
                cout << "등록된 상품이 없습니다." << endl;
            }
            break;
        }
        case 3: {
            // 상품 검색 로직
            int searchID;
            cout << "검색할 상품 ID 입력: ";
            cin >> searchID;

            if (searchID < 0 || searchID >= 100 || products[searchID] == nullptr) {
                cout << "해당 ID의 상품이 없습니다." << endl;
            }
            else {
                cout << "검색 결과" << endl;
                cout << "상품 ID: " << products[searchID]->id << endl;
                cout << "가격: " << products[searchID]->price << endl;
                cout << "제조사: " << products[searchID]->producer << endl;
                cout << endl;
            }
            break;
        }
        case 0:
            cout << "프로그램을 종료합니다." << endl;
            break;
        default:
            cout << "잘못된 선택입니다." << endl;
            break;
        }
    } while (choice != 0);

    // 동적으로 할당된 메모리 해제
    for (int i = 0; i < 100; ++i) {
        if (products[i] != nullptr) {
            delete products[i];
        }
    }

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
	string id, price, producer;
public:
	Product(string aid, string pri, string produ)
	{
		this->id = aid;
		this->price = pri;
		this->producer = produ;
	}
	virtual void Info() = 0;
	string getId()
	{
		return id;
	}
	string getPrice()
	{
		return price;
	}
	string getProducer()
	{
		return producer;
	}
};

class Book : public Product
{
private:
	string ISBN, author, title;
public:
	Book(string aid, string pri, string produ, string IS, string aut, string tit) : Product(aid, pri, produ)
	{
		this->ISBN = IS;
		this->author = aut;
		this->title = tit;
	}
	string getISBN()
	{
		return ISBN;
	}
	string getAuthor()
	{
		return author;
	}
	string getTitle()
	{
		return title;
	}
	void Info();
};
void Book::Info()
{
	cout << "id: " << getId() << endl;
	cout << "price: " << getPrice() << endl;
	cout << "producer: " << getProducer() << endl;
	cout << "ISBN: " << ISBN << endl;
	cout << "author: " << author << endl;
	cout << "title: " << title << endl;
}

class Handphone : public Product
{
private:
	string model, RAM;
public:
	Handphone(string aid, string pri, string produ, string mod, string RA) : Product(aid, pri, produ)
	{
		this->model = mod;
		this->RAM = RA;
	}
	void Info();
};
void Handphone::Info()
{
	cout << "id: " << getId() << endl;
	cout << "price: " << getPrice() << endl;
	cout << "producer: " << getProducer() << endl;
	cout << "model: " << model << endl;
	cout << "RAM: " << RAM << endl;
}

class Computer : public Product
{
private:
	string model, cpu, RAM;
public:
	Computer(string aid, string pri, string produ, string mod, string cp, string RA) : Product(aid, pri, produ)
	{
		this->model = mod;
		this->cpu = cp;
		this->RAM = RA;
	}
	void Info();
};
void Computer::Info()
{
	cout << "id: " << getId() << endl;
	cout << "price: " << getPrice() << endl;
	cout << "producer: " << getProducer() << endl;
	cout << "model: " << model << endl;
	cout << "cpu: " << cpu << endl;
	cout << "RAM: " << RAM << endl;
}

int main() {
	Product* p[100];
	int i = 0;
	string id, price, producer, ISBN, author, title, model, RAM, cpu;
	cout << "----- 상품관리 프로그램 -----" << endl;
	while (true)
	{
		cout << "1.상품추가  2.상품출력  3.상품검색  0.종료";
		int temp1 = 0, temp2 = 0;
		cin >> temp1;
		if (temp1 == 1)
		{
			cout << "1.Book  2.Handphone  3.Computer";
			cin >> temp2;
			cin.ignore();
			if (temp2 == 1)
			{
				cout << "id: "; getline(cin, id);
				cout << "price: "; getline(cin, price);
				cout << "producer: "; getline(cin, producer);
				cout << "model: "; getline(cin, model);
				cout << "author: "; getline(cin, author);
				cout << "title: "; getline(cin, title);
				Book* b = new Book(id, price, producer, model, author, title);
				
				p[i] = b;
				i++;
			}
			else if (temp2 == 2)
			{
				cout << "id: "; getline(cin, id);
				cout << "price: "; getline(cin, price);
				cout << "producer: "; getline(cin, producer);
				cout << "model: "; getline(cin, model);
				cout << "RAM: "; getline(cin, RAM);
				Handphone* h = new Handphone(id, price, producer, model, RAM);
				p[]
			}
			else if (temp2 == 3)
			{
				cout << "id: "; getline(cin, id);
				cout << "price: "; getline(cin, price);
				cout << "producer: "; getline(cin, producer);
				cout << "ISBN: "; getline(cin, ISBN);
				cout << "cpu: "; getline(cin, cpu);
				cout << "RAM: "; getline(cin, RAM);
				Computer* c = new Computer(id, price, producer, ISBN, cpu, RAM);

			}
		}
		else if (temp1 == 2)
		{
			cout << "1.Book  2.Handphone  3.Computer";
			cin >> temp2;
			if (temp2 == 1)
			{
				
			}

		}
		else if (temp1 == 0)
		{
			break;
		}
	}
}
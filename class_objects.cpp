#include <iostream>
#include <string.h>
using namespace std;
class Car {

private:
	int price;

public:
	int model;
	char name[20];
	float discount(int d) {
		float x = d / 100;
		return price * (1 - x);

	}
	int get_price(int p)
	{
		price = p;
		return price;
	}

};
int main() {
	Car c;
	int p, m;
	int d;
	char n[20];
	cin >> p >> m >> d >> n;
	//c.price = p;

	c.model = m;
	strcpy(n, c.name);
	cout << c.get_price(p) << endl;
	cout << "Befor Discount:" << endl;
	cout << c.name << " " << c.model << " " << " " << endl;
	//cout << "discounted price = " << c.discount(d) << endl;
}
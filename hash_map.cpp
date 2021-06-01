#include <iostream>
#include <cstring>
#include "hashing.h"
using namespace std;
int main() {

	Hashtable<int>h;

	h.insert("BurgerPizza", 150);
	h.insert("Chowmien", 30);
	h.insert("Pasta", 50);
	h.insert("Hakka", 40);
	h.insert("Happy", 40);

	h.print();
	int ans = h.search("Hakka");
	if (ans == -1)
	{
		cout << "Not Found" << endl;
	}
	else
	{
		cout << ans << endl;
	}

	h.erase("Hakka");
	h.print();

}
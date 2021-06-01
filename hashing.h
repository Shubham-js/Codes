#include <iostream>
#include<cstring>
using namespace std;
template<typename T>
class Node {
public:
	string key;
	T value;

	Node<T>*next;

	Node(string key, T val)
	{
		this->key = key;
		value = val;
		next = NULL;
	}
	~Node() {
		if (next != NULL)
		{
			delete next;
		}
	}

};
template<typename T>
class Hashtable {



	int table_size;
	int current_size;
	Node<T>**table;


	int hashingfunction(string key)
	{
		int idx = 0;
		int p = 1;;
		for (int i = 0; i < key.length() ; ++i)
		{
			idx = idx + ((key[i] * p) % table_size);
			idx = idx % table_size;
			p = (p * 27) % table_size;
		}
		return idx;
	}


public:
	Hashtable(int t = 10)
	{
		table_size = t;
		current_size = 0;
		table = new Node<T>*[table_size];
		for (int i = 0; i < table_size; ++i)
		{
			table[i] = NULL;
		}
	}





	void insert(string key, int value)
	{
		int idx = hashingfunction(key);
		Node<T>*n = new Node<T>(key, value);
		n->next = table[idx];
		table[idx] = n;
		current_size++;

	}
	void print() {
		for (int i = 0; i < table_size; ++i)
		{
			cout << "Bucket " << i << " -->";
			Node<T>*temp = table[i];
			while (temp != NULL)
			{
				cout << temp->key;
				temp = temp->next;
			}
			cout << endl;
		}
	}

	T search(string key)
	{
		int idx = hashingfunction(key);


		Node<T>*temp = table[idx];
		while (temp != NULL)
		{
			if (temp->key == key)
			{
				return temp->value;
			}
			temp = temp->next;
		}
		return -1;
	}


	void erase(string key) {
		int idx = hashingfunction(key);
		Node<T>*temp = table[idx];
		if (temp->key == key) {
			table[idx] = temp->next;
			temp->next = NULL;
			delete temp;
			current_size--;
			return;
		}
		while (temp != NULL) {
			if (temp->next->key == key) {
				Node<T>*ptr = temp->next;
				temp->next = ptr->next;
				ptr->next = NULL;
				delete ptr;
				current_size--;
				return;
			}
			temp = temp->next;
		}
	}

};

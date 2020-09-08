#include <iostream>
#include <stdlib.h>>
#define MAX_SIZE 100
using namespace std;

class Vector {
private:
	int item[MAX_SIZE];
	int size;
public:
	Vector();
	Vector(int);
	Vector(const Vector&);
	~Vector();
	void setSize(int);
	int getSize()const;
	bool operator==(const Vector&)const;
	bool operator!=(const Vector&)const;
	int& operator[](int);
	int operator[](const int)const;
	void operator()(int, int);
	Vector operator++();
	Vector operator++(int);
	void pushback(int);
	friend ostream& operator<<(ostream&, const Vector&);
	friend istream& operator>>(istream&, Vector&);
};

Vector::Vector() {}
Vector::Vector(int s) {
	this->size = s;
}
Vector::Vector(const Vector& rho) {
	int item[MAX_SIZE];
	this->size = rho.size;
}
Vector::~Vector() {}

void Vector::setSize(int s) {
	this->size = s;
}
int Vector::getSize()const {
	return size;
}

bool Vector::operator==(const Vector& rho)const {
	if (this->size == rho.size)
		return false;
	for (int i = 0;i < size;i++)
		if (this->item[i] != rho.item[i])
			return false;
	return true;
}
bool Vector::operator!=(const Vector& rho)const {
	return !(*this == rho);
}

int& Vector::operator[](int index) {
	if (index < 0 || index > this->size - 1) {
		cout << "Error: subscript" << index << "is outside boundaries." << endl;
		_Exit(0);
	}
	return item[index];
}

int Vector::operator[](const int index)const {
	if (index < 0 || index > this->size - 1) {
		cout << "Error: subscript" << index << "is outside boundaries." << endl;
		_Exit(0);
	}
	return item[index];
}

void Vector::operator()(int index, int v) {
	this->item[index] = v;
}

Vector Vector::operator++() {
	Vector temp;
	this->size++;
	temp.size = this->size;
	return temp;
}
Vector Vector::operator++(int) {
	Vector temp;
	temp.size = this->size;
	this->size++;
	return temp;
}

void Vector::pushback(int v) {
	static int x = 0;
	if (x >= size) {
		int newSize = size * 2;
		int temp[newSize];
		for (int i = 0;i < size;i++)
			temp[i] = item[i];
		int item[newSize];
		for (int i = 0;i < size;i++)
			item[i] = temp[i];
		this->size = newSize;
	}
	item[x++] = v;
}

ostream& operator<<(ostream& out, const Vector& rho) {
	out << "[";
	for (int i = 0;i < rho.size;i++) {
		if (i == rho.size - 1)
			out << rho.item[i];
		else
			out << rho.item[i] << ",";
	}
	out << "]";
	return out;
}
istream& operator>>(istream& in, Vector& rho) {
	cout << "Input: ";
	int v;
	in >> v;
	rho.pushback(v);
	return in;
}






int main()
{
	Vector v1(3), v2;
	v1.pushback(55);
	v1.pushback(88);
	v1.pushback(88);

	v2 = v1;
	std::cin >> v1;
	std::cout << v1;
	std::cout << v2;
	return 0;
}

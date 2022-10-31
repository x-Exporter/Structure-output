#include <iostream>

using namespace std;

struct Adress
{
	string _city;
	string _street;
	int _house_number;
	int _flat_number;
	int _index;
};

void Print(Adress &a)
{
	cout << "Город: " << a._city << "\nУлица: " << a._street << "\nНомер дома: " << a._house_number << "\nНомер квартиры: " << a._flat_number << "\nИндекс: " << a._index << "\n\n";
};

int main()
{
	setlocale(LC_ALL, "ru");
	Adress a;
	Adress b;
	a = { "Москва","Арбат",12,8,123456 };
	b = { "Ижевск","Пушкина",59,143,953769 };
	Print(a);
	Print(b);
}

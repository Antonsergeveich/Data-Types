#include<iostream>
using namespace std;

void main()



{
	setlocale(LC_ALL, "Russian");
#if defined ZADACHA1
	cout << "\t\t\t\t\t������ 1\n";
	cout << "\t\t\t\t�������������� ����� � �������� ������\n" << endl;
	double fractional_number, kop;
	int grn;
	cout << "������� ������� �����\n" << endl;
	cin >> fractional_number;
	cout << fractional_number << " ���. - ���" << endl;
    grn = fractional_number;
	kop = (fractional_number - grn)*100;
	cout << grn << " ������ " << endl;
	cout << kop << " ������ " << endl;
	cout << "---------------------------\n";
#endif
	
#if defined ZADACHA2
	cout << "\t\t\t\t\t������ 2\n" << endl;
	cout << "\t\t\t\t���������� ��������� �������.\n" << endl;
	cout << "������� �������� ������:\n";
	double book_price, pencil_price, final_price;
	int quantity_book, quantity_pencil;
	cout << "���� ������� (���.)\n";
	cin >> book_price;
	cout << "���������� ��������\n";
	cin >> quantity_book;
	cout << "���� ���������\n";
	cin >> pencil_price;
	cout << "���������� ����������\n";
	cin >> quantity_pencil;
	final_price = (book_price * quantity_book) + (pencil_price * quantity_pencil);
	cout << "��������� �������\n" << final_price << "���." << endl;
	cout << "---------------------------\n";
#endif
	
#if defined ZADACHA3
	cout << "\t\t\t\t\t������3\n"<<endl;
	cout << "\t\t\t\t���������� ��������� �������.\n"<<endl;
	cout << "������� �������� ������:\n"<<endl;
	double Price_book, Cover_price, Final_price;
	int Number_of_sets;
	cout << "���� ������� (���.)\n";
	cin >> Price_book;
	cout << "���� ������� (���.)\n";
	cin >> Cover_price;
	cout << "���������� ���������� (��.)\n";
	cin >> Number_of_sets;
	Final_price = (Price_book + Cover_price) * Number_of_sets;
	cout << "��������� �������:\n" << Final_price << " ���." << endl;
	cout << "---------------------------\n";
#endif
	
#if defined ZADACHA4
	cout << "\t\t\t\t\t������4\n"<<endl;
	cout << "\t\t\t\t���������� ��������� ������� �� ���������� �� ���� (���� � �������)\n" << endl;
	cout << "�������� ������:\n" << endl;
	double Fuel_consumption, The_price_of_gasoline;
	float  Distance_to_the_cottage;
	int The_price_of_the_trip,kopeiki;
	cout << "���������� �� ���� (��.)\n";
	cin >> Distance_to_the_cottage;
	cout << "������ ������� ������ �� 100 ��. �������\n";
	cin >> Fuel_consumption;
	cout << "���� ����� ������� (���.)\n";
	cin >> The_price_of_gasoline;
	The_price_of_the_trip = ((Distance_to_the_cottage / 100 * Fuel_consumption) * 2) * The_price_of_gasoline;
	kopeiki = ((((Distance_to_the_cottage / 100 * Fuel_consumption) * 2) * The_price_of_gasoline) - The_price_of_the_trip)*100;
	cout << "������� �� ���� � ������� �������� �: " << The_price_of_the_trip << " ���. " << kopeiki << " ������" << endl;
#endif









}


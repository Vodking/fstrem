#include<iostream>
#include<cstdlib>
#include<fstream>
#include<Windows.h>
#include<string>




int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	std::ofstream file;
	std::string path = "Document.txt";
	std::string pathSal = "Salary.txt";
	std::string pathRating = "Rating.txt";

	std::string name;
	std::string prof;
	std::string dumpl;
	
	int age;
	int choice;

	float yuan;
	
	while (true)
	{
		std::cout << "������� � ����� ���� �� ������ �������� ������\n";
		std::cout << "1 - Document.txt 2 - Salary.txt 3 - Rating.txt 0 - �����: ";
		do
		{
			std::cin >> choice;
		} while (choice > 3 || choice < 0);
		if (choice == 0)
		{
			break;
		}
		std::cin.ignore(32000, '\n');
		std::cout << "\n������� ���� ��� � �������: ";
		std::getline(std::cin, name);
		std::cout << "\n������� ��� �������: ";
		std::cin >> age;
		std::cout << "\n������� ���� ������� ���������: ";
		std::cin.ignore(32000, '\n');
		std::getline(std::cin, prof);

		std::cout << "\n������� ����� �� ������ ������ �������� �������: ";
		std::getline(std::cin, dumpl);
		std::cout << "\n������� ������� ����� ���� � ������: ";
		std::cin >> yuan;


	if (choice == 1)
	{
		file.open(path, std::ofstream::app);
	}
	else if (choice == 2)
	{
		file.open(pathSal, std::ofstream::app);
	}
	else if (choice == 3)
	{
		file.open(pathRating, std::ofstream::app);
	}

	
	if (!file.is_open())
	{
		std::cerr << "Error";
	}
	else
	{
		file << name << "\n" << age << "\n" << prof << "\n" << dumpl << "\n" << yuan << "\n\n";
	}
	file.close();
		
	}


	
	

	
	return 0;
}
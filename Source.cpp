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
	/*
	std::ofstream file;
	std::string path = "Document.txt";
	std::string pathSal = "Salary.txt";
	std::string pathRating = "Rating.txt";

	std::string name;
	std::string prof;
	std::string dumpl;
	
	char what;

	int age;
	int choice;

	float yuan;
	
	while (true)
	{
		std::cout << "¬ведите в каком файл вы хотите записать данные\n";
		std::cout << "1 - Document.txt 2 - Salary.txt 3 - Rating.txt 0 - ¬ыйти: ";
		do
		{
			std::cin >> choice;
		} while (choice > 3 || choice < 0);
		if (choice == 0)
		{
			break;
		}
		std::cin.ignore(32000, '\n');
		std::cout << "\n¬ведите ваше им€ и фамилию: ";
		std::getline(std::cin, name);
		std::cout << "\n¬ведите ваш возраст: ";
		std::cin >> age;
		std::cout << "\n¬ведите вашу будущую проффесию: ";
		std::cin.ignore(32000, '\n');
		std::getline(std::cin, prof);

		std::cout << "\n¬ведите ответ на вопрос почему пельмени вкусные: ";
		std::getline(std::cin, dumpl);
		std::cout << "\n¬ведите сколько сто€т юани в рубл€х: ";
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
	*/
	
	std::ifstream fin;
	std::ofstream file;
	std::string newpath = "Stix.txt";
	std::string path = "Document.txt";
	int size;
	char sym;
	std::string data;

	std::cout << "¬ведите количество символов дл€ слова: ";
	std::cin >> size;


	fin.open(path);
	file.open(newpath);
	if (!fin.is_open())
	{
		std::cerr << "Error";
	}
	else
	{
		
		
		
		while (!fin.eof())
		{
			data = "";
			while (fin.get(sym))
			{
				if (sym != ',' && sym != '.' && sym != 'Ч' && sym != '!' && sym != '-')
				{
					if (sym == ' ' || sym == '\n')
					{
						if (data.size() >= size)
						{
							file << data << "\n";
						}
						data = "";
					}
					else
					{
						data += sym;
					}
					
				}
				
			}
			std::cout << data << "\n";



			//data = "";
			//std::getline(fin, data);
			//size = data.size();
			//std::cout << size << '\n';
		}
	}
	file.close();
	fin.close();

	return 0;
}
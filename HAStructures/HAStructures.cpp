#include <iostream>
#include <string>

struct movie {
	std::string title = "none";
	int year = 0;
	std::string genre = "none";
	int duration = 0;
	int price = 0;
};

void showMovie(const movie& MV) {
	std::cout << "Название:               " << MV.title << std::endl;
	std::cout << "Год выхода:             " << MV.year<< std::endl;
	std::cout << "Жанр:                   " << MV.genre << std::endl;
	std::cout << "Продолжительность, мин: " << MV.duration << std::endl;
	std::cout << "Цена, руб:              " << MV.price << std::endl;
	std::cout << "------------------------" << std::endl; //Для разделения
}

void expensive(const movie& MV1, const movie& MV2, const movie& MV3) {
	int max = 0;
	if (MV1.price > MV2.price && MV1.price > MV3.price) {
		max = MV1.price;
		std::cout << MV1.title << std::endl;
	} else
		if (MV2.price > MV1.price && MV2.price > MV3.price) {
			max = MV2.price;
			std::cout << MV2.title << std::endl;
		}
		else
			if (MV3.price > MV1.price && MV3.price > MV2.price) {
				max = MV3.price;
				std::cout << MV3.title << std::endl;
			}
}

void updateInfo(const movie& MV) {
	movie tmp;
	tmp = MV;
	std::cout << "Выберите, какую информацию о фильме хотите обновить:\n";
	std::cout << "1. Название;\n";
	std::cout << "2. Год выхода;\n";
	std::cout << "3. Жанр;\n";
	std::cout << "4. Продолжительность;\n";
	std::cout << "5. Цена.\n";
	std::cout << "Ввод -> ";
	unsigned int select;
	std::cin >> select;
	switch (select) {
		case 1:
			std::cout << "Введите новое название фильма -> ";
			std::cin.ignore();
			std::getline(std::cin, tmp.title);
			std::cout << "Информация обновлена.\n\n";
			break;
		case 2:
			std::cout << "Введите новый год выхода фильма -> ";
			std::cin >> tmp.year;
			std::cout << "Информация обновлена.\n\n";
			break;
		case 3:
			std::cout << "Введите новый жанр фильма -> ";
			std::cin.ignore();
			std::getline(std::cin, tmp.genre);
			std::cout << "Информация обновлена.\n\n";
			break;
		case 4:
			std::cout << "Введите новую продолжительность фильма -> ";
			std::cin >> tmp.duration;
			std::cout << "Информация обновлена.\n\n";
			break;
		case 5:
			std::cout << "Введите новую цену фильма, в рублях -> ";
			std::cin >> tmp.price;
			std::cout << "Информация обновлена.\n\n";
			break;
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	movie mv1{
		"Брат",
		1997,
		"боевик",
		96,
		450
	};
	movie mv2{
		"Брат 2",
		2000,
		"боевик",
		123,
		470
	};
	movie mv3{
		"Джон Уик",
		2014,
		"боевик",
		101,
		510
	};

	//Задача 1.
	std::cout << "Задача 1." << std::endl;
	showMovie(mv1);
	showMovie(mv2);
	showMovie(mv3);
	std::cout << std::endl;

	//Задача 2.
	std::cout << "Задача 2." << std::endl;
	expensive(mv1, mv2, mv3);
	std::cout << std::endl;

	//Задача 3.
	std::cout << "Задача 3." << std::endl;
	updateInfo(mv1);
	showMovie(mv1);
	


	return 0;
}
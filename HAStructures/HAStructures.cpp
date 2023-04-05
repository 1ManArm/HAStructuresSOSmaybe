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
	std::cout << "��������:               " << MV.title << std::endl;
	std::cout << "��� ������:             " << MV.year<< std::endl;
	std::cout << "����:                   " << MV.genre << std::endl;
	std::cout << "�����������������, ���: " << MV.duration << std::endl;
	std::cout << "����, ���:              " << MV.price << std::endl;
	std::cout << "------------------------" << std::endl; //��� ����������
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
	std::cout << "��������, ����� ���������� � ������ ������ ��������:\n";
	std::cout << "1. ��������;\n";
	std::cout << "2. ��� ������;\n";
	std::cout << "3. ����;\n";
	std::cout << "4. �����������������;\n";
	std::cout << "5. ����.\n";
	std::cout << "���� -> ";
	unsigned int select;
	std::cin >> select;
	switch (select) {
		case 1:
			std::cout << "������� ����� �������� ������ -> ";
			std::cin.ignore();
			std::getline(std::cin, tmp.title);
			std::cout << "���������� ���������.\n\n";
			break;
		case 2:
			std::cout << "������� ����� ��� ������ ������ -> ";
			std::cin >> tmp.year;
			std::cout << "���������� ���������.\n\n";
			break;
		case 3:
			std::cout << "������� ����� ���� ������ -> ";
			std::cin.ignore();
			std::getline(std::cin, tmp.genre);
			std::cout << "���������� ���������.\n\n";
			break;
		case 4:
			std::cout << "������� ����� ����������������� ������ -> ";
			std::cin >> tmp.duration;
			std::cout << "���������� ���������.\n\n";
			break;
		case 5:
			std::cout << "������� ����� ���� ������, � ������ -> ";
			std::cin >> tmp.price;
			std::cout << "���������� ���������.\n\n";
			break;
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	movie mv1{
		"����",
		1997,
		"������",
		96,
		450
	};
	movie mv2{
		"���� 2",
		2000,
		"������",
		123,
		470
	};
	movie mv3{
		"���� ���",
		2014,
		"������",
		101,
		510
	};

	//������ 1.
	std::cout << "������ 1." << std::endl;
	showMovie(mv1);
	showMovie(mv2);
	showMovie(mv3);
	std::cout << std::endl;

	//������ 2.
	std::cout << "������ 2." << std::endl;
	expensive(mv1, mv2, mv3);
	std::cout << std::endl;

	//������ 3.
	std::cout << "������ 3." << std::endl;
	updateInfo(mv1);
	showMovie(mv1);
	


	return 0;
}
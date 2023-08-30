#include <iostream>
int main() {
	std::string name;
	std::cout << "이름을 입력하세요 : ";
	std::cin >> name;

	if (name == "홍길동") {
		std::cout<< "\n 남자";
	}
	else if (name == "성춘향") {
		std::cout << "\n 여자";
	}
	else {
		std::cout << "\n 모르겠어요.. ";
	}

}
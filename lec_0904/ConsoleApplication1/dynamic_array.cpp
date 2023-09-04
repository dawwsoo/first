// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

//#include <iostream>
//
//int main()
//{



//	/*포인터와 동적할당 이차원 배열*/
//
//	int x = 0;
//	int y = 0;
//	std::cout << "x를 입력하세요. : \n";
//	std::cin >> x;
//	std::cout << "y를 입력하세요. : \n";
//	std::cin >> y;
//
//
//	while (x <= 0 || y <= 0) {
//		std::cout << "x와 y 모두 양수를 입력해주세요.";
//		std::cout << "x를 입력하세요. : \n";
//		std::cin >> x;
//		std::cout << "y를 입력하세요. : \n";
//		std::cin >> y;
//	}
//
//	int** arr = new int* [x];
//
//	for (int i = 0; i < x; i++) {
//		arr[i] = new int[y];
//	}
//	int k = 1;
//
//	for (int i = 0; i < x; i++) {
//		for (int j = 0; j < y; j++) {
//			arr[i][j] = k;
//			k++;
//		}
//	}
//
//	for (int i = 0; i < x; i++) {
//		for (int j = 0; j < y; j++) {
//			std::cout << arr[i][j] << "  ";
//		}
//		std::cout << "\n";
//	}
//
//	for (int i = 0; i < x; i++) {
//		delete[] arr[i];
//	}
//	delete[] arr;
//}



	
	//학생 수 받고 점수 저장해서 평균 내기
//
//	int num=0;
//	int sum = 0;
//	int score=0;
//	int average = 0;
//
//
//	std::cout << "몇 명의 학생 입니까? : ";
//	std::cin >>num;
//
//	int** student_score = new int* [num];
//
//	for (int i = 0; i < num; i++) {
//		student_score[i] = new int[num];
//	}
//	//이차원 배열에서는 각각 할당 무조건
//	//변수 받아주고 나서 할당해줘야한다 #!
//
//	for (int i = 0; i < num; i++) {
//		std::cout << i + 1 << "번 학생의 성적을 입력하세요 : ";
//		std::cin >> student_score[i][i];
//	}
//
//	for (int i = 0; i < num; i++) {
//		sum = sum + student_score[i][i];
//	}
//
//	average = sum / num;
//	std::cout << "전체 학생 평균 = " << average;
//	
//
//	for (int i = 0; i < num; i++){
//				delete[] student_score[i];
//		}
//	delete[] student_score;
//
//}
	
	


// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.

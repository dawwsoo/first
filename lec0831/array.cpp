#include <iostream>

int main() {

	/*city��� �迭 ������ ����� 5���� ���� �̸��� ������ ����
		for�� Ȥ�� for - each���� Ȱ���Ͽ� city ���� ���� ���
*/


//	std::string city[] = { "�ѱ�","�̱�","italy","france","����" };
//	/*for (std::string ct :city) {
//		std::cout << ct << "\n";
//		}
//
//*/
//
//	std::cout << sizeof(city)<<"////////"<< sizeof(city[0])<<"////////" << sizeof(city[2]);
	//std::string a;
	//std::string b;
	//std::string c;
	//std::string d;
	//std::string e;
	// 
	//std::string city[5];


	//std::cout << "���� 5���� �Է��ϼ���. \n";
	//std::cin >> a >> b >> c >> d >> e;

	//std::string city2[] = { a,b,c,d,e };



	//for (std::string ct : city2) {
	//	std::cout << ct << "\n";
	//	}

	
	int grade[] = {1,2,3,4,5 };
	int i; int j; int t;
	int sum=0;

		for (i = 1; i <= 5; i++) {
			std::cout << i << "�� �л��� ������ �Է��ϼ���: ";
			std::cin >> t;
			grade[i - 1] =t ;
			std::cout << grade[i - 1]<<std::endl;
		
		}

		//for(i=0;i<5;i++){
		//	std::cout << grade[i]<<std::endl;
		//}

		for (j = 0; j < i-1; j++) {
			sum = sum + grade[j];
		}
		std::cout << sum << std::endl;
		std::cout << "���� ��� : " << (float)sum/(float)5;



		/////�������� ����� ǥ������� �ٲ��ֽ�/////////////
	/*	int array_size = 5;
		int grade[] = { 1,2,3,4,5 };
		int a; int b; int c; int d; int e;
		int i; int j; int result;
		int sum = 0;

		for (i = 0; i < array_size; i++) {
			std::cout << i + 1 << "�� �л��� ������ �Է��ϼ���: ";
			std::cin >> result;
			grade[i] = result;
		}

		for (j = 0; j < array_size; j++) {
			sum = sum + grade[j];
		}

		float average = (float)sum / (float)array_size;
		std::cout << "���� ��� : " << average;*/

			


}


#include<iostream>


using namespace std; // �� �ȿ� �ִ� �͵��� ��ȣ Ǯ�� �׳� ����ϰڴ�. �̰� ������
using std::cout; // ���� ���� �ƴ� ���� 
namespace unique{
	std::string land;
	int code=0;

}

namespace seoul {

	std::string land;
	std::string code ;
}

//namespace �ȿ��� namespace�� ����� ���� ���������� namespace�ȿ��� �ҷ����� ���� �Ұ��ϴ�.

namespace busan {

	std::string land;
	std::string code;
}

int main() {


	seoul::land ="����";
	seoul::code = "02";
	busan::land = "�ؿ��";
	busan::code = "0000";

	std::cout << seoul::land;
	std::cout << seoul::code;
	std::cout << busan::land;
	std::cout << busan::code;
	
	

}
//�������̼� ����Ҷ� ������ ���̴�, �׷��� �Լ� �̸��� ��ĥ�� ������ �� ����� �Ѵ�. 
//�� �κ��� ��Ȯ�� �صη��� �Լ��� ���� �տ� ���ľ� �ϴ� �̸��� ����� �Ŵ�

//using namespace std;
//��°�� ������ �� ����ϴ� ���̴�. �������� �ʴ´ٴ� ��

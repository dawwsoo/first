//string�� char�� �迭
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include<sstream>



//for_each������ �ϸ� �� �� ���� �� ����(���ɴ� ����)
//�ٷ� while-for���� �˻��� �� ���ٸ� �̷��� �Լ��� ������.
int trueorfalse(std::string a) {

    std::vector<int> tf_f;

    tf_f.clear();
    for (int i = 0; i < a.size(); i++) {
        /*if (!isdigit(a[i])) �����ε� true false�� ������ ���̴�. �׷����� true false �� ������ ������ �ʴ�.*/
        if (isdigit(a[i]) == 0) {
            tf_f.insert(tf_f.begin(), 1);

        }
        
        //clear�� ����� �ʱⰪ�� �� ������ �Ǵ� �� ���� ����
    }
    
    if (tf_f.size() == 0)// ������ ����ٸ� == ���� ���ٸ�
        return 1;//�����������
    if (tf_f.size() != 0)
        return 0; //�����������

}



//stream string �̿��ϱ�
int trueorfalse_stream(std::string a) {

    std::stringstream stream(a);
     std::vector<int> tf_f;
     int thisone;  //string���� �޾��ָ� ���ڱ��� ��� string���� �ν��ؼ� int�� �ٲ㼭 ������ ���� �� �ۿ� ������.
     std::string  this2;
     stream.str(a);
      
      this2.clear();
      stream >> thisone;
      this2 = std::to_string(thisone); //to_string ����Ҷ� �տ� std::

      if (this2.size() != a.size())
          return 0;
      if (this2.size() == a.size())
          return 1;

}

int main() {
    std::string user_A;
    std::string user_B;
    std::stringstream stream;


    std::cout << "ù ��° ���ڸ� �Է��ϼ���(���� ���� x) \n";
    std::cin >> user_A;

    while (trueorfalse_stream(user_A) == 0) {

        std::cout << "NO" << std::endl << std::endl;
        std::cout << "ù ��° ���ڸ� �Է��ϼ���(���� ���� x) \n";
        std::cin >> user_A;
    }

    std::cout << "OK\n\n\n\n";

    std::cout << "�� ��° ���ڸ� �Է��ϼ���(���� ���� x) \n";
    std::cin >> user_B;

    while (trueorfalse(user_B) == 0) {

        std::cout << "NO" << std::endl << std::endl;
        std::cout << "�� ��° ���ڸ� �Է��ϼ���(���� ���� x) \n";
        std::cin >> user_B;
    }


    std::cout << "OK\n\n\n\n";

    std::cout << "�� ������ ��" << stoi(user_A) + stoi(user_B) << std::endl;
    std::cout << "�� ���� �̾� �ٿ� ���" << user_A.append(user_B) << std::endl;
    //append�ϴ� ���� �װ��� user_A�� �ȴ�.


    //std::cout << "ok";
    //std::cin >> b;
    //std::getline(std::cin, b);
    //std::getline(std::cin, b);


//#3

    //std::tolower(s[1]) tolower ���� �ٽ� Ư����,

    std::string s = "Codingon"; std::cout << "1. : " << s<<std::endl;
    s[0]=std::tolower(s[0]);
    
    std::cout << "2. : " <<s << std::endl;
    std::cout << "3. : " << s.substr(2,4) << std::endl;;
    s.insert(1, 4, 'o');
    s.erase(6, 4);
    std::cout << "4. : " << s << std::endl;;
    std::cout << "5. : " << s.erase(1,5) << std::endl;;


}
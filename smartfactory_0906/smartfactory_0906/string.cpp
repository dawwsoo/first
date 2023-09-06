//string은 char의 배열
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>






int main()
{
   /* string 기본 실습 함수 확인*/
    std::string s = "police say two people are suspected of trying to create a shortcut for their construction work.the two have been detained and the case is under further investigation.the 38-year-old man and 55-year-old woman were working near the affected area, the 32nd great wall.";
    std::string str = "two";
    int first = 0;

    std::cout << " 1. 문자열의 길이 출력" << std::endl;
    std::cout << s.length() << "\n";
    std::cout << " 2. 100번째 문자 출력 " << std::endl;
    std::cout << s.at(99) << std::endl;
    std::cout << s.at(0) << std::endl;
    std::cout << " 3. two 나오는 첫 인덱스" << std::endl;
    std::cout<< s.find(str) << std::endl;

    first = s.find(str);

    std::cout << " 4. two 나오는 두 번째 인덱스" << std::endl;
    std::cout << s.find(str,first+1) << std::endl;




    //공백을 제외하고 100번째 문자 생각해보기
    std::string s = "Police say two people are suspected of trying to create a shortcut for their construction work.The two have been detained and the case is under further investigation.The 38-year-old man and 55-year-old woman were working near the affected area, the 32nd Great Wall.";
  
    std::string::iterator it;
    int num = 0;
    int sum = 0;
    int k = 0;
  
    for (it = s.begin(); it != s.end(); it++) {

        if (s.find("re",k)==k)
            num++;
        k++;
    }
    
    std::cout << num;
    
}



#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* myString, const char* pat) {
    int answer = 0;

    std::string my = "hehehehey";
    std::string p = "h";


    std::cout << solution(my, p);



    //   띄어쓰기 포함하지 않고 입력받기
    //     
    //    std::cout << "ok";
    //    std::cin >> b;
    //    std::getline(std::cin, b);
    //    std::getline(std::cin, b);s
}

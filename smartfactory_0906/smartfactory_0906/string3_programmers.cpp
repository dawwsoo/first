//string�� char�� �迭
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
//���α׷��ӽ� �ߺ� �ܾ� Ȯ���ϱ�(���� �̿�)

using namespace std;
int solution(string mystring, string pat) {
    int answer = 0;
    int c = 0;
    vector<int> b;
    for (int i = 0; i < mystring.size() ; i++) {
        if( mystring.find(pat, c)==c) {
            b.insert(b.begin(),mystring.find(pat, i));
           
        }
        c++;
    }
    answer = b.size();
    return answer;
}

int solution(std::string mystring, std::string pat) {
    int answer = 0;
    std::string::iterator it;
    for (it = mystring.begin(); it != mystring.end(); it++) {
        if (mystring.find(pat)==0)
            answer++;

    }
    return answer;
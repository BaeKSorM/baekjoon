#include <string>
#include <sstream>
#include <iostream>
using namespace std;
int main()
{
    int num;
    string str = "123 456\n789 012";
    stringstream stream;
    stream.str(str); //초기화 ->stream에 str을 대입.
    while (stream >> num)
    { //뽑아내고자 하는 int형 값을 출력한다. (num이 int형이기 때문에) 공백이나 \n이 나올때 까지 읽어드린 후 출력
        cout << num << endl;
    }
}
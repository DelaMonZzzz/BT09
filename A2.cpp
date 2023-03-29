#include <iostream>

using namespace std;

int main()
{
    int* p = new int;
    int* p2 = p;
    *p = 10;
    delete p; // dòng bị lỗi là dòng này vì sau khi gán p2 = p thì địa chỉ của p2 và p là giống nhau, trong chương trình có 1 địa chỉ bị xóa 2 lần gây lỗi
    *p2 = 100;
    cout << *p2;
    delete p2;
}

#include <iostream>
#include <cstring>

using namespace std;

char* concat(const char* x, const char* y)
{
    int a = 0, b = 0;
    while (x[a] != NULL)
    {
        a++;
    }
    while (y[b] != NULL)
    {
        b++;
    }
    char *c = new char [a+b];
    strcpy(c, x);
    strcpy(c+b, y);
    return c;
}

int main()
{
    char *x = "Hello";
    char *y = "World";
    char *c = new char;
    c = concat(x, y);
    cout << c;

    return 0;
}

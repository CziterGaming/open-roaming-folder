#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char* path = getenv("appdata");
    const char* exp = "explorer ";

    char* my_other_str = _strdup(exp);

    strcat(my_other_str, path);

    system(my_other_str);
    return 0;
}

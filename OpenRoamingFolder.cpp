#include <iostream>
#include <string.h>
#include <windows.h>

using namespace std;

int main()
{
    char* path = getenv("appdata");

    const char* e = path;
    size_t a = mbsrtowcs(NULL, &e, 0, NULL);

    wchar_t* loc = new wchar_t[a + 1]();

    a = mbsrtowcs(loc, &e, a + 1, NULL);

    ShellExecute(NULL, NULL, loc, NULL, NULL, SW_SHOWNORMAL);
}

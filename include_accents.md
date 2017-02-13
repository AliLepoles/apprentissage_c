```
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

int main()
{
    int encode;
    encode = GetConsoleOutputCP();
    SetConsoleOutputCP(1252);

   return 0;
}

```

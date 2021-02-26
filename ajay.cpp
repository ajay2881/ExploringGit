#include <stdio.h>
#include "example_dll.h"

__stdcall void hello(const char *s)
{
        printf("Hello from roopendra %s\n", s);
}

void CppFunc(void)
{
        puts("CppFunc");
}
void MyClass::func(void)
{
        puts("MyClass.func()");
}

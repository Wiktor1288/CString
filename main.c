#include <stdio.h>
#include "Cstring.h"
#include <assert.h>
 
int main(){

CString *newCstring=cstring_new("nowy napis");
char *str_1= ReturnCstr(newCstring);
printf("\n %s \n", newCstring->some_str);
printf("\n %s \n", str_1);
ChangeChar('x', newCstring,4);
printf("\n %s \n", newCstring->some_str);
printf("\n %s \n", str_1);
assert(newCstring->_lenght == strlen(str_1));
assert(newCstring->some_str[3] == ReturnChar(3,newCstring));
DestroyCString(newCstring);
    return 0;
}
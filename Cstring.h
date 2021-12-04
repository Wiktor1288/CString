
#ifndef CSTRING_H
#define CSTRING_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct CString
{
    char *some_str;
    int _lenght;
} CString;
 
CString* cstring_new(const char* str)
{
    CString *new_Cstr=malloc(sizeof( CString));
    
    if(str == 0){
        return 0;
    }

    new_Cstr->_lenght=strlen(str);
    new_Cstr->some_str=calloc(new_Cstr->_lenght+1, sizeof(char));
    strncpy(new_Cstr->some_str,str,new_Cstr->_lenght);

    return new_Cstr;
}
 

 int ReturnLen(struct  CString *_CString){
     return _CString->_lenght;
 }

 int ReturnChar(int _index, struct  CString *_CString){
     

     if(_index >= _CString->_lenght || _index <0){
         return -1;
     }


     return _CString->some_str[_index];
 }


  void DestroyCString(struct CString *CstrToDestroy){
     free(CstrToDestroy->some_str);
     free(CstrToDestroy);
 }

 void ChangeChar(char chatToPut, struct  CString *_CString, int _index){
     

     if(_index < _CString->_lenght || _index >0){
        _CString->some_str[_index]=chatToPut;
     }
 }

 char* ReturnCstr(struct CString *_CString ){
     char *StrToReturn=calloc(_CString->_lenght+1, sizeof(char));
     
     strncpy(StrToReturn,_CString->some_str,_CString->_lenght);

     return StrToReturn;
    
 }

#endif
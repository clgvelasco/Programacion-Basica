/* Alumno: Cesar Luis Garcia Velasco,
 Num de reg: 12110107
 Gurpo: B-203. */

#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    float bytes, mega, kilo;
    
    cout<<"** Bytes a kilobytes y megabytes **\n\n";
    
    cout<<"Introduce los bytes: "; cin>>bytes;
    /* 1 kilobyte= 1024 bytes; 1 megabyte = 1024 kilobytes y 1'048,576 bytes;*/
    kilo=(bytes/1024);
    mega=(bytes/1048576);
    
    cout<<"\n"<<bytes <<" bytes Igual a " <<kilo <<" kilobytes y " <<mega <<" megabytes\n\n";
    
    getch();
    return 0; 
}

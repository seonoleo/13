#include <stdio.h>
#include <stdlib.h>


struct student
{
       int ID;
       char name[20];
       double grade;
};



int main(int argc, char *argv[])
{  
   struct student s1= {10, "Seono", 4.3};
   struct student *stdPtr;
   
   stdPtr = &s1;
   
   stdPtr-> ID= 17;
   strcpy(stdPtr->name, "Yeom");
   stdPtr->grade = 4.2;
   printf("ID: %, name: %s, grade: %fn", s1.ID, s1.name, s1.grade);
  
  system("PAUSE");	
  return 0;
}

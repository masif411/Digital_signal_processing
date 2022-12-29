// Handling structures with pointers
#include <stdio.h>
struct student {
	struct student *ptr;
	int rollNo;
char *firstName; 
char *lastName;// define pointer suit
}*s1Ptr,*s2Ptr;
typedef struct student uet;//using of type def
int main(void)
{
uet s1,s2; // define two struct student variable
s1Ptr= &s1; // s1Ptr holds the address of s1
s2Ptr= &s2;// s2Ptr holds the address of s2
s1Ptr->ptr=NULL;
s1Ptr->firstName = "Muhammad";
s1Ptr->lastName= "Ali";
s1Ptr->rollNo=1;
s2Ptr->ptr=NULL;
s2Ptr->firstName="Ahmad";
s2Ptr->lastName="Khan";
s2Ptr->rollNo=2;
printf("Record of Student 1:\n");
printf("%d %s %s", s1.rollNo,s1.firstName, s1.lastName); //ObjectName.fieldName
printf("\n");
printf("Record of Student 1 via pointer:\n");
printf("%d %s %s", s1Ptr->rollNo, s1Ptr->firstName, s1Ptr->lastName); // PointertoObject -> firldName
printf("\nRecord of Student 2:\n");
printf("%d %s %s", s2.rollNo, s2.firstName, s2.lastName); //ObjectName.fieldName
printf("\nRecord of Student 2 via pointer:\n");
printf("%d %s %s", s2Ptr->rollNo, s2Ptr->firstName, s2Ptr->lastName);
}

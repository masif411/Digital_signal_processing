// Fig. 10.2: fig10_02.c
// Structure member operator and
// structure pointer operator
#include <stdio.h>
// card structure definition
struct student {
	int rollNo;
char *firstName; 
char *lastName;// define pointer suit
};
int main(void)
{
struct student s1,s2; // define two struct student variable
struct student *s1Ptr=&s1; // s1Ptr holds the address of s1
struct student *s2Ptr= &s2;// s2Ptr holds the address of s2
s1.firstName = "Muhammad";
s1.lastName= "Ali";
s1.rollNo=1;
s2.firstName="Ahmad";
s2.lastName="Khan";
s2.rollNo=2;
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

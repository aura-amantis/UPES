/* 
Design a structure named ‘student_record’ to store student details like 
name, sap-id, enrollment-number, birth-date, registration-date, and marks of 
five subjects. The members, birth date, and registration date are defined using 
another structure named ‘date’ to store date details like day, month, and year. 
Get data of ‘n’ students, compute the average marks obtained by each of them 
and print their grade sheets. Note: Use Nested Structures, Each student record 
is dynamically allocated. 
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct registration
{
	int date , year;
	char month[20];
}reg;

struct marks
{
	int maths , physics , chemistry , commerce , english;
}mark;

struct date_of_birth
{
	int date , year;
	char month[10];
}dob;

struct student_record
{
	char name[30];
	int sapid , enroll_no;
	struct registration reg;
	struct date_of_birth dob;
	struct marks mark;
}stu_rec;

int main()
{
	int i,n;
	struct student_record stu_rec; 
	printf ("Enter the number of records to be stored: ");
	scanf("%d",&n);
	
	struct student_record *stu;
	stu = (struct student_record *) malloc(n * sizeof(struct student_record)); 
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter the name of student: ");
		scanf("%s", stu[i].name);
		
		printf("Enter the sapid of the student: ");
		scanf("%d", &stu->sapid);
		
		printf("Enter the enrollment number: ");
		scanf("%d",&stu->enroll_no);
		
		printf("Enter the registeration month: ");
		scanf("%s", &stu->reg.month);
		
		printf("Enter the registeration date and year resp.: ");
		scanf("%d %d", &stu->reg.date , &stu->reg.year);
		
		printf("Enter month of birth: ");
		scanf("%s", &stu->dob.month);
		
		printf("Enter the date and year of birth resp.: ");
		scanf("%d %d", &stu->dob.date , &stu->dob.year);
		
		printf("\nEnter the marks as following(maths , physics , chemistry , commerce , english): ");
		scanf("%d %d %d %d %d", &stu->mark.maths , &stu->mark.physics , &stu->mark.chemistry , &stu->mark.commerce , &stu->mark.english);
		
		int total = stu->mark.maths + stu->mark.physics + stu->mark.chemistry + stu->mark.commerce + stu->mark.english;
		float avg = total/5;
		
		printf("\nName: %s", stu[i].name);
		printf("\nSAPID: %d", stu->sapid);
		printf("\nEnrollment number: %d", stu->enroll_no);
		printf("\nRegisteration Date: %s %d %d", stu->reg.month , stu->reg.date , stu->reg.year);
		printf("\nDate of Birth: %s %d %d", stu->dob.month , stu->dob.date , stu->dob.year);
		printf("\nAverage marks: %f\n", avg);
	}
	return 0;
}

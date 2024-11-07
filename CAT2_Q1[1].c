//C emloyee structures 
#include<stdio.h>
#include<string.h>

//define the employee structure
struct employee{
	char Name[25];
	int id;
	char department[20];
	float salary;
	char email[50];
};

int main(){
	//declaring and initializing the structure
	struct employee employee1= {
		"John Doe",
		12345,
		"Human Resource",
		55000.50,
		"john.doe@company.com",
	};
	
	//printing the values of the fields
	printf("Name: %s\n",employee1.Name);
	printf("id: %d\n",employee1.id);
	printf("department: %s\n",employee1.department);
	printf ("salary: %f\n",employee1.salary);
	printf("email:%s\n",employee1.email);


	return 0;
}
#include <stdio.h>

struct Address {
    int street_number; char city[50];
    char state[50];
    char district[50];
};

struct Details {
    int Emp_age;
    char Emp_name[50]; 
    char Emp_degree[50]; 
    float Emp_exp;
    struct Address Emp_add;
};

int main()
{
printf("\n\n *************\n\n");
int n ;
printf("Enter the number of employees : ") ;
scanf("%d",&n);

struct Details Emp_det[n];

for(int i=0;i<n;i++)
{
    printf("\n\n *************\n\n");
    printf("Enter the age of employee %d : ",i+1);
    scanf("%d",&Emp_det[i].Emp_age);
    
    printf("Enter the name of employee %d :",i+1); 
    scanf("%s",Emp_det[i].Emp_name);
    
    printf("Enter the degree of employee %d : ",i+1); 
    scanf("%s",Emp_det[i].Emp_degree);
    
    printf("Enter the expenses of employee %d : ",i+1); 
    scanf("%f",&Emp_det[i].Emp_exp);
    
    printf("Enter the address of employee %d :\n",i+1);
    printf("Street : "); 
    scanf("%d",&Emp_det[i].Emp_add.street_number);
    printf("City : ");
    scanf("%s",Emp_det[i].Emp_add.city);
    printf("District : "); 
    scanf("%s",Emp_det[i].Emp_add.district);
    printf("State : "); 
    scanf("%s",Emp_det[i].Emp_add.state); 
}

for(int i=0;i<n;i++)
{
    printf("Age of employee %d is %d\n",i+1,Emp_det[i].Emp_age); 
    printf("Name of employee %d is %s\n",i+1,Emp_det[i].Emp_name); 
    printf("Degree of employee %d : %s\n",i+1,Emp_det[i].Emp_degree); 
    printf("Expenses of employee %d is %f\n",i+1,Emp_det[i].Emp_exp);
    printf("Address of employee %d \n",i+1);
    printf("Street : %d",Emp_det[i].Emp_add.street_number);
    printf("\nCity : %s",Emp_det[i].Emp_add.city);
    printf("\nDistrict : %s",Emp_det[i].Emp_add.district);
    printf("\nState : %s\n",Emp_det[i].Emp_add.state);
}

return 0; 
}

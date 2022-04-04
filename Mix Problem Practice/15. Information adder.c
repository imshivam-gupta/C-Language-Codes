#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void add();
void del();
void display();
int counter=0;
int pos;
char choice;

struct address
 {
    char name[50];
    char street[50];
    char city[50];
    char state[50];
    char pin_code[100];
 }a[100];

int main()
{
    int exit=1;
    while(exit!=0){
        printf("\n1. Add a record.");
        printf("\n2. Delete a record.");
        printf("\n3. Display all records.");
        printf("\n4. Quit");
        printf("\nEnter your choice: ");
        choice=getch();
        switch(choice){
            case '1':
            add();
            counter++;
            break;
            
            case '2':
            del();
            counter--;
            break;
            
            case '3':
            display();
            break;
            
            case '4':
            exit=0;
            break;
            
            default:
            printf("\nThat's not a valid choice\n");
            }
        }
}

void add()
{
    printf("\nEnter the name: ");
    scanf("%s",a[counter].name);
    
    printf("Enter the street: ");
    scanf("%s",a[counter].street);
    
    printf("Enter the city: ");
    scanf("%s",a[counter].city);
    
    printf("Enter the state: ");
    scanf("%s",a[counter].state);
    
    printf("Enter the pin code: ");
    scanf("%s",a[counter].pin_code);
}


void del()
{
    printf( "\n\nDefine the position of the array element where you want to delete: ");
    scanf ("%d",&pos);
    
    if (pos>counter)
    {
        printf ("\nThat's not a valid position");
    }
    
    else{
        for (int i=pos-1; i<counter-1; i++){
            a[i]=a[i+1];
            }
            printf ("\nThe record has been deleted\n");
            }
}

void display(){
    if(counter==0){
        printf("\n\nThere are no addresses");
        }
        
    else
    {
        for(int i=0; i<counter;i++)
        {
            printf("\n\nNo: %d\nName: %s\nStreet: %s\nCity: %s\nState: %s\nPin Code: %s\n", 
            i+1,a[i].name,a[i].street,a[i].city,a[i].state,a[i].pin_code);
            }
    } 
}

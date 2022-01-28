int main()
{
   unsigned int counter;
   int grade;
   int total;
   float average;
   
   
   total=0;
   counter=1;
   
   while(counter<=10)
   {
       printf("%s","Enter grade: ");
       scanf("%d",&grade);
       total+=grade;
       counter+=1;
       
   }
   
   average=total/10;
   printf("Class Average is %.2f\n",average);
}

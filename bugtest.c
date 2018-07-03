#include <stdio.h>
#include<string.h>
char *initialize( ) {

  char mystr[1000];
	char *ptr;	 
   printf( "Enter a value :");
   gets(mystr);
	
  if(mystr[0]==65){   
printf( "\nYou entered: ");
	 ptr=mystr;
   puts(mystr);	
}
else {
puts("wrong input");
ptr=mystr+1;

}
return ptr;   
}

/*void makeComplex(int a){
	int i;
	for(i=0;i<=10;i++){
		printf(a++);
}

}*/
int createBranch(int a){

if(a==65)
{
	a++;
}

else {
  a--;
}
 return a;
}
void lets_play_afl(char* mystr){
	
	int a,i=0;
	char *ptr;
	ptr=mystr;
	char buff1[999];
	char buff2[2000];
	if(ptr+1==65)
	{
	strcpy(buff1,ptr);
	strcpy(buff2,buff1);
	strcat(buff2,ptr);
	strcmp(buff2,buff1);
	printf(buff2);
	}
	
	if(ptr+2==65){
	strcpy(buff2,"A");
	a= createBranch(ptr+3);
	printf(a);
      }

	else
	{
	printf(ptr);
	}	
}

int main(){
int a=10;
char *myptr= initialize();
lets_play_afl(myptr);
return 0;
}

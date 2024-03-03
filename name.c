#include<stdio.h>
#include<string.h>
int main(){
	char s[100],ch;
	int i,n,t;
printf("enter name word to print(only 13 letters):");
gets(s);
n=strlen(s);
// /------------<<firstline>>---------/
printf("\n");
for(i=0;i<n;i++){
	ch=s[i];
	t=ch;	
	if(t>96)
		{
			t=t-32;
		}
if(t==83||t==79||t==65||t==67||t==71){
	printf(" * * *\t");
}
if(t==82||t==80||t==66||t==68||t==69||t==70){
	printf("* * *\t");
}
if(t==89||t==85||t==78||t==72||t==75||t==77||t==86){
	printf("*     *\t");
}
if(t==76){
	printf("*   \t");
}
	if(t==84||t==73||t==74){
			printf("* * * *\t");
	}	
}
printf("\n");
// /-------<<second line>>-------/
for(i=0;i<n;i++){
	ch=s[i];
	t=ch;
	if(t>96)
		{
			t=t-32;
		}		if(t==85||t==79||t==65||t==72){
	printf("*     *\t");
	}	if(t==83||t==67||t==76||t==69||t==70||t==71){
		printf("*    \t");
	}		if(t==82||t==80||t==75||t==66||t==68||t==86){
			printf("*    *\t");
		}
		if(t==74||t==84||t==73){
			printf("   *\t");
		}
		if(t==77){
			printf("* * * *\t");
		}
		if(t==78){
			printf("* *   *\t");
	}
		if(t==89){
			printf(" *   *\t");
	}	
}	
printf("\n");
// /----------<<third>>---------------/
for(i=0;i<n;i++){
	ch=s[i];
	t=ch;
	if(t>96)
		{
			t=t-32;
		}
	if(t==65||t==72){
	printf("* * * *\t");
	}	if(t==82||t==80||t==66||t==69||t==75){
		printf("* * *\t");
	}
	if(t==67||t==71||t==76){
		printf("*    \t");
	}
	if(t==68||t==86){
		printf("*    *\t");
	}
		if(t==70||t==90){
			printf("* *\t");
}
	if(t==74||t==84||t==73){
			printf("   *\t");
	}
	if(t==78||t==77){
		printf("*  *  *\t");
	}
	if(t==79||t==85){
	printf("*     *\t");
	}
		if(t==83){
		printf(" * * * \t");
	}
		if(t==89){
			printf("   *\t");
	}	
}
printf("\n");
// /------------<<fourth>>-----------/
for(i=0;i<n;i++){
	ch=s[i];
	t=ch;
	if(t>96)
		{
			t=t-32;
		}		if(t==79||t==65||t==72||t==77||t==85){
	printf("*     *\t");
	}	if(t==82||t==75||t==66||t==68){
		printf("*    *\t");
	}		if(t==80||t==67||t==76||t==69||t==70){
		printf("*    \t");
		}
		if(t==71||t==78){
			printf("*   * *\t");
}
	if(t==74||t==84||t==73){
			printf("   *\t");
	}
		if(t==83){
		printf("      *\t");
	}
		if(t==89){
			printf("   *\t");
	}	
}
printf("\n");
// /----------<<fiveth>>------------/
for(i=0;i<n;i++){
	ch=s[i];
	t=ch;
	if(t>96)
		{
			t=t-32;
		}	if(t==82||t==78||t==75||t==65||t==72||t==77){
	printf("*     *\t");
	}
	 if(t==76||t==66||t==68||t==69){
		printf("* * *\t");
	}
		if(t==83||t==79||t==67||t==71||t==85){
		printf(" * * *\t");
	}
	if(t==80||t==70){
		printf("*   \t");
	}
	if(t==86){
		printf("  *\t");
}
	if(t==89||t==84){
			printf("   *\t");
	}
		if(t==73){
			printf("* * * *\t");
	}
	if(t==74){
		printf("* *\t");	
}
}
return 0;
}
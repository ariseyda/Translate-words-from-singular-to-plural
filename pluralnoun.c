#include<stdio.h>
#include<string.h>

//Write a function that takes nouns and forms their plurals on the basis of these rules: 
//a. If noun ends in “y”, remove the “y” and add “ies”. 
//b. If noun ends in “s”, “ch”, or “sh”, add “es”. 
//c. In all other cases, just add “s”. 
//Print each noun and its plural in the main program. 
//Put the following data in an array and test them: chair dairy boss circus fly dog church clue dish 

void plurals(char noun1[]){
	
	int lenght=strlen(noun1);
	if(noun1[lenght-1]=='y'){
		printf("Singular:%s ",noun1);
		noun1[lenght-1]='i';
		noun1[lenght]='e';
		noun1[lenght+1]='s';
		
		printf("\nPlural:%s ",noun1);
			
	}
	else if(noun1[lenght-1]=='s'){
		printf("Singular:%s ",noun1);
		noun1[lenght]='e';
		noun1[lenght+1]='s';
		printf("\nPlural:%s ",noun1);

	}
	else if(noun1[lenght-2]=='s' && noun1[lenght-1]=='h'){
		printf("Singular:%s ",noun1);
	    noun1[lenght]='e';
		noun1[lenght+1]='s';
		printf("\nPlural:%s ",noun1);
	}
	else if(noun1[lenght-2]=='c' && noun1[lenght-1]=='h'){
		printf("Singular:%s ",noun1);
		noun1[lenght]='e';
		noun1[lenght+1]='s';
		printf("\nPlural:%s ",noun1);
	}
	else{
		printf("Singular:%s ",noun1);
		noun1[lenght]='s';
		printf("\nPlural:%s ",noun1);
	}
	
}

int main(){
	
   char noun[20];
   printf("Enter a noun:");
   scanf("%s",&noun);
   plurals(noun);
	
	return 0;
}	
	
	
	
	
	
	
	

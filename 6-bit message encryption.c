#include<stdio.h>
#include<stdlib.h>
#include<process.h>
void compare(int value);
int power(int pow);
void breakline();
void encryption();
void decryption();
void textcolor();
int main(){
	int choice=555;
		printf("\n");
		textcolor();
		printf("\n");
		breakline();
		printf("\n");
		printf("\tPRESS 1 TO ENCRYPT THE MESSAGE \n");
		printf("\n");
		printf("\tPRESS 2 TO DECRYPT THE MESSAGE \n");
		printf("\n");
		printf("\tPRESS 0 TO EXIT FROM PROGRAM \n");
	while(choice != 0 )
	{
		printf("\n");
		printf("\tENTER YOUR CHOICE...   ");
		scanf(" %d",&choice);
		switch(choice){
			case 1 :
						encryption();
						break;
			case 2 :    
						decryption();
						break;
			case 0 :    
						exit(0);
						break;				
			default  :
						printf("\n");
						printf("\t\t\t\t\t    WRONG CHOICE \n");
						printf("\n");
						breakline();
						break;
						
		}		
	}
	return 0;
}
void breakline(){
	int i=0;
	for(;i<120;i++)
	printf("~");
	printf("\n");
	return ;
}

void textcolor(){
	system("color 0A");
	printf("\t\t\t\t\t    WELCOME TO 6-BIT MESSAGE ECNRYPTION \n");
	return ;
}

void encryption(){
	printf("\t\t\t\t\t    ECNRYPTION IS WORKING \n");
	printf("\n");
	breakline();
	
	return ;
}

void decryption(){
	int msg[1500];
	int length,value=0,i,j=0;
	system("cls");
	printf("\n\t\t\t\t\t    DECNRYPTION IS WORKING \n");
	printf("\n");
	breakline();
	printf("\n");
	printf("\tENTER THE 6-BIT BINARY ENCRYPTED MESSAGE LENGTH \n");
	scanf(" %d",&length);
	printf("\tENTER THE 6-BIT BINARY MESSAGE ONE BY ONE \n");
	for(i=0;i<length;i++)
	scanf("%d",&msg[i]);
	for(i=5;i>=0;i--){			
			value=value+msg[i]*power(j);
			j++;	
	}
	printf(" %d",value);
	compare(value);
	return ;
}

int power(int pow){
	int i=0,ans=1;
	for(i=0;i<pow;i++)
	{
		ans=ans*2;
	}
	return ans;
}
void compare(int value){
	char arr[36];
	int i;
	arr[10]='a',arr[11]='b',arr[12]='c',arr[13]='d',arr[14]='e',arr[15]='f',arr[16]='g',arr[17]='h',arr[18]='i',arr[19]='j',arr[20]='k',arr[21]='l',arr[22]='m',
	arr[23]='n',arr[24]='o',arr[25]='p',arr[26]='q',arr[27]='r',arr[28]='s',arr[29]='t',arr[30]='u',arr[31]='v',arr[32]='w',arr[33]='x',arr[34]='y',arr[35]='z';
	for(i=10;i<36;i++){
		if(i==value){
			printf(" %c",arr[i]);
		}
	}
	return ;
}

#include <stdio.h>
#include <stdlib.h>

char* lookup(char *word)
{
	char *token;
	//search hash table and print/output token

return token; 
}

int isAlpha(char ch)
{
	if(ch>=60 && ch<=90 || ch>=97 && ch<=122)
		return 1;
	else 
		return 0;
}


int isNum(char ch)
{
	if(ch>90 && ch<=121)
		return 1;
	else 
		return 0;
}

int main(int argc, char const *argv[])
{
	/* code */
	
	int state=0;
	int x=0;
	char ch=getc(stdin);
	char* word = (char*) malloc(sizeof(int)*10);
	word[x++] = ch;
	while(ch!=' ')
	{
		if(ch.isAlpha())
			{
			word[x++] = ch;			
			while(ch.isAlpha() || ch.isNum() )
				{
			
				word[x++] = ch;			
				ch=getc(stdin);
	
				}

				lookup(word);
			}
		else if (ch.isNum())
		{
			word[x++] = ch;			
			while(ch.isNum())
				{
			
				word[x++] = ch;			
				ch=getc(stdin);
				
				}

				if (ch.isAlpha())
				{
					//print error as variable cannot be 123abc type
				}

		}
	else
		{
		switch (ch){

			case '<' :
				ch=getch();
				switch (ch)
					{
					case '=' :
					printf('less than equal');
					break;
					case ' ' :
					printf('less than');
					break;
					}
				break;
			case '>' :
				ch=getch();
				switch (ch)
					{
					case '=' :
					printf('greater than equal');
					break;
					case ' ' :
					printf('greater than');
					break;
					}
				break;
			case '!' :
				ch=getch();
				switch (ch)
					{
					case '=' :
					printf('not equal');
					break;
					case ' ' :
					printf('not');
					break;
					}
				break;
			//add other operators and symbols	
			case ';' :
				printf('TK_Delimiter');
				break;
				}
		}
	}

	return 0;
}
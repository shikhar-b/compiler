#include <stdio.h>
#include <stdlib.h>
#include <math.h>
char word[100];
int isAlpha(char ch){
	if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') )
		return 1;
	else
		return 0;
}
int isNum(char ch)
{
	if((ch>='0' && ch<='9'))
		return 1;
	else
		return 0;
}

void print_word(int len){
	int i;
	for (i = 0; i <len; ++i)
	{
		printf("%c",word[i]);
	}
	printf(" ");
}



int main(int argc, char const *argv[])
{
	int x;
	
	x=0;
	char ch=getchar();
	while(1)
	{
		if(ch=='7')break;
		x=0;
		if(ch==' ' || ch=='\n' || ch=='\t'){
			ch=getchar();
			continue;
		}
		if(isAlpha(ch)){
			while(isAlpha(ch) || isNum(ch) )
			{
				word[x++]=ch;			
				ch=getchar();
			}
			print_word(x);
			printf("\n");
			continue;
		}
		else if(isNum(ch))
		{
			x=0;
			while(isNum(ch))
			{	
				word[x++] = ch;			
				ch=getchar();	
			}
			print_word(x);
			printf("\n");
			continue;
		}

		else if(ch=='{' || ch=='}' || 
				ch=='[' || ch==']' || 
				ch==';' || ch=='(' ||
				ch==')' || ch==34  ||
				ch==39	|| ch==',' ||
				ch=='%' || ch=='#' 

			)
		{
			printf("TK_%c\n",ch);
			ch=getchar();
			continue;	
		}
		else
		{
			switch (ch)
			{
				case '=':
					ch=getchar();
					switch (ch)
					{
						case '=' :
							printf("TK_==\n");
							break;
						default:
							printf("TK==\n");
							break;
					}
					break;
				case '<':
					ch=getchar();
					switch (ch)
					{
						case '=' :
							printf("less than equal\n");
							break;
						default:
							printf("less than\n");
							break;
					}
					break;
				
				case '>' :
					ch=getchar();
					switch (ch)
					{
						case '=' :
							printf("greater than equal\n");
							break;
						default:
						printf("greater than\n");
						break;
					}
					break;
				case '!' :
					ch=getchar();
					switch (ch)
					{
						case '=' :
							printf("not equal\n");
						break;
						default:
							printf("not\n");
							break;
					}
					break;
				case '+' :
					ch=getchar();
					switch (ch)
					{
						case '+' :
							printf("TK++\n");
						break;
						default:
							printf("simple+\n");
							break;
					}
					break;	

				case '-' :
					ch=getchar();
					switch (ch)
					{
						case '-' :
							printf("TK--\n");
						break;
						default:
							printf("simple-\n");
							break;
					}
					break;	
				case '*' :
					printf("TK_*\n");
					break;
					
				case '/' :
					printf("TK_/\n");
					break;
				case '|' :
					ch=getchar();
					switch (ch)
					{
						case '|' :
							printf("TK_|\n");
						break;
						default:
							printf("simple_|\n");
							break;
					}
					break;	

				case '&' :
					ch=getchar();
					switch (ch)
					{
						case '&' :
							printf("TK_&&\n");
						break;
						default:
							printf("simple_&\n");
							break;
					}
					break;	
				
			}
			ch=getchar();
		}
	}
	return 0;
}
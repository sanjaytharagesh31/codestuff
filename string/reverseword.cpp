#include<iostream.h>
#include<conio.h>
#include<stdio.h>
//RUN IN TURBO C++ 
void main(){
	clrscr();
	char ch[100],ar[10];
	int p,q,i;
	cout<<"Program to reverse the words in a string";
	cout<<"Enter a string (end with a space):"<<"\n";
	gets(ch);
	p=-1;
	q=0;
	for(i=0;ch[i]!='\0';i++){
		if(ch[i]!=' ')
			ar[++p]=ch[i];

		else{
			while(p>=0){
				ch[q]=ar[p];
				q++;
				p--;
			}
			q++;
		}
	}
	cout<<"Output:";
	puts(ch);
	getch();
}

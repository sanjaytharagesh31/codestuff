#include<iostream>
using namespace std;
//PROGRAM TO DELETE A SUBSTRING FROM A MAIN STRING
int main(){
	int i,j,k,len1,len2,pos;
	char str[100],sub[50];
	cout<<"PROGRAM TO DELETE A SUBSTRING FROM A MAIN STRING"<<endl;
	cout<<"Enter a string:";
	cin>>str;
	cout<<"Enter a substring to delete from the main string:";
	cin>>sub;
	for(len1=0;sub[len1]!='\0';len1++);
	for(len2=0;sub[len2]!='\0';len2++);
	
	for(i=0;str[i]!='\0';i++){
		if(str[i]==sub[0]){
			j=i;
			k=0;
			while(sub[k]!='\0' && str[j]!='\0'){
				if(str[j]!=sub[k])
					break;
				j++;
				k++;
			}
			if(len2==j-i){
				break;
			}
		}
	}
	
	pos=i;
	for(i=pos;str[i+3]!='\0';i++)
		str[i]=str[i+3];
	cout<<str;
	return 0;
}
	
	

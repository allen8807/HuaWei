/**
4394 �ַ���Сдת��  ���ѵ��Ӫ  ���� ��ְǰ��ϰ  C/C++  

��Ŀ������
д��һ�����򣬽���һ���ַ�����Ȼ�����ת��ΪСд֮����ַ�����������ĸ��Χ�ڵ��ַ����趪��

 
����1��

���룺ABC

�����abc

 

����2:

���룺AbC

�����abc

 

   �ӿ�˵����


   ����:��������ַ�����Ӣ�Ĵ�д��ĸ�ĳɶ�ӦСд��ĸ�����ҹ��˵���Ӣ����ĸ�ַ�
    
   ����:�ַ���
    
   ���:����ַ�������֤�����ַ��Ч��
     
   ����:0��ʾ�ɹ�,��������-1
     

   int  ProcessString(char * strInput,char *strOutput)
*/


#include<iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

int  ProcessString(char * strInput,char *strOutput)
{
	int inputPos=0;
	int outputPos=0;
	try{
		while(strInput[inputPos]!='\0'){
			if(strInput[inputPos]>='A'&&strInput[inputPos]<='Z'){
				strOutput[outputPos]=strInput[inputPos]+('a'-'A');
				++outputPos;
			}else if(strInput[inputPos]>='a'&&strInput[inputPos]<='z'){
				strOutput[outputPos]=strInput[inputPos];
				++outputPos;
			}
			++inputPos;
		}
		strOutput[outputPos]='\0';
	}
	catch(exception e){
		return -1;
	}
	return 0;
}
int main()
{
    cout<<"Hello pc"<<endl;
    char * A = "aaaaAAAAzzzzzZZZZZZZZAbcdEFGHIJKlmnsdfgkdsjlgs";
    char * B;
    B=new char[100];
    int res = ProcessString(A,B);
    cout<<res<<' '<< A <<" "<< B<<endl;
    system("pause");
    return 0;
}

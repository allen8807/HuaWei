/**
4394 字符串小写转换  软件训练营  初级 入职前练习  C/C++  

题目描述：
写出一个程序，接受一个字符串，然后输出转换为小写之后的字符串。不在字母范围内的字符，需丢弃

 
例如1：

输入：ABC

输出：abc

 

例如2:

输入：AbC

输出：abc

 

   接口说明：


   功能:将输入的字符串中英文大写字母改成对应小写字母，并且过滤掉非英文字母字符
    
   输入:字符串
    
   输出:结果字符串，保证输出地址有效。
     
   返回:0表示成功,其它返回-1
     

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

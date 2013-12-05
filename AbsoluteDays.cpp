/**
4351 计算绝对天数  软件训练营  中级 入职前练习  C/C++  
编写一个函数，输入某年某月某日，判断这一天是这一年的第几天。
详细描述：
能够实现如下的计算
支持任何一年任何一天的输入。
要考虑闰年的计算方式
例如2012年的3月5日，就是2012年的第65天
附加说明：
 要符合实际生活中的年/月/日数值，只要有一个异常，返回值都是0。
只考虑公元后的年份，即年绝对为正值
年最大直到9999.

接口设计及说明：
Description    :计算绝对天数
Input Param   :   char year：年份
char month：月份
char day：日期
Output Param  : 无
Return Value   : 计算出的绝对天数
int CalculateAbsoluteDays (char year, char month, char day)
{
    Return 0;
}
*/
#include<iostream>
using namespace std;

int CalculateAbsoluteDays (int year, char month, char day)
{
	if(year>9999||year<=0){
		return 0;
	}else if(month>12||month<=0){
		return 0;
	}else if(day<=0){
		return 0;
	}
	int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	if(year%400==0||(year%100!=0&&year%4==0)){
        days[2]=29;
	}
	if(day>days[month]){
		return 0;
	}
	int res = 0;
	for(int i =1;i<month;++i){
	    res+=days[i];
	}
	res+=day;
    return res;
}



int main()
{
    cout<<"Hello pc"<<endl;
	cout<<  CalculateAbsoluteDays (2000, 2, 29)<<endl;

    system("pause");
    return 0;
}

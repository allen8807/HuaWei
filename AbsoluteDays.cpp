/**
4351 �����������  ���ѵ��Ӫ  �м� ��ְǰ��ϰ  C/C++  
��дһ������������ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��졣
��ϸ������
�ܹ�ʵ�����µļ���
֧���κ�һ���κ�һ������롣
Ҫ��������ļ��㷽ʽ
����2012���3��5�գ�����2012��ĵ�65��
����˵����
 Ҫ����ʵ�������е���/��/����ֵ��ֻҪ��һ���쳣������ֵ����0��
ֻ���ǹ�Ԫ�����ݣ��������Ϊ��ֵ
�����ֱ��9999.

�ӿ���Ƽ�˵����
Description    :�����������
Input Param   :   char year�����
char month���·�
char day������
Output Param  : ��
Return Value   : ������ľ�������
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

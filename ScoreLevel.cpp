/**
4344 �ٷ��Ƴɼ�  ���ѵ��Ӫ  ���� ��ְǰ��ϰ  C/C++  
�ٷ��Ƴɼ�
��Ҫ����������һ�ٷ��Ƴɼ���Ҫ������ɼ��ȼ���A������B������C������D������E����90������ΪA 80-89��ΪB 70-79��ΪC 60-69��ΪD 60������ΪE 
���룺һ������0��100����
�����һ���ַ�����ʾ�ɼ��ȼ�
���磺���룺90
�����A

*/

#include<iostream>
using namespace std;

/*
����:
����һ�ٷ��Ƴɼ���Ҫ������ɼ��ȼ���A������B������C������D������E����
90������ΪA 80-89��ΪB 70-79��ΪC 60-69��ΪD 60������ΪE

  ����:
  ����score
  
	���:
	��
	
	  ����:
	  �ּ����
	  ��������100��Χʱ����-1
*/

int ScoreLevel(int score)
{
    if(score>100||score<0){
		return -1;
	}else if(score>=90){
		return 'A';
	}else if(score>=80){
		return 'B';
	}else if(score>=70){
		return 'C'; 
	}else if(score>=60){
		return 'D';
	}else{
		return 'E';
	}
}
int main()
{
    cout<<"Hello pc"<<endl;
	cout<<ScoreLevel(99)<<endl;
    system("pause");
    return 0;
}

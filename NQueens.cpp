//N�ʺ�����  4342 N�ʺ�  ���ѵ��Ӫ  ���� ��ְǰ��ϰ  C/C++ 
/**
�ʺ��ǹ��������������������ӡ���������ʾ�������ϣ��ʺ���Թ���λ�ڼ�ͷ������λ�õ��������ӡ������ܲ��ܰ�N���ʺ��������(N��N)�ϣ������е��κ�һ�����޷���������Ļʺ�?���д�����ҳ�һ���м��ַ�����

��ϸ������

�ӿ�˵��

ԭ�ͣ�

intPlaceQueenMethodNum(int n);

���������
    int n: �ʺ�ĸ���
����ֵ��
        int: ����n�ʺ󷽰��ĸ���

*/
#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

void RecursionPlaceQueen( int * p_queens,const int p_level,const int p_size,int & p_num);
/*
����: ������8�ʺ󷽰��ĸ�����
���룺
    ��
���أ�
    int������8�ʺ󷽰��ĸ���
*/
int PlaceQueenMethodNum(int p_N)
{
    /*������ʵ�ֹ���*/
	int *queens;
	queens=new int[p_N];
	memset(queens,0,sizeof(int)*p_N);
	int res = 0;
	RecursionPlaceQueen( queens,0,p_N,res);
    return res;
}
/*
����p_level���ʺ���ǰ����Ƿ��ͻ
p_queens���ʺ��λ��ƫ����Ϊ����������Ϊ����
p_level����ǰ����Ļʺ� 
*/
bool CheckCollision(const int * p_queens,const int p_level){
	for(int i=0;i<p_level;++i){
		if(p_queens[p_level]==p_queens[i]){
			return true;
		}
	    if(abs(p_level-i)==abs(p_queens[p_level]-p_queens[i])){
	        return true;
		}
	}
	return false;
}
/*
�ݹ鴦��ÿ���ʺ�
p_queens���ʺ��λ��ƫ����Ϊ����������Ϊ����
p_level����ǰ����Ļʺ� 
p_size���ʺ�����
p_num�����Ҫ���صĽ����������� 
*/
void RecursionPlaceQueen( int * p_queens,const int p_level,const int p_size,int & p_num){
	if(p_size==p_level){
	++p_num;
	return;
	}else{
		p_queens[p_level]=0;
	    for(int i=0;i<p_size;++i){
			++(p_queens[p_level]);
	        if(CheckCollision(p_queens,p_level)==false){
			RecursionPlaceQueen(p_queens,p_level+1,p_size,p_num);
			}
	    }
	}
}

int main()
{
    cout<<"Hello pc"<<endl;
    int res = PlaceQueenMethodNum(5);
    cout<<"res:"<<res<<endl;
    system("pause");
    return 0;
}

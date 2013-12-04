/**
4343 ��ķ˹������  ���ѵ��Ӫ  ���� ��ְǰ��ϰ  C/C++  
���һ��������������������ֵ������ͣ��������Ϊ��ķ˹������(���Ϊ��������)��1���⣬��407 = 43+03+73����һ����ķ˹���������Ա����n(n �� 65536)���ڵ����а�ķ˹��������

 ע������İ�ķ˹�����������ϵĶ��岻ͬ���������ǰ���Ŀ����˼������ 
  
	
�ӿ�˵��
	  
ԭ�ͣ�
		
	int CalcArmstrongNumber(int n);
		  
���������
			
	int n: n �� 65536
				  
����ֵ��
					
	n���ڵİ�ķ˹������������
					  
*/ 
#include<iostream>
#include<cmath>
using namespace std;
/*
����: ��n(n �� 65536)���ڵ����а�ķ˹������
ԭ�ͣ�
int CalcArmstrongNumber(int n);

  ���������
  int n: n �� 65536
  
	����ֵ��
    n���ڵİ�ķ˹��������������
*/
bool IsArmstrongNumber(const int p_N);
int CalcArmstrongNumber(int n)
{
    /*������ʵ�ֹ���*/
	if(n<=1){
		return 0;
	}
    int res = 0;
	for(int i=2;i<=n;++i){
		if(IsArmstrongNumber(i)==true){
			++res;
		}
	}
    return res;
}

bool IsArmstrongNumber(const int p_N){
	
	int tmp = p_N;
	int sum = 0;
	while(tmp>0){
		sum += int(pow(float(tmp%10),3));
		tmp/=10;
	}
	if(sum == p_N){
		return true;
	}else{
		return false;
	}
}

int main()
{
    cout<<"Hello pc"<<endl;
	int res = CalcArmstrongNumber(10000);
	cout<<res<<endl;
    system("pause");
    return 0;
}

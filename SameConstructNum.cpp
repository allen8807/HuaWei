/**
4345 ����ͬ����������  ���ѵ��Ӫ  ���� ��ְǰ��ϰ  C/C++  
�ҳ�1��n֮��ͬ�����ĸ�����ͬ����������һ��������������ƽ�������ұߡ����磺5��25�ұߵ�����25��625�ұߵ�����5��25����ͬ������
��ϸ������
�ӿ�˵��
ԭ�ͣ�
intSearchSameConstructNum(int n);
���������
    int n������1��n֮���ȫ��ͬ����
����ֵ��
        int��1��n֮��ͬ�����ĸ���
*/ 

#include<iostream>
#include<stack>
using namespace std;

bool IsIsomorphic(int p_N){
	int tmp=p_N;
	stack<unsigned char>digits;
	while(tmp!=0){
		digits.push(tmp%10);
		tmp/=10;
	}
	int size=digits.size();
	int modNum = 1;
	while(size>0){
		modNum*=10;
		--size;
	}
	if((p_N*p_N)%modNum == p_N){
		return true;                
	}else{
		return false;
	}
} 
bool IsIsomorphic(int p_N,int p_modNum){
    if((p_N*p_N)%p_modNum == p_N){
		return true;                
	}else{
		return false;
	}
}

int SearchSameConstructNum(int n){
	int modNum=10;
	int res=0;
	for(int i=1;i<=n;++i){
        if(i>=modNum){
			modNum*=10;
		}
		if(IsIsomorphic(i,modNum)){
			++res;
		}   
		
	}
	return res;
}


int main()
{
    cout<<"Hello pc"<<endl;
    cout<<SearchSameConstructNum(5)<<endl;
	cout<<IsIsomorphic(1,10)<<endl;
    system("pause");
    return 0;
}

/**4369 ˮ�ɻ���  ���ѵ��Ӫ  ���� ��ְǰ��ϰ  C/C++ 

  ˮ�ɻ����ֳư�ķ˹��������
  ˮ�ɻ�����ָһ��n λ��( n��3 )������ÿ��λ�ϵ����ֵ�n ����֮�͵��������������磺1^3 + 5^3 + 3^3 = 153��
  ������������Ƿ�Ϊˮ�ɻ���
  
*/

#include<iostream>
#include<stack>
using namespace std;

unsigned int IsDaffodilNum(unsigned int nValue)
{
	if(nValue<100){
		return 0;
	}
	stack<unsigned char> digits;
	unsigned int tmp = nValue;
	while(tmp!=0){
        digits.push(tmp%10);
		tmp/=10;
	}
	int po = digits.size();
	unsigned int sum =0;
	while(!digits.empty()){
		unsigned int powTmp=1;
		unsigned char digit =  digits.top();
		for(int i = 0;i<po;++i){
			powTmp*=digit;
		}
		sum+= powTmp;
		digits.pop();
	}
	if(sum == nValue){
		return 1;
	}else{
		return 0;
	}
}

int main()
{
    cout<<"Hello pc"<<endl;
	cout<<IsDaffodilNum(88593477)<<endl;
	system("pause"); 
    return 0;
}

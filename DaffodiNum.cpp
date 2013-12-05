/**4369 水仙花数  软件训练营  初级 入职前练习  C/C++ 

  水仙花数又称阿姆斯特朗数。
  水仙花数是指一个n 位数( n≥3 )，它的每个位上的数字的n 次幂之和等于它本身。（例如：1^3 + 5^3 + 3^3 = 153）
  求输入的数字是否为水仙花数
  
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

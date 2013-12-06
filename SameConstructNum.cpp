/**
4345 查找同构数的数量  软件训练营  初级 入职前练习  C/C++  
找出1至n之间同构数的个数。同构数是这样一组数：它出现在平方数的右边。例如：5是25右边的数，25是625右边的数，5和25都是同构数。
详细描述：
接口说明
原型：
intSearchSameConstructNum(int n);
输入参数：
    int n：查找1至n之间的全部同构数
返回值：
        int：1至n之间同构数的个数
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

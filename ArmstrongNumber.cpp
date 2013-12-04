/**
4343 阿姆斯特朗数  软件训练营  初级 入职前练习  C/C++  
如果一个正整数等于其各个数字的立方和，则该数称为阿姆斯特朗数(亦称为自恋性数)，1除外，如407 = 43+03+73就是一个阿姆斯特朗数。试编程求n(n ≤ 65536)以内的所有阿姆斯特朗数。

 注：本题的阿姆斯特朗数和网上的定义不同，不过还是按题目的意思来做了 
  
	
接口说明
	  
原型：
		
	int CalcArmstrongNumber(int n);
		  
输入参数：
			
	int n: n ≤ 65536
				  
返回值：
					
	n以内的阿姆斯特朗数的数量
					  
*/ 
#include<iostream>
#include<cmath>
using namespace std;
/*
功能: 求n(n ≤ 65536)以内的所有阿姆斯特朗数
原型：
int CalcArmstrongNumber(int n);

  输入参数：
  int n: n ≤ 65536
  
	返回值：
    n以内的阿姆斯特朗数的数量。
*/
bool IsArmstrongNumber(const int p_N);
int CalcArmstrongNumber(int n)
{
    /*在这里实现功能*/
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

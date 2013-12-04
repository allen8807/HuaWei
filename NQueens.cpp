//N皇后问题  4342 N皇后  软件训练营  初级 入职前练习  C/C++ 
/**
皇后是国际象棋中威力最大的棋子。在下面所示的棋盘上，皇后可以攻击位于箭头所覆盖位置的所有棋子。我们能不能把N个皇后放在棋盘(N×N)上，它们中的任何一个都无法攻击其余的皇后?请编写程序找出一共有几种方法。

详细描述：

接口说明

原型：

intPlaceQueenMethodNum(int n);

输入参数：
    int n: 皇后的个数
返回值：
        int: 放置n皇后方案的个数

*/
#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

void RecursionPlaceQueen( int * p_queens,const int p_level,const int p_size,int & p_num);
/*
功能: 求解放置8皇后方案的个数。
输入：
    无
返回：
    int：放置8皇后方案的个数
*/
int PlaceQueenMethodNum(int p_N)
{
    /*在这里实现功能*/
	int *queens;
	queens=new int[p_N];
	memset(queens,0,sizeof(int)*p_N);
	int res = 0;
	RecursionPlaceQueen( queens,0,p_N,res);
    return res;
}
/*
检测第p_level个皇后与前面的是否冲突
p_queens：皇后的位置偏移量为列数，内容为行数
p_level：当前处理的皇后 
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
递归处理每个皇后
p_queens：皇后的位置偏移量为列数，内容为行数
p_level：当前处理的皇后 
p_size：皇后总量
p_num：最后要返回的结果，解得数量 
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

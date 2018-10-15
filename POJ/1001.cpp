#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#define MAXSIZE 7
using namespace std;
string result;
string tmp;
string base;//基数;
 
//从此可以看到c比c++的优越之处;
string mul(string multiplied,string multiplier)
{
	tmp = string(150,'0');
	int carrier=0;//进位;
	int answer=0;//得数;
	int j = 0;int i = 0;
	for (i = 0; i < multiplied.length(); i++)
	{
		carrier = 0;
		for (j = 0; j < multiplier.length(); j++)
		{
			answer  = ((multiplier.at(j)-'0')*(multiplied.at(i)-'0') + (tmp.at(i+j)-'0') + carrier )%10;
			carrier = ((multiplier.at(j)-'0')*(multiplied.at(i)-'0') + (tmp.at(i+j)-'0') + carrier )/10;
			tmp[i+j] = answer + '0';
		}
		if (carrier)
		{
			tmp[i+j] = carrier + '0';
		}
	}
	//tmp[i+j]='/0';//不知道这个是否有必要;
	tmp = tmp.substr(0,i+j);
	return tmp;
}
string expo(string multier,int time)
{
	if (time==1)//如果要乘一次，直接返回;
	{
		return multier;
	}
	result = expo(multier,time-1);
	/*下面计算multier与result的乘积 */
	return mul(result,multier);
 
}
 
int main()
{
  
	int time;//次数;
	
	while(cin>>base>>time)
	{
		/*下面的代码可以用来处理无效0*/
		int start = 0;
		int end   = base.length()-1;
		int pos  = base.find('.');
		while( start <= base.length()-1 && base.at(start)=='0' )
		{
			start++;
		}
		if (pos!=-1)//如果存在小数点;
		{
			while (end>=0 && base.at(end)=='0')
			{
				end--;
			}
		}
		
		//执行之后start指向第一个不为0的位,end指向小数部分最后一个不为0的整数，如果没有小数则指向个位部分;
		/*下面取出有效部分*/
		base = base.substr(start,end-start+1);
		/*下面记下小数点位置并除去小数点*/
		pos = base.find('.');
			/*下面计算结果中小数部分的长度，那么它也可以作为结果倒置的时候的下标*/
		if(pos!=-1){
			int len = base.length();
			base.erase(pos,1);
			pos = time * (len-pos-1);
		}
		/*下面可以将这个字符串倒置*/
		/*cout<<base<<" ";*/
		reverse(base.begin(),base.end());
		/*cout<<base<<endl;*/
		
		/*下面开始根据time次数进行大整数乘法*/
		end = 0;
		result = expo(base,time);
		if(pos!=-1){
			result.insert(pos,1,'.');
			
			while (result.at(end) == '0')
			{
				end++;
			}
			//判断剩下的最后一位是不是小数点;
			if ( result.at(end) == '.')
			{
				end++;
				
			}
		}
		//下面删去前面多余的0;
		start = result.length()-1;
		while (start >=0 && result.at(start) == '0')
		{
			start--;
		}
		if(start<end)//表示结果是0;
		{
			result = "0";
		}else{
			result = result.substr(end,start-end+1);
			reverse(result.begin(),result.end());
		}
		////判断剩下的整数是不是0;
		//end = result.length()-1;
		//while (end >=0 && result.at(end) == '0')
		//{
		//	end--;
		//}
		//if (end == -1)
		//{
		//	result = "0";
		//}
		cout<<result<<endl;
	}
 
	return 0;
}

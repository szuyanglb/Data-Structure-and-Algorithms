/*
题目描述

C++中已经自带堆栈对象stack，无需编写堆栈操作的具体实现代码。

本题目主要帮助大家熟悉stack对象的使用，然后实现字符串的逆序输出

输入一个字符串，按字符按输入顺序压入堆栈，然后根据堆栈后进先出的特点，做逆序输出

stack类使用的参考代码

包含头文件<stack>  ：  #include <stack>

创建一个堆栈对象s（注意stack是模板类）：stack <char>  s; //堆栈的数据类型是字符型
把一个字符ct压入堆栈： s.push(ct);
把栈顶元素弹出：s.pop();
获取栈顶元素，放入变量c2： c2 = s.top();
判断堆栈是否空： s.empty()，如果为空则函数返回true，如果不空则返回false
输入

第一行输入t，表示有t个测试实例
第二起，每一行输入一个字符串，注意字符串不要包含空格

字符串的输入可以考虑一下代码：

#include <string>

int main()

{ string str;

  Int len;

  cin>>str; //把输入的字符串保存在变量str中

  len = str.length()  //获取输入字符串的长度

}

输出

每行逆序输出每一个字符串

样例输入

2
abcdef
aabbcc
样例输出

fedcba
ccbbaa
*/ 
#include <stack>
#include <iostream>
#include <string>

using namespace std;

int main(){
	stack<char> s;
	int n,m,i;
	string str;
	int len;
	char ct;
	//s.push(ct);
	cin>>n;
	for(i=0;i<n;i++){
		cin>> str;	 //把输入的字符串保存在变量str中
		len = str.length();		//获取输入字符串的长度
		for(m=0;m<len;m++){
			s.push(str[m]);	
		}
		while(!s.empty()){
			ct=s.top();
			s.pop();
			cout<< ct ;
		}
		cout<< endl;
	}
	return 0;
}

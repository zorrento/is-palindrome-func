#include <iostream>
#include <math.h>
using namespace std;
/*
Determine whether an integer is a palindrome. 
An integer is a palindrome when it reads the same backward as forward.
*/

bool IsPalindrome(int x);

int main()
{
	int x;
	cin >> x;
	if(IsPalindrome(x))
		cout << "True\n";
	else
		cout << "False\n";
	system("PAUSE");
	return 0;
}

bool IsPalindrome(int x){
	if(x<0)
		return false;
	int c = x;
	int Num = 0;
	while(c!=0)
	{
		c/=10;
		Num++;
	}
	c = x;
	int k = Num-1;
	int j = 0;
	Num/=2;
	while(Num>0)
	{
		Num--;
		j = pow(10, k);
		if(c/j!=c%10)
			return false;
		c%=j;
		c/=10;
		k-=2;
	}
	return true;
}

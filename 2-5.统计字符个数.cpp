#include<iostream>
#include<string>
using namespace std;
int main()
{
	int letters=0, space=0, digits=0, others=0;
	char c;
	cout << "请输入字符串" << endl;
	cin >> c;
	while ((c = getchar()) != '\n') {
		if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		{
			letters++;
		}
		else if (c == 32)
		{
			space++;
		}
		else if (c >= '0' && c <= '9')
		{
			digits++;
		}
		else
		{
			others++;
		}
	}
	cout << "字母有：" <<letters<< endl;
	cout << "空格有：" << space << endl;
	cout << "数字有：" << digits << endl;
	cout << "其他有：" << others << endl;
	
	return 0;

}
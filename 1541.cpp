#include<string>
#include<stack>
#include<iostream>
using namespace std;
int main() {
	stack<char> str;
	char c;
	while ((c=getchar())!='\n') {
		str.push(c);
	}
	int sum = 0;
	int num = 0;
	int dec = 1;
	int plus = 0;
	while (!str.empty()) {
		num= num +(str.top()-48)*dec;
		dec *= 10;
		str.pop();

		if (str.empty()) {
			sum += plus+num;
			cout << sum;
			return 0;
		}

		if (str.top() == '-') {
			str.pop();
			plus += num;
			sum += -plus;
			num = 0;
			dec = 1;
			plus = 0;
		}


		if (str.top() == '+') {
			str.pop();
			plus += num;
			num = 0;
			dec = 1;
		}
	}
}
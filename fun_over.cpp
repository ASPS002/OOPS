#include <iostream>
using namespace std;

void output(float);
void output(int);
void output(int, float);

int main()
{
	cout << "\nGfG!\n";
	int a = 23;
	float b = 2.3;

	output(a);
	output(b);
	output(a, b);

	return 0;
}

void output(int var)
{ // same function name but different task
	cout << "Integer number:\t" << var << endl;
}

void output(float var)
{ // same function name but different task
	cout << "Float number:\t" << var << endl;
}

void output(int var1, float var2)
{ // same function name but different task
	cout << "Integer number:\t" << var1;
	cout << " and float number:" << var2;
}

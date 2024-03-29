#include<iostream>
using namespace std;
class A{
	public:
		int a;
		void funA(){
			cout<<"\n class A function";
		}
};
class B:public A{
	public:
		int b;
		void funB(){
			cout<<"\n class B function";
		}
};
int main()
{
	B obj;
	obj.a=10;
	obj.b=20;
	
	obj.funA();
	obj.funB();
	
	cout<<obj.a;
	cout<<obj.b;
}

#include<iostream>
using namespace std;

class code{
	int id;
	public:
		code(){
		}
		code(int a){
			id=a;
		}
		code(code & p){
			id=p.id;
		}
		void display();
};
void code :: display()
{
	cout<<id;
}
int main(){
	code a(100);
	code b=a;
	code c=a;
	code d=a;
	cout<<"\nid of a :";a.display();
	cout<<"\nid of b :";b.display();
	cout<<"\nid of c :";c.display();
	cout<<"\nid of d :";d.display();
	return 0;
}

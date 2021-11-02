
#include<bits/stdc++.h>
using namespace std;

class Test
{
	private:
		string name;
		char sec;
		int rollno;
		
	public:
		void setX(string name, char sec, int rollno)
		{
			this->name = name;
			this->sec = sec;
			this->rollno = rollno;
		}
		
		void print()
		{
			cout << "Name: "<<name<<endl<<"Section: "<<sec<<endl<<"Roll Number: "<<rollno<<endl;
		}

};

int main()
{
	Test obj;
	int x = 20;
	string n = "Vaishnavi";
	char c = 'B';
	int roll = 24;
	obj.setX(n,c,roll);
	obj.print();
	
	return 0;

}

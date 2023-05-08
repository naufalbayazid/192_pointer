#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void showNim(); //deklarasi method
};


void mahasiswa::showNim() { //implementasi method diluar class
	cout << "No Induk = " << nim << endl;
} 

int main()
{
	mahasiswa mhs{ 1 }; //object mhs
	mhs.showNim();      //Member Acces Operator

	mahasiswa& pndkr = mhs;  //Pointer Reference pndkrMhs
	pndkr.nim = 2;           //Member Acces Operator
	mhs.showNim();

	mahasiswa* pMhs = &mhs;  //Pointer Dereference pMhs
	pMhs->nim = 3;  //arrow Operator
	mhs.showNim();
	system("pause");
	return 0;
}
	

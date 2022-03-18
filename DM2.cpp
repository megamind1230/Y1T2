// simple truth table (according to the 7 basic logical gates)
#include<iostream>
using namespace std;
void preset(string str)
{
	system("CLS");
	cout << str<<'\n';
	cout << "\tA\tB\toutput\n";
	cout << "\t======================\n";
}
int main()
{
	cout << "This code works with just 2 input vars (A) (B) ;(\n";

		system("color 03");
	do
	{


		cout 
			<< "Enter the operation number\n\n"
			<< "\t\t[0]clear screen\n"
			<< "\t\t[1]and\n"
			<< "\t\t[2]or\n"
			<< "\t\t[3]nand\n"
			<< "\t\t[4]nor\n"
			<< "\t\t[5]xor\n"
			<< "\t\t[6]xnor\n"
			<< "\t\t[7]notA\n"
			<< "\t\t[8]notB\n"
			<< "\t\t[9]exit\n";
		int choice; cin >> choice;
		
		
		bool arrOfi[4] = { 0,0,1,1 };
		bool arrofj[4] = { 0,1,0,1 };
		switch (choice)
		{
		case 1:
			preset("and");
			for (int k = 0; k < 4; k++)
			{
				cout << '\t' << arrOfi[k] << '\t' << arrofj[k] << '\t' << (arrOfi[k] && arrofj[k]) << '\n';
				cout << '\n';
			}
			break;

		case 2:
			preset("or");
			for (int k = 0; k < 4; k++)
			{
				cout << '\t' << arrOfi[k] << '\t' << arrofj[k] << '\t' << (arrOfi[k] || arrofj[k]) << '\n';
				cout << '\n';
			}
			break;

		case 3:
			preset("nand");
			for (int k = 0; k < 4; k++)
			{
				cout << '\t' << arrOfi[k] << '\t' << arrofj[k] << '\t' << !(arrOfi[k] && arrofj[k]) << '\n';
				cout << '\n';
			}
			break;
		case 4:
			preset("nor");
			for (int k = 0; k < 4; k++)
			{
				cout << '\t' << arrOfi[k] << '\t' << arrofj[k] << '\t' << !(arrOfi[k] || arrofj[k]) << '\n';
				cout << '\n';
			}
			break;
		case 5:
			preset("xor");
			for (int k = 0; k < 4; k++)
			{
				cout << '\t' << arrOfi[k] << '\t' << arrofj[k] << '\t' << (arrOfi[k] ^ arrofj[k]) << '\n';
				cout << '\n';
			}
			break;
		case 6:
			preset("xnor");
			for (int k = 0; k < 4; k++)
			{
				cout << '\t' << arrOfi[k] << '\t' << arrofj[k] << '\t' << !(arrOfi[k] ^ arrofj[k]) << '\n';
				cout << '\n';
			}
			break;
		case 7:
			preset("not");
			for (int k = 0; k < 4; k += 2)
			{
				cout << '\t' << arrOfi[k] << '\t' << '\t' << !(arrOfi[k]) << '\n';
				cout << '\n';
			}
			break;
		case 8:
			preset("not");
			for (int k = 0; k < 4; k += 2)
			{
				cout << '\t' << '\t' << arrOfi[k] << '\t' << !(arrOfi[k]) << '\n';
				cout << '\n';
			}
			break;
		case 0:
			system("CLS"); break;
		case 9:
			exit(EXIT_SUCCESS);
		}
	} while (true);
}

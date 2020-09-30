#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int num=0,c[10],d[10],e[10];
int main()
{
	char choice;
	
	cout <<setfill('-')<<setw(44)<<" "<<endl;
	cout << "menu"<<endl;
	cout <<setfill('-')<<setw(44)<<" "<<endl;
	cout << "1.Input student records"<<endl;
	cout << "2.View all student records"<<endl;
	cout << "3.Exit"<<endl;
	cout << "Select menu : ";
	cin >> choice;
	if (choice == '1'){
		cout << "Input Number of student : ";
		cin >> num;
		int *a = new int[num];
		for (int i=0;i<num;i++){
			cout << "Number "<<i+1<<""<<endl;
			cout << "Input Quiz : ";
			cin >> c[i];
			cout << "Input Midterm : ";
			cin >> d[i];
			cout << "Input Final : ";
			cin >> e[i];
		}
		main();
	}
	else if(choice == '2'){
		cout << setfill('-')<<setw(44)<<" "<<endl;
		cout<<"std ID"<<setfill(' ')<<setw(9)<<"Quiz"<<setfill(' ')<<setw(13)<<"Midterm"<<setfill(' ')<<setw(11)<<"Final"<<" "<<endl;
		cout << setfill('-')<<setw(44)<<" "<<endl;
		for (int i=0;i<num;i++){
			cout<<i+1<<setfill(' ')<<setw(13)<<c[i]<<setfill(' ')<<setw(12)<<d[i]<<setfill(' ')<<setw(11)<<e[i]<<" "<<endl;
			cout << setfill('-')<<setw(44)<<" "<<endl;;
			
		}
		main();
	}
	else cout << "Exit"<<endl;
	return 0;
}
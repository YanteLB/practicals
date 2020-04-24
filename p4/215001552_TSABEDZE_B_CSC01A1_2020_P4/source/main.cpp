#include<iostream>
#include<locale> //for case swipping
#include<string>
#include<cstdlib>
using namespace std;

int main()
{
	bool blnContinue = true;

	//do while loop

	do{
		system("cls");
		cout << "\n\nChoose an option \n\n";
		cout << "A) Generate a triangle sequence\n"
			 << "B) Product of triangle sequence\n"
			 << "C) Word SwipeCases\n"
			 << "X) Exit\n\n"
			 << "Option: ";

		char chrOption;
		cin  >> chrOption; //Read user input

		switch(chrOption){
			case 'a':
			case 'A':
				{
					cout << "Enter an interger to generate  a sequence: ";
					int intNumber;
					cin  >> intNumber;
					while(cin.fail()){
						cin.clear();
						cin.ignore(100,'\n');
						cerr << "Invalid interger, RETRY: ";
						cin  >> intNumber;
						}
					cout << "The sequence is: ";
					for(int i = 1 ; i <= intNumber; i++){
						int intTerms;
						intTerms = (i*(i +1))/2;
						cout << intTerms << " ";
						}
				}
			break;

			case 'b':
			case 'B':
				{
					cout  << "Enter an interger: ";
					int intNum;
					cin >> intNum;
					while(cin.fail()){
						cin.clear();
						cin.ignore(50, '\n');
						cerr << "Invalid interger, RETRY: ";
						cin  >> intNum;
						}

					int intTerms, intProd;
					intProd = 1;
					cout << "The product of "<< intNum << " triangle numbers is: ";
					for(int i = 1;i <= intNum; i++){
						intTerms = (i*(i+1))/2;
						intProd = intProd * intTerms;
						}
					cout << intProd << endl;
					}
			break;

			case 'c':
			case 'C':
				{
					cout << "Enter a word: ";
					string strWord;
					locale loc;
					cin  >> strWord;
					cout << "swiped cases for the word " << strWord << " is: ";
					for(char c : strWord){
						if(isupper(c,loc)){
							cout << tolower(c,loc);
						}
						else{
							cout << toupper(c,loc);
						}
					}
				}
			break;

			case 'x':
			case 'X':
				{blnContinue = false;}
			break;

			//if no of the above case are not selected
			default:
				{ cerr << "Invalid option\n";cout << "GoodBye!";}

			system("pause");
			}
		}while(blnContinue);

}

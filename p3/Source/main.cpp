#include <iostream>
#include <string>
#include <cmath>
using namespace std;

const int SUM_ERROR = -3;
const int RANGE_ERROR = -1;
const int CONVERSION_ERROR = -2;

int main()
{
		//intializing variable to read percentanges
		// from each station

		double intSt1, intSt2, intSt3 = 0;
		
		//prompting the user to enter percentages
		//for each station

		cout << "Enter the percentage of unplanned "
				<< "outage for station 1 [0 - 100] \n";
		cin >> intSt1;
		
		///Handling convertion error for intSt1
		if(cin.fail())
		{
				cin.clear();
				string strJunk = "";
				cin >> strJunk;
				cerr << "Please enter an integer "
						<< "in the range[0 - 100]\n"
						<< "retry: ";
				cin >> intSt1;
				if(cin.fail())
				{
						cerr << "fatal error\n";
						return CONVERSION_ERROR;
				}
		}
		//Handling range error for intSt1
		
		if(intSt1 < 0 || intSt1 > 100)
		{
				cerr << "The percentage: "<< intSt1
						<< " is out of range[0 - 100]\n"
						<< "retry: ";
				cin  >> intSt1;

				if(intSt1 < 0 || intSt1 > 100)
				{
						cerr  << "Fatal error";
						return RANGE_ERROR;
				}

		}

	
		cout << "Enter the percentage of unplanned "
				<< "outage for station 2 [0 - 100]\n";
		cin >> intSt2;

		//Handling convertion error for intSt2
		if(cin.fail())
		{
				cin.clear();
				string strJunk = "";
				cin >> strJunk;
				cerr << "Please enter an integer "
						<< "in the range[0 - 100]\n"
						<< "retry: ";
				cin >> intSt2;
				if(cin.fail())
				{
						cerr << "fatal error\n";
						return CONVERSION_ERROR;
				}
		}
		
		//Handling error for intSt2

		if(intSt2 < 0 || intSt2 > 100)
		{
				cerr << "The percentage: " << intSt2
						<< " is out of range[0 - 100]\n"
						<< "retry: ";
				cin  >> intSt2;

				if(intSt2 < 0 || intSt2 > 100)
				{
						cerr << "Fatal error";
						return RANGE_ERROR;
				}
		}
		
		cout << "Enter the percentage of unplanned "
				<< "outage for station 3 [0 - 100\n";
		cin >> intSt3;

		//Handling convertion error for intSt3
		if(cin.fail())
		{
				cin.clear();
				string strJunk = "";
				cin >> strJunk;
				cerr << "Please enter an integer "
						<< "in the range[0 - 100]\n"
						<< "retry: ";
				cin >> intSt3;
				if(cin.fail())
				{
						cerr << "Fatal error\n";
						return CONVERSION_ERROR;
				}
		}

		//Handling error for intSt3

		if(intSt3 < 0 || intSt3 > 100)
		{
				cerr << "The percentage: " << intSt3
						<< " is out of range[0 - 100]\n"
						<< "retry: ";
				cin  >> intSt3;
				if(intSt3 < 0 || intSt3 > 100)
				{
						cerr << "Fatal error";
						return RANGE_ERROR;
				}


		}


						
		//initializing variables to store weights

		double dblWst1, dblWst2, dblWst3 = 0.0;

		//prompting the user to enter weights for each station

		cout << "Enter the weight for station 1 [0 - 1] : ";
		cin  >> dblWst1;

		//checking for conversion errors for dblWst1

		if(cin.fail())
		{
			cin.clear();
			string bin = "";
			cin  >> bin;
			cerr << "Please enter a value in the range [0-1]\n"
				<< "retry: ";
			cin  >> dblWst1;
			if(cin.fail())
			{
				cerr << "Fatal error";
	                        return CONVERSION_ERROR;
			}
		}

		//Handling range errors for dblWst1
		
		if(dblWst1 < 0.0 || dblWst1 > 1.0)
		{
			cerr << "The weight for "<< dblWst1 << " is out of range\n"
					<< "retry: ";
			cin >> dblWst1;
			if(dblWst1 < 0 || dblWst1 > 1.0)
			{
					cerr << "Fatal error";
					return RANGE_ERROR;
			}
		}
		
		cout << "Enter the weight for station 2 [0 - 1] : ";
		cin  >> dblWst2;

		//checking for conversion errors for dblWst2

		if(cin.fail())
		{
			cin.clear();
			string bin = "";
			cin  >> bin;
			cerr << "Please enter a value in the range [0-1]\n"
				<< "retry: ";
			cin  >> dblWst2;
			if(cin.fail())
			{
				cerr << "Fatal error";
				return CONVERSION_ERROR;
			}
		}
		
		//checking range error for dblWst2

		if(dblWst2 < 0 || dblWst2 > 1)
		{
			cerr << "The weight for "<< dblWst2 << " is out of range\n"
					<< "retry: ";
			cin  >> dblWst2;

			if(dblWst2 < 0 || dblWst2 > 1.0)
			{
					cerr << "Fatal error";
					return RANGE_ERROR;
			}
			
				
		}
			
		cout << "Enter the weight for station 3 [0 - 1] : ";
		cin  >> dblWst3;
		
		//checking for conversion errors for dblWst3

		if(cin.fail())
		{
			cin.clear();
			string bin = "";
			cin  >> bin;
			cerr << "Please enter a value in the range [0-1]\n"
				<< "retry: ";
			cin  >> dblWst3;
			if(cin.fail())
			{
				cerr << "Fatal error";
				return CONVERSION_ERROR;
			}
		}
		//checking error for dblWst3

		if(dblWst3 < 0.0 || dblWst3 > 1.0)
		{
			cerr << "The weight for "<< dblWst3 << " is out of range\n"
					<< "retry: ";
			cin >> dblWst3;
			if(dblWst3 < 0.0 || dblWst3 > 1.0)
			{
					cerr << "Fatal error";
					return RANGE_ERROR;
			}
		}
		
			
		//checking if the sum of the weigths sum to one
		double dblSum = dblWst1 + dblWst2 + dblWst3;
		double dblAbs = 0.001;
		if(dblSum < 1-dblAbs || dblSum > 1+ dblAbs)
		{
			cerr << "The sum of the weights you entered are "
				"greater than one\n"
				" TRY AGAIN";
			return SUM_ERROR;
		}


		//Computing weighted avarage
		
		double dblAvg = intSt1*dblWst1 +
				intSt2*dblWst2 +
				intSt3*dblWst3;
		//defining an alert

		char chrAlert ='\0';
		
		if(dblAvg >= 0 && dblAvg <= 59)
		{ 
			chrAlert = 'L';
		}
		else if(dblAvg >= 60 && dblAvg <= 79)
		{
			chrAlert = 'M';
		}
		else if(dblAvg >= 80 && dblAvg <= 100)
		{
			chrAlert = 'H';
		}
		// switch statement
		 switch(chrAlert)
		 {
			 case 'L':
				 cout << "LOW\n";
				 break;

			 case 'M':
				 cout << "Medium\n";
				 break;

			 case 'H':
				 cout << "High\n";
				 break;
				 
			 default:
				 cerr << "Error";
		 }
return 0;
}
				

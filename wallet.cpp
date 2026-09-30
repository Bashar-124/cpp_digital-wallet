#include<iostream>
using namespace std ;
int main() {
	int input = 0,  output = 0, input_times = 0;
	int output_times = 0, Total = 0;
	char option = '/';
	cout << "Enter your option" << endl;
	cin >> option;
	while (option != '*' ) {
		if (option == '+' || option == '-') {
			if (option == '+') {
				cout << "Enter the amount" << endl;
				cin >> input;
				if (input > 0) {
					Total += input;
					cout << "You added " << input << "successfully" << endl;
					input_times += 1 ;
				}

			 else {
				cout << "Error" << endl ;
			}
			}
		 else if (option == '-') {
			cout << "Enter the amount" << endl ;
			cin >> output;
			if  (output <= Total) {
				cout << "You deducted" << output << "successfully" << endl;
				Total -= output;
				output_times += 1 ;
			} else
				cout << "You have no enough money in your wallet" << endl ;
		}
		else 
			cout<<"error"<<endl;
	
		}
	cout << "Enter your option" << endl ;
	cin >> option ;
	}


cout << "Total is" << Total << endl ;
cout << "input times is " << input_times << endl ;
cout << "out put times is " << output_times << endl;

}


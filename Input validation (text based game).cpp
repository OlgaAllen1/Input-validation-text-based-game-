using namespace std;
#include <iostream>
string input (string prompt, string validResponse1, string validResponse2) {
	string userInput;
	while (true) {
		cout << prompt;
		cin >> userInput;
		if (userInput == validResponse1 || userInput == validResponse2) {
			break;
		}
		else {
			cout << "Invalide response.";
		}
	}
	return userInput;
}

int main()
{
	string response = input("Go to the forest or the beach: ", "forest", "beach");
	cout << "You choose to go to the " << response << "." << endl;
}

using namespace std;
#include <iostream>

string toLowerCase(string str) {
	string result;
	for (char letter : str) {
		result += tolower(letter);
	}
	return result;

}

string input (string prompt, string validResponse1, string validResponse2) {
	string userInput;
	while (true) {
		cout << prompt;
		cin >> userInput;

		userInput = toLowerCase (userInput);

		if (userInput == validResponse1 || userInput == validResponse2) {
			break;
		}
		else {
			cout << "Invalid response." << endl;
		}
	}
	return userInput;
}



int main()
{
	string response = input("Go to the forest or the beach: ", "forest", "beach");
	cout << "You choose to go to the " << response << "." << endl;
}

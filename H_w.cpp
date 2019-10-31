#include <iostream>
#include <string>

using namespace std;
char paragraph;
int main()
{	
	string word;
	string paragraph;
	while (paragraph.empty()) {
		cout << "Input a paragraph\n";
		getline(cin, paragraph);
	}
	cout << "\nNice, I see that your paragraph contains " << paragraph.length() << " char, we'll find base on that.\n\n";
	char found = paragraph.find(word);
	int compt = 0;
	while ((word.empty() and found != string::npos) or compt == 3) {
		cout << "Enter the specific word in the paragraph that you are looking for?\n\n";
		getline(cin, word);
		compt++;
		if (compt >= 3) {
			if (!word.empty() and found != string::npos) {
				cout << "I found \"" << word << "\" on the " << paragraph.find(word) + 1 << "th characters.\n";
				break;
			}
			else {
				cout << "this is the third " << compt << "th, maybe your word doesn't exist.\n";
			}
		}
		else if(!word.empty()  and found != string::npos){
			cout << "I found \"" << word << "\" on the " << paragraph.find(word)+1 << "th characters.\n";
		}
	}
	



}
#include <iostream>

using namespace std;

int main() {
    cout << "Welcome to Downloader helper\n Enter a URL to start : ";
    string input;
    cin >> input;
    while(input != "exit"){
	system(("youtube-dl -x --audio-format mp3 '"+input+"'").c_str());
	cout << "Enter another url or exit to quit : ";
	cin >> input;
    }
    return 0;
}

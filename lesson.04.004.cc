#include <iostream>
#include <string>

using namespace std;



const int score_incr = 20;

int main(){
	cout 
		<< " gggg  aaaa  mmmmmmm  eeee " << endl
		<< " g     a  a  m  m  m  e    " << endl
		<< " g gg  aaaa  m  m  m  eeee " << endl
		<< " g  g  a  a  m  m  m  e    " << endl
		<< " gggg  a  a  m  m  m  eeee " << endl
		<< endl
		<< endl
	;

	// Menu Loop
	while(true){
		cout << "Game Begins" << endl;

		int score = 0;
		
		int olda = 0;
		
		// Game Loop
		while(true){
			cout << "Give me a number ";
			int a;
			
			cin >> a;
			
			if (a > olda){
				olda = a;
				score = score + score_incr;

				cout << "Score : " << score << endl;
			}else
				break;
			
		}

		cout << "Game Over" << endl;

		string s;

		while(true){
			cout << "Play Again? (yes / no) ";
			
			cin >> s;
			
			if (s == "yes" || s == "no")
				break;
		}

		if (s == "no")
				break;

	}
}


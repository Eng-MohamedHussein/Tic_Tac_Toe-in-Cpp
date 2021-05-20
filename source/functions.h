
void getPlayers(string& p1, string& p2) {
	cout << "Please enter the name of the first player!\n";
	cin >> p1;
	cout << "Please enter the name of the second player\n";
	cin >> p2;
}
void setPlayer(string&p1, string&p2, string &current, int&number) {
	int x;
	cout << "So who's is playing first?" << endl << "choose (1/2)!" << endl;
	cin >> x;
	if (x == 1) {
		current = p1;
		number = 1;
	}
	else if (x == 2) {
		current = p2;
		number = 2;
	}
	else {
		cout << "wrong Entry" << endl;
	}
}
void changePlayer(string& p1, string& p2, string& current, int& number) {
	
	if (current==p1){
		current = p2;
		number = 2;
	}
	else if (current == p2) {
		current = p1;
		number = 1;
	}
}
void getEntry(int&r,int&c) {
	cout << "Please enter the number of Row then the number of Column" << endl;
	cin >> r;
	cin >> c;
}
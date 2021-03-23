#include <iostream>
#include <vector>
using namespace std;

void mix(vector<string> names, vector<string> copy, int size);
int main(){
	vector<string> names;
	vector<string> copy;
	string name;
	int x;

	do{
		cout << "Enter a name: ";
		getline(cin, name);
		names.push_back(name);
		cout << "Enter 1 to continue: ";
		cin >> x; cin.ignore();
	}while(x == 1);
	cout << endl << endl;

	int size = names.size();
	mix(names, copy, size);

	cout << endl << "program ended" << endl;
	return 0;
}
void mix(vector<string> names, vector<string> copy, int size){
	unsigned int i;
	if(copy.size() == size){
		cout << endl << "recursion: ";
		for(i=0; i< copy.size(); i++){
			cout << copy.at(i) << " ";
		}
		cout << endl << endl;
	}
	else{
		string temp;
		for(i=0; i< names.size(); i++){
			cout << " copy ";
			temp = names.at(i);
			names.erase(names.begin()+i);
			copy.push_back(temp);

			mix(names, copy, size);
			names.insert(names.begin()+i, temp);
			copy.pop_back();
		}
	}
	return;
}

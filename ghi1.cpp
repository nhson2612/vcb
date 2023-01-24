#include<iostream>
#include<fstream>
#include<string>
#include<ctime>
using namespace std;


int main(){
	fstream f("ghi1.txt");
	srand(time(NULL));
	string Count;
	int NOL = 0;
	int RNB;
	string Mean;
	string Doubledot;
	string Mymean;
	while(getline(f,Count)){
		NOL++;
	}
	RNB = (rand( ) % (NOL - 1 + 1)) + 1;
	f.clear();
	f.seekg(0);
	for(int i=1;i<=RNB;i++){
		if(i==RNB){
			f >> Count;
		}
		else {
			getline(f,Count);
		}
	}
	cout << Count << " : " ;
	f >> Doubledot;
	f.ignore(1);
	getline(f,Mean);
	getline(cin,Mymean);
	Mymean == Mean ? cout << "YES" : cout << "NO";
}

// Lab 13
// Programmer: Dhanush Patel
// Editor(s) used: Eclipse
// Compiler(s) used: Eclipse

#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
	 ifstream fin;
	 cout << "Programmer: Dhanush Patel" << endl;
	 cout << "Description: This program alphabetically sorts names from a user provided text file." << endl;
	 cout << endl;

	 const int MAX_NAMES = 5;
	 int nNames = 0;
	 string name[MAX_NAMES];

	 string inputFile;
	 cout << "Enter the name of the file containing names: ";
	 getline(cin,inputFile);


	 fin.open(inputFile.c_str());
	 while(fin.good()){
		 string line;
		 getline(fin, line);
		if(!line.empty()){
			bool duplicate = false;
			for(int i = 0; i < nNames; i++){
				if(line==name[i]){
					duplicate = true;
				}
			}
			if(!duplicate){
				if(nNames < MAX_NAMES){
					name[nNames++] = line;
				}
			}
		}
	  }
	 fin.close();
	 sort(name,name+nNames);
	 for(int i = 0; i < nNames; i++){
		cout << name[i] << endl;
	 }
}


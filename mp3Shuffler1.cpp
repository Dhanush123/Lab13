// Lab 13
// Programmer: Dhanush Patel
// Editor(s) used: Eclipse
// Compiler(s) used: Eclipse

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
	 srand(time(0));
	 ifstream fin;
	 cout << "Programmer: Dhanush Patel" << endl;
	 cout << "Description: This program asks the user to play up to 200 songs." << endl;
	 cout << endl;

	 string inputFile = "songs.txt";
	 fin.open(inputFile);

	 const int MAX_SONGS = 200;
	 int nSongs = 0;
	 string song[MAX_SONGS];

	 bool continueMusic;
	 while(fin.good()){
		   string line;
		   getline(fin, line);
		   if(nSongs < MAX_SONGS){
			song[nSongs++]=line;
		   }
	 }

	 fin.close();
     char answer;
		 do{
         cout << "play a song [Y/N]?: ";
         cin >> answer;
         cin.ignore(1000,10);
         if(answer=='Y' || answer=='y'){
        	 continueMusic = true;
             int index = rand() % 200 + 1;
             string songShow = song[index];
             cout << songShow << endl;
         }
         else if(answer=='N' || answer=='n'){
             continueMusic = false;
         }
		 }while(continueMusic);
		 if(!continueMusic){
			 return 0;
		 }

}



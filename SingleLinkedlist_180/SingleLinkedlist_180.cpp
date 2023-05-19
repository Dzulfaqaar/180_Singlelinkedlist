#include <iostream>
using namespace std;

struct node {
	int noMhs;
	string name;
	node* next; 
};

node* START = NULL;

void addnode() {
	int nim;
	string nama;
	node* nodebaru = new node();
	cout << "Masukkan NIm: ";
	cin >> nim;
	cout << "Masukkan Nama: ";
	cin >> nama;
	nodebaru->noMhs = nim;
	nodebaru->name = nama;

	if (START == NULL || nim <= START->noMhs) {
		if (START != NULL && nim == START->noMhs) {
			cout << "Nim sudah ada" << endl;
			return;
		}
		node* current = START;
		node* previous = START;

		

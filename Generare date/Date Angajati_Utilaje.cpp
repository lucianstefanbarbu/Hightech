#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <time.h>
#include <fstream>

using namespace std;

// INDEX DE PORNIRE = 307

int main()
{
	int angajat_id,utilaj_id;
	
	srand(time(0));
	
	ofstream file;
	file.open("date_angajati_utilaje.txt");
	
	for(int i = 0; i < 300; i++)
	{
		angajat_id = rand() % 200 + 207;
		
		utilaj_id = rand() % 100 + 3;
		
		file << "(" << angajat_id << ",";
		file << utilaj_id << "),";
		file << endl;
	}
	
	file.close();
	return 0;
}

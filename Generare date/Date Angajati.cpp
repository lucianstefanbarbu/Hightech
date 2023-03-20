#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <time.h>
#include <fstream>

using namespace std;

// INDEX DE PORNIRE = 207

int main()
{
	const char* nume[20] = {"Adamescu","Afrim","Alexandrescu","Bercea","Bercu","Begu","Bogza","Baciu","Anton","Arnautu","Bacalbasa","Brumaru","Caciuc","Cablea","Caciora","Caia","Constantin","Ceau","Cal","Caisim"};
	const char* prenume[20] = {"Adriana","Ana","Alexandra","Camelia","Bianca","Carla","Codruta","Cosmina","Dana","Delia","Adelin","Alin","Claudiu","Ciprian","Costel","Daniel","Denis","Dorel","Dumitru","Florin"};
	
	int dep_id,asig_index,sup_id,num,prenum,cnp[13],varsta,tel[10];
	int asig_id[7] = {3, 4, 5, 6, 7, 8, 10};
	
	srand(time(0));
	
	ofstream file;
	file.open("date_angajati.txt");
	
	for(int i = 0; i < 200; i++)
	{
		dep_id = rand() % 7 + 15;
		
		asig_index = rand() % 7;
		
		sup_id = rand() % 200 + 207;
		
		num = rand() % 20;
		
		prenum = rand() % 20;
		
		cnp[0] = rand() %2 +5;
		for(int j = 1; j < 13; j++)
			cnp[j] = rand() %10;
			
		varsta = rand() % 52 + 18;
		
		tel[0] = 0;
		tel[1] = 7;
		for(int j = 2; j < 10; j++)
			tel[j] = rand() % 10;
			
		//Afisarea rezultatului in format acceptat de SQL
			
		file << "(" << dep_id << ",";
		file << asig_id[asig_index] << ",";
		file << sup_id << ",";
		file << "'" << nume[num] << "',";
		file << "'" << prenume[prenum] << "',";
		file << "'M'" << ",";
		file << "'";
		for(int j = 0; j < 13; j++)
			file << cnp[j];
		file << "',";
		file << varsta << ",";
		file << "'";	
		for(int j = 0; j < 10; j++)
			file << tel[j];
		file << "',";
		file << "'" << nume[num] << prenume[prenum] << i << "@hightech.ro" << "'),";
		file << endl;
	}
	
	file.close();
	return 0;
}

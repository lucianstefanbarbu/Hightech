#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <time.h>

using namespace std;

int main()
{
	const char* nume[20] = {"Adamescu","Afrim","Alexandrescu","Bercea","Bercu","Begu","Bogza","Baciu","Anton","Arnautu","Bacalbasa","Brumaru","Caciuc","Cablea","Caciora","Caia","Constantin","Ceau","Cal","Caisim"};
	const char* prenume[20] = {"Adriana","Ana","Alexandra","Camelia","Bianca","Carla","Codruta","Cosmina","Dana","Delia","Adelin","Alin","Claudiu","Ciprian","Costel","Daniel","Denis","Dorel","Dumitru","Florin"};
	
	int dep_id,asig_index,sup_id,num,prenum,varsta;
	int cnp[13],tel[10];
	int asig_id[7] = {3, 4, 5, 6, 7, 8, 10};
	
	
	srand(time(0));
	
	for(int i = 0; i < 20; i++)
	{

		dep_id = rand() % 7 + 15;
	//	cout << "depid = " << dep_id << endl;
		
		asig_index = rand() % 7;
	//	cout << "asigid = " << asig_id << endl;
		
		sup_id = rand() % 200 + 1;
	//	cout << "supid = " << sup_id << endl;
		
		num = rand() % 20;
	//	cout << "num = " << num << endl;
		
		prenum = rand() % 20;
	//	cout << "prenum = " << prenum << endl;
		
		cnp[0] = rand() %2 +5;
		for(int j = 1; j < 12; j++)
			cnp[j] = rand() %10;
	//	cout << "cnpvec = ";
	//	for(int j = 0; j < 12; j++)
	//		cout << cnpvec[j];
	//	cout << endl;
		
		varsta = rand() % 52 + 18;
	//	cout << "varsta = " << varsta << endl;
		
		tel[0] = 0;
		tel[1] = 7;
		for(int j = 2; j < 10; j++)
			tel[j] = rand() % 10;
	//	cout << "tel = ";
	//	for(int j = 0; j < 10; j++)
	//		cout << tel[j];
	//	cout << endl;

		
	//	cout << "-----------------------------------------------" << endl;
	//	cout << "-----------------------------------------------" << endl;
	//	cout << "-----------------------------------------------" << endl;
	
	cout << "(" << dep_id << ",";
	cout << asig_id[asig_index] << ",";
	cout << sup_id << ",";
	cout << "'" << nume[num] << "',";
	cout << "'" << prenume[prenum] << "',";
	cout << "'M'" << ",";
	cout << "'";
	for(int j = 0; j < 12; j++)
		cout << cnp[j];
	cout << "',";
	cout << varsta << ",";
	cout << "'";	
	for(int j = 0; j < 10; j++)
		cout << tel[j];
	cout << "',";
	cout << "'" << nume[num] << prenume[prenum] << "@hightech.ro" << "')";
	cout << endl;
	}
}

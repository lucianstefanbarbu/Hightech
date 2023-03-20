#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <time.h>
#include <fstream>

using namespace std;

// INDEX DE PORNIRE = 3

int main()
{
	const char* producator[10] = {"Bosch","CAT","Intesa","Helve","Imarke","Deutz-Fahr","CaseIH","Legmas","Felder","ClassRenault"};
	const char* nume[10] = {"MasinaPAL","MasinaCantuire","Motostivuitor","Circular","Banda","UscatorUV","RobotSudura","MasinaSlefuit","RobotDeCalibrat","PresaHidraulica"};
	
	int dep,prod,num,serie[5],g;
	
	srand(time(0));
	
	ofstream file;
	file.open("date_utilaje.txt");
	
	for(int i = 0; i < 100; i++)
	{
		dep = rand() % 7 + 15;
		
		prod = rand() % 10;
		
		num = rand() % 10;
		
		for(int j = 0; j < 5; j++)
			serie[j] = rand() % 10;
		
		g = rand () % 800 + 200;
		
		file << "(" << dep << ",";
		file << "'" << producator[prod] << "',";
		file << "'" << nume[num] << "',";
		file << "'";
		for(int j = 0; j < 5; j++)
			file << serie[j];
		file << "',";
		file << g << "),";
		file << endl;
	}
	file.close();
	return 0;
}

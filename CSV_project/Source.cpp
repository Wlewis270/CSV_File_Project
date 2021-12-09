#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int ROWS = 15;
const int COLS = 15;

void main() {
	int array2d[ROWS][COLS];
	ifstream arrayInputFile;
	string strLine;

	arrayInputFile.open("TSP10.csv", ios::in);
	
	string strVal;
	for (int row = 0; row < ROWS; row++) {
		arrayInputFile >> strLine;
		int startPos = 0;
		int pos = strLine.find(",");
		for (int col = 0; col < COLS - 1; col++) {
			strVal = strLine.substr(startPos, pos - startPos);
			array2d[row][col] = atoi(strVal.c_str());
			startPos = pos + 1;
			pos = strLine.find(",", startPos);
		}
		strVal = strLine.substr(startPos, strLine.length() - startPos);
		array2D[row][COLS - 1] = atoi(strVal.c_str());
	}

}
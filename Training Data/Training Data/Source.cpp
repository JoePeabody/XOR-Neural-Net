#include <iostream>
#include <cstdio>
#include <fstream>
#include <ctime>

using namespace std;

int main()
{
	// Random training sets for XOR -- two inputs and one output

	ofstream outfile;
	outfile.open("C:/Users/jpbd1/Desktop/trainingData.txt");

	outfile << "topology 2 8 4 1" << endl;
	for (int i = 5000; i > 0; i--)
	{
		int n1 = (int)(2.0 * rand() / double(RAND_MAX));
		int n2 = (int)(2.0 * rand() / double(RAND_MAX));
		int t = n1 ^ n2; //Should be 0 or 1
		outfile << "in: " << n1 << ".0 " << n2 << ".0 " << endl;
		outfile << "out: " << t << ".0" << endl;
	}

	outfile.close();
}
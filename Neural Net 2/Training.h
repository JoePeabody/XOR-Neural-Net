#pragma once
#include "Head.h"

class TrainingData
{
public:
	TrainingData(const string trainDAta);
	bool isEof(void) { return m_trainingDataFile.eof(); }
	void getTopology(vector<unsigned> &topology);

	// Returns the number of input values read from the file:
	unsigned getNextInputs(vector<double> &inputVals);
	unsigned getTargetOutputs(vector<double> &targetOutputVals);
private:
	ifstream m_trainingDataFile;
};
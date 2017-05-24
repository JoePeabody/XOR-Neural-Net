#pragma once
#include <vector>
#include <iostream>
#include <cstdlib>
#include <cassert>
#include <cmath>
#include <fstream>
#include <sstream>

using namespace std;

class TrainingData;

struct Connection
{
	double weight;
	double deltaWeight;
};

class Neuron;

class Net;

typedef vector<Neuron> Layer;
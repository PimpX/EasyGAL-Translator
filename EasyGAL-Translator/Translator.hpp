#pragma once

/*
*	This is the interface which computes given truth tables to the JEDEC file format.
*	The Translator::Process is the entry point for the translator and processes everything translator related.
*/

#include <vector>

#include "TableData.hpp"
#include "Serialization.h"
#include "Helper.hpp"
#include "Fuses.h"
#include "DNF.hpp"
#include "Configs.h"

using namespace std;

namespace Translator 
{
	bool Process(vector<TableData> TruthTables, std::string DeviceType, std::string Filename);
}
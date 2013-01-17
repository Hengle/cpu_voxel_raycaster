#ifndef OCTREE_IO_H_
#define OCTREE_IO_H_
#pragma once

#include "Octree.h"
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

bool checkForOctreeCache(std::string basefilename);
int readOctree(std::string basefilename, Octree*& octree);
int writeOctree(std::string basefilename, Octree* octree);

#endif /* OCTREE_H_ */
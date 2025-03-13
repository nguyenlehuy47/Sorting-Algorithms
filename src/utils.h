#pragma once
#include <iostream>
#include <fstream>
#include <string>

void readArrayFromFile(const std::string &filename, int *&arr, int &n);
void writeArrayToFile(const std::string &filename, int *arr, int n);

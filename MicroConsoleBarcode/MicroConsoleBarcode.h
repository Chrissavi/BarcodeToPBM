#pragma once
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

string Usercode;

char InternalCode[14];

string ZERO[4]	= { "0001101", "0100111", "1110010", "000000" };
string ONE[4]	= { "0011001", "0110011", "1100110", "001011" };
string TWO[4]	= { "0010011", "0011011", "1101100", "001101" };
string THREE[4] = { "0111101", "0100001", "1000010", "001110" };
string FOUR[4]	= { "0100011", "0011101", "1011100", "010011" };
string FIVE[4]	= { "0110001", "0111001", "1001110", "011001" };
string SIX[4]	= { "0101111", "0000101", "1010000", "011100" };
string SEVEN[4] = { "0111011", "0010001", "1000100", "010101" };
string EIGHT[4] = { "0110111", "0001001", "1001000", "010110" };
string NINE[4]	= { "0001011", "0010111", "1110100", "011010" };

int STYLE[6];
string LRMARK	= {"101"};
string MMARK	= {"01010"};

void CalculateBarcode();
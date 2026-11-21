#pragma once
#include<map>
#include<iostream>
#include<fstream>

class MorseDecoder
{
	std::map<std::string, char> conversionMap;
	std::string encodedMessage;
	
public:
	MorseDecoder() = delete;
	MorseDecoder(std::string encodedMessage);
	void printDecodedMessage();
};


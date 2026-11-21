#include "MorseDecoder.h"
#include<string>
#include<sstream>

MorseDecoder::MorseDecoder(std::string encodedMessage)
	:
	encodedMessage(encodedMessage)
{
}

void MorseDecoder::printDecodedMessage()
{
	std::ifstream fin("MorseCode.txt");
	if (!fin)
	{
		std::cout << "File not found.\n";
		return;
	}


	std::string line;
	char c = 'a';
	while (std::getline(fin, line))
	{
		conversionMap[(line)] = c;
		++c;
	}
	fin.close();
	conversionMap["/"] = ' ';

	
	std::cout << "Translated Morse text: ";

	std::stringstream ss(encodedMessage);
	while (std::getline(ss, line, ' '))
	{
		std::cout << conversionMap[line];
	}
}

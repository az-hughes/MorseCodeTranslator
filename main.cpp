#include"MorseDecoder.h"


int main()
{
	
	MorseDecoder decoder(".-. .. -.. -.. .-.. . / -- . / - .... .. ... / -... .- - -- .- -.");
	decoder.printDecodedMessage();
	return 0;
}
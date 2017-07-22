#include "jsonparser.h"

#define MAX_SIZE (1024)

using namespace std;
using namespace rapidjson;

//class Parser
Parser::Parser()
{
}

Parser::~Parser()
{
}

void Parser::addData(const std::string &json)
{
	data = json;
}


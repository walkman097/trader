#include "parser.h"
#include "../rapidjson/include/rapidjson/document.h"


using namespace Quants; 
using namespace rapidjson;
	
	//class ParserPrivate
	class ParserPrivate	{
	public:
		ParserPrivate() {
		}

		~ParserPrivate() {
		}

		Document document;
	};

	//class Parser
	Parser::Parser(QObject *parent)
		:QObject(parent)
	{
	}

	Parser::~Parser()
	{
	}

	void Parser::addData(const QString &data)
	{
	}

	bool Parser::parser()
	{
	}


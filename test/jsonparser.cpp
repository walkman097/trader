#include "jsonparser.h"

#define MAX_SIZE (1024)

using namespace std;
using namespace rapidjson;

//class ParserHandler
ParserHandler::ParserHandler()
{
}

ParserHandler::~ParserHandler()
{
}

const std::list<Book>& ParserHandler::getBookList()
{
	return books;
}

bool ParserHandler::Bool(bool )
{
	//cout << __func__ << " Key " << key << " value " << b << endl; 
	return true; 
}

bool ParserHandler::Uint(unsigned u)
{
	//cout << __func__ << " Key " << key << " value " << u << endl; 
	if (key == "saleId") {
		book.saleId = u;
	} else if (key == "mediaId") {
		book.mediaId = u;
	} else if (key == "chapterCnt") {
		book.chapterCnt = u;
	}
	return true; 
}

bool ParserHandler::Uint64(int64_t )
{
	//cout << __func__ << " Key " << key << " value " << i << endl;
	return true; 
}

bool ParserHandler::Double(double d)
{
	//cout << __func__ << " Key " << key << " value " << d << endl;
	if (key == "salePrice") {
		book.salePrice = d;
	} else if (key == "lowestPrice") {
		book.lowestPrice = d;
	}
	return true; 
}

bool ParserHandler::String(const char* str, SizeType , bool )
{ 
	//cout << __func__ << " Key " << key << " value " << str << endl;
	if (key == "authorPenname") {
		book.author = str;
	} else if (key == "title") {
		book.title = str;
	} else if (key == "coverPic") {
		book.coverPic = str;
	} else if (key == "descs") {
		book.desc = str;
	} else if (key == "categoryIds") {
		book.categoryIds = str;	
	} else if (key == "categorys") {
		book.categorys = str;
	}
	return true;
}

bool ParserHandler::Key(const char* str, SizeType , bool )
{ 
	key = str;
	//cout << __func__ << " key " << key << endl;
	return true;
}

bool ParserHandler::StartObject()
{
	return true; 
}

bool ParserHandler::EndObject(SizeType )
{ 
	if (key == "type") {
		books.push_back(book);
		book.clear();
	}
	return true; 
}

bool ParserHandler::StartArray()
{
	return true; 
}

bool ParserHandler::EndArray(SizeType )
{
	return true; 
}
		
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


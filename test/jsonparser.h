#ifndef _JSONPARSER_H_
#define _JSONPARSER_H_ 

#include <list>
#include <iostream>
#include "../rapidjson/include/rapidjson/document.h"
#include "../rapidjson/include/rapidjson/writer.h"
#include "../rapidjson/include/rapidjson/reader.h"
#include "../rapidjson/include/rapidjson/stringbuffer.h"

using namespace std;
using namespace rapidjson;
	
	//struct Book
	struct Book {
		Book() {
			clear();
		}
		
		void clear() {
			saleId = -1;
			mediaId = -1;
			chapterCnt = -1;
			salePrice = 0;
			lowestPrice = 0;
			desc.clear();
			title.clear();
			author.clear();
			coverPic.clear();
			categorys.clear();
			categoryIds.clear();
		}

		int saleId;
		int mediaId;
		int chapterCnt;
		double salePrice;
		double lowestPrice;
		std::string desc;		
		std::string title;		
		std::string author;		
		std::string coverPic;		
		std::string categorys;
		std::string categoryIds;
	};	
	
	//class ParserHandler
	class ParserHandler : public BaseReaderHandler<UTF8<>, ParserHandler> {
	public:
		ParserHandler();
		virtual ~ParserHandler();

		virtual bool Bool(bool b);
		virtual bool Uint(unsigned u);
		virtual bool Uint64(int64_t i);
		virtual bool Double(double d);
		virtual bool String(const char* str, SizeType , bool );
		virtual bool Key(const char* str, SizeType , bool );
		virtual bool StartObject(); 
		virtual bool EndObject(SizeType );
		virtual bool StartArray();
		virtual bool EndArray(SizeType );
	
		const std::list<Book>& getBookList();

	private:
		Book book;
		std::string key;
		std::list<Book> books;
	};

	//class Parser
	class Parser {
	public:
		Parser();
		virtual ~Parser();
		void addData(const std::string &);
		
		template <typename Handler>
		void doParser(Handler &handler) {
			Reader reader;
			StringStream ss(data.c_str());
			reader.Parse(ss, handler);

			const std::list<Book> &books = handler.getBookList();
			cout << __func__ << " len " << books.size() << endl;
			
			std::list<Book>::const_iterator it = books.begin();
			for (; it != books.end(); ++it) {
				cout << " saleId " << it->saleId << " mediaId " << it->mediaId
					<< " chapterCnt " << it->chapterCnt << " salePrice " << it->salePrice
					<< " lowestPrice " << it->lowestPrice << " desc " << it->desc 
					<< " title " << it->title << " author " << it->author
					<< " coverPic " << it->coverPic << " categorys " << it->categorys
					<< " categoryIds " << it->categoryIds << endl;
			}
		}
	
	private:
		std::string data;
	};

#endif


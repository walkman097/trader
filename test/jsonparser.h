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
	
	//struct MyHandler
	struct MyHandler : public BaseReaderHandler<UTF8<>, MyHandler> {
		bool Bool(bool b) {
			//cout << __func__ << " Key " << key << " value " << b << endl; 
			return true; 
		}
		
		bool Uint(unsigned u) {
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
		
		bool Uint64(int64_t i) {
			//cout << __func__ << " Key " << key << " value " << i << endl;
			return true; 
		}

		bool Double(double d) {
			//cout << __func__ << " Key " << key << " value " << d << endl;
			if (key == "salePrice") {
				book.salePrice = d;
			} else if (key == "lowestPrice") {
				book.lowestPrice = d;
			}
			return true; 
		}
		
		bool String(const char* str, SizeType , bool ) { 
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
		
		bool Key(const char* str, SizeType , bool ) { 
			key = str;
			//cout << __func__ << " key " << key << endl;
			return true;
		}
		
		bool StartObject() {
			return true; 
		}

		bool EndObject(SizeType ) { 
			if (key == "type") {
				books.push_back(book);
				book.clear();
			}
			return true; 
		}

		bool StartArray() {
			return true; 
		}

		bool EndArray(SizeType ) {
			return true; 
		}
		
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

			int len = handler.books.size();
			cout << __func__ << " len " << len << endl;

			std::list<Book>::iterator it = handler.books.begin();
			for (; it != handler.books.end(); ++it) {
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


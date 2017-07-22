#ifndef _PARSER_H_
#define _PARSER_H_

#include <QObject>
#include "rapidjson/include/rapidjson/reader.h"

using namespace rapidjson;
namespace Quants {
	
	//struct ReadHandler	

	class ParserPrivate;
	class Parser : public QObject {
		Q_OBJECT
	public:
		Parser(QObject *parent = 0);
		virtual ~Parser();
	
		void addData(const QString &);
		bool parser();
	
	private:
		ParserPrivate *d;
	};

}

#endif


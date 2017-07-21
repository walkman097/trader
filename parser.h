#ifndef _PARSER_H_
#define _PARSER_H_

#include <QObject>

namespace Quants {
	
	class Parser : public QObject {
		Q_OBJECT
	public:
		Parser(QObject *parent = 0);
		virtual ~Parser();

	};

};

#endif


#ifndef _UTIL_H_
#define _UTIL_H_

#include <QObject>
#include "stockinfo.h"

namespace Quants {

	class UtilPrivate;
	class Util : public QObject {
		Q_OBJECT
	public:
		static Util *getInstance();
		virtual ~Util();
	
		StockInfo* getStockInfo();

	private:
		Util();
	
	private:
		static Util *instance;
		UtilPrivate *d;	
	};	
	
};

#endif

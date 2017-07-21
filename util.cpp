#include "util.h"

namespace Quants {
	
	class UtilPrivate {
	public:
		UtilPrivate() {
			stockInfo = NULL;	
		}
		
		virtual ~UtilPrivate() {
			if (stockInfo != NULL) {
				delete stockInfo;
				stockInfo = NULL;
			}
		}

		StockInfo *stockInfo;
	};
	
	//class Util
	Util *Util::instance = NULL;
	Util *Util::getInstance()
	{
		if (instance == NULL)
			instance = new Util;
		return instance;
	}
	
	Util::Util()
	{
		d = new UtilPrivate;
	}

	Util::~Util()
	{
		delete d;
		d = NULL;
	}
	
	StockInfo* Util::getStockInfo()
	{
		if (d->stockInfo == NULL)
			d->stockInfo = new StockInfo;
		return d->stockInfo;
	}

}


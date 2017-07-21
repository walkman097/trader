#include "stockinfo.h"
#include <QDir>
#include <QFile>

namespace Quants {
	
	class StockInfoPrivate {
	public:
		StockInfoPrivate() {
			filePath.clear();	
		}

		~StockInfoPrivate() {
		}

		QString filePath;	
	};	

	//class StockInfo
	StockInfo::StockInfo(QObject *parent)
		:QObject(parent)
		,d(new StockInfoPrivate)
	{
		d->filePath = QDir::currentPath() + "stock.db";
		checkDB();
	}

	StockInfo::~StockInfo()
	{
	}
	
	void StockInfo::initDB()
	{
		//TODO creat DB
	}

	void StockInfo::checkDB()
	{
		if (!QFile::exists(d->filePath))
			initDB();	
	}

};


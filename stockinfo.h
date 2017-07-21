#ifndef _STOCKINFO_H_
#define _STOCKINFO_H_ 

#include <QObject>

namespace Quants {
	
	struct Stock {
		Stock() {
			clear();
		}
		
		bool isValid() {
			return id.isEmpty();
		}

		bool operator == (const Stock &other) {
			return id == other.id;
		}
		
		void clear() {
			id.clear();
			endPrice.clear();
			beginPrice.clear();
			currentPrice.clear();
		}
	
		QString id;
		QString endPrice; 
		QString beginPrice; 
		QString currentPrice; 
	};
	
	//class StockInfo
	class StockInfoPrivate;
	class StockInfo : public QObject {
		Q_OBJECT
	public:
		StockInfo(QObject *parent = 0);
		virtual ~StockInfo();
	
	private:
		void initDB();
		void checkDB();

	private:
		StockInfoPrivate *d;
	};

};

#endif


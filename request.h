#ifndef _REQUEST_H_
#define _REQUEST_H_ 

#include <QObject>

namespace Quants {
	
	class RequestPrivate;
	class Request : public QObject {
		Q_OBJECT
	public:
		Request(QObject *parent = 0);
		virtual ~Request();
		
		enum Method {
			GET,
			POST,
		};
		
		void clear();
		void execute();
		void setMethod(Method );
		void setUrl(const QString &);
		void setPostData(const QString &);
		
		int getResultCode();
		const QString getErrString(); 

	private:
		RequestPrivate *d;
	};

};

#endif


#include "request.h"
#include <QDebug>
#include <QNetworkAccessManager>

namespace Quants {
	
	class RequestPrivate {
	public:
		RequestPrivate() {
			code = -1;
			errString.clear();
			mgr = NULL;
		}

		~RequestPrivate() {
			if (mgr == NULL) {
				delete mgr;
				mgr = NULL;
			}
		}
		
		int code;
		QString url;
		QString errString;
		Request::Method method;
		QNetworkAccessManager *mgr;
	};

	//class Request
	Request::Request(QObject *parent)
		:QObject(parent)
	{
		d = new RequestPrivate;
	}

	Request::~Request()
	{
		delete d;
		d = NULL;
	}
	
	void Request::clear()
	{
		d->code = -1;
		d->errString.clear();
	}

	void Request::execute()
	{
	}

	void Request::setMethod(Method m)
	{
		d->method = m;
	}

	void Request::setUrl(const QString &url)
	{
		qDebug() << "Request" << __func__ << "url" << url;
	}
	
	void Request::setPostData(const QString &url)
	{
		qDebug() << "Request" << __func__ << "url" << url;
	}
	
	int Request::getResultCode()
	{
		return d->code;
	}

	const QString Request::getErrString()
	{
		return d->errString;
	}

}



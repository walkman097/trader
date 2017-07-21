#ifndef _MAINWIDGET_H_
#define _MAINWIDGET_H_

#include <QWidget>

namespace Quants {
	
	class MainWidget : public QWidget {
		Q_OBJECT
	public:
		MainWidget(QWidget *parent = 0);
		virtual ~MainWidget();

	};

};

#endif


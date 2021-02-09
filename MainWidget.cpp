#include "MainWidget.h"
#include <QTableWidget>

MainWidget::MainWidget(QStackedWidget *parent)
	: QStackedWidget(parent)
{
	ui.setupUi(this);



	// Qt::WindowFlags flags = this->windowFlags(); this->setWindowFlags(flags | Qt::FramelessWindowHint); // remove border
}

MainWidget::~MainWidget()
{
}

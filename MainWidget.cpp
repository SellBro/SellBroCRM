#include "MainWidget.h"

MainWidget::MainWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	

	// Qt::WindowFlags flags = this->windowFlags(); this->setWindowFlags(flags | Qt::FramelessWindowHint); // remove border
}

MainWidget::~MainWidget()
{
}

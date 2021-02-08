#pragma once

#include <QStackedWidget>
#include "ui_MainWidget.h"

class MainWidget : public QStackedWidget 
{
	Q_OBJECT

public:
	MainWidget(QStackedWidget *parent = Q_NULLPTR);
	~MainWidget();

private:
	Ui::mainWidget ui;
};

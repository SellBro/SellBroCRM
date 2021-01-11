#pragma once

#include <QWidget>
#include "SellBroCRM.h"
#include "ui_LoginScreen.h"

class LoginScreen : public QWidget
{
	Q_OBJECT

public:
	LoginScreen(QWidget *parent = Q_NULLPTR);
	~LoginScreen();

private:
	SellBroCRM crm;
	QString login;
	QString password;

private slots:
    void on_pushButton_clicked();

private:
	Ui::LoginScreen ui;
};

#pragma once

#include <QNetworkReply>
#include <QNetworkAccessManager>
#include "ui_MainWidget.h"

class MainWidget : public QStackedWidget 
{
	Q_OBJECT

public:
	MainWidget(QStackedWidget *parent = Q_NULLPTR);
	~MainWidget();
	
	static void ReplyFinished(QNetworkReply* reply);

private slots:
    void on_loginButton_clicked();

    void on_signUpButton_clicked();

    void on_rememberMeButton_clicked();
private:
	Ui::mainWidget ui;

	QString email;
	QString password;

	const QString API_URL = "https://sellbro-crm-api.herokuapp.com/health";
	QNetworkAccessManager* manager;
	QNetworkRequest request;
};

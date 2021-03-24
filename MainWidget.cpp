#include "MainWidget.h"


MainWidget::MainWidget(QStackedWidget *parent) : QStackedWidget(parent)
{
	ui.setupUi(this);

	manager = new QNetworkAccessManager();
	auto status = connect(manager, &QNetworkAccessManager::finished,this, &MainWidget::ReplyFinished);
	qDebug() << "Connection Status: " << status;
	// Qt::WindowFlags flags = this->windowFlags(); this->setWindowFlags(flags | Qt::FramelessWindowHint); // remove border
}

MainWidget::~MainWidget()
{
	delete manager;
}

void MainWidget::ReplyFinished(QNetworkReply* reply) {
	QString answer = reply->readAll();
	qDebug() << answer;
	QApplication::quit();
}

void MainWidget::on_loginButton_clicked()
{
	email = ui.emailInput->text();
	password = ui.passwordInput->text();

	manager->get(QNetworkRequest(QUrl(API_URL)));

	qDebug() << manager;
}

void MainWidget::on_signUpButton_clicked()
{

}

void MainWidget::on_rememberMeButton_clicked()
{

}

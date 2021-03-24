#include "MainWidget.h"


MainWidget::MainWidget(QStackedWidget *parent) : QStackedWidget(parent)
{
	ui.setupUi(this);

    // Field Initialization
    email = "";
    password = "";
    token = "";
    rememberPassword = false;

    // Network manager conflict
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
    qDebug() << "Answer";
    qDebug() << answer;
}

void MainWidget::on_loginButton_clicked()
{
	email = ui.emailInput->text();
	password = ui.passwordInput->text();

    QJsonObject json;
    json.insert("email", email);
    json.insert("password", password);

    request.setUrl(QUrl(API_URL + "/login"));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    manager->post(request, QJsonDocument(json).toJson());

    qDebug() << json;
}

void MainWidget::on_signUpButton_clicked()
{
    email = ui.emailInput->text();
    password = ui.passwordInput->text();

    QJsonObject json;
    json.insert("email", email);
    json.insert("password", password);

    request.setUrl(QUrl(API_URL + "/register"));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    manager->post(request, QJsonDocument(json).toJson());

    qDebug() << json;
}

void MainWidget::on_rememberMeButton_clicked()
{
    rememberPassword = !rememberPassword;
}

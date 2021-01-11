#include "LoginScreen.h"
#include "SellBroCRM.h"

LoginScreen::LoginScreen(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

LoginScreen::~LoginScreen()
{
}

void LoginScreen::on_pushButton_clicked()
{
	login = ui.loginTextBox->toPlainText();
	password = ui.passwordTextBox->toPlainText();

	if (login.isEmpty() || password.isEmpty()) return;

	hide();

	QList<QStandardItem*> items;
	QStandardItem* col1 = new QStandardItem("1");
	QStandardItem* col2 = new QStandardItem(login);
	QStandardItem* col3 = new QStandardItem(password);
	items.append(col1);
	items.append(col2);
	items.append(col3);

	crm.updateTable(items);
	crm.show();
}

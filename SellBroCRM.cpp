#include "SellBroCRM.h"

SellBroCRM::SellBroCRM(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    // Table Settings
    table = ui.mainTable;

    horizontalHeader.append("Number");
    horizontalHeader.append("Login");
    horizontalHeader.append("Password");
   

    //model->appendRow(QList<QStandardItem*>() << col1 << col2);
}

void SellBroCRM::on_pushButton_clicked()
{
    this->close();
}

void SellBroCRM::updateTable(QList<QStandardItem*> items ) {
    model = new QStandardItemModel();

    model->setHorizontalHeaderLabels(horizontalHeader);
    model->setVerticalHeaderLabels(verticalHeader);

    table->setModel(model);
    table->verticalHeader()->setVisible(false);
    table->verticalHeader()->setDefaultSectionSize(10);
    table->setShowGrid(false);

    model->appendRow(items);
}

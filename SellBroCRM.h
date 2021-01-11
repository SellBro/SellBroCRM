#pragma once

#include <QTableView>
#include <QStandardItemModel>
#include <QtWidgets/QMainWindow>
#include "ui_SellBroCRM.h"

class SellBroCRM : public QMainWindow
{
    Q_OBJECT

public:
    SellBroCRM(QWidget *parent = Q_NULLPTR);

public:
    QString login;
    QString password;

    void updateTable(QList<QStandardItem*> items);

private:
    QTableView *table;
    QStandardItemModel *model;
    QStringList horizontalHeader;
    QStringList verticalHeader;

private slots:
    void on_pushButton_clicked();

private:
    Ui::SellBroCRMClass ui;
};

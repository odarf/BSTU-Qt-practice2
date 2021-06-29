#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timerstatus = false;
    timer = new QTimer(this);

    i = 0;

   /* modelIn = new QStringListModel(this);
    ui->tableView->setModel(modelIn);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);

    modelOut = new QStringListModel(this);
    ui->tableView_2->setModel(modelOut);
    ui->tableView_2->setEditTriggers(QAbstractItemView::NoEditTriggers);*/

    docIn = new QStringListModel(this);
    docOut = new QStringListModel(this);

    modelIn = new QStringListModel(this);
    ui->listView->setModel(modelIn);
    ui->listView->setEditTriggers(QAbstractItemView::NoEditTriggers);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
        addDial* ad = new addDial();
        ad->show();
    QStandardItemModel *model = new QStandardItemModel;
        QStandardItem *item;

        QStringList task;

        task << "Документ №" << QString::number(++i);




        int row = modelIn->rowCount();
        modelIn->insertRows(row, 1);
        QModelIndex index = modelIn->index(row);
        modelIn->setData(index, task.join("|"));

        task = modelIn->data(index).toString().split("|");

       /* //Заголовки столбцов
        QStringList horizontalHeader;
        horizontalHeader.append("Первый");
        horizontalHeader.append("Второй");
        horizontalHeader.append("Третий");
        horizontalHeader.append("Четвертый");

        //Заголовки строк
        QStringList verticalHeader;
        verticalHeader.append("Ряд 1");
        verticalHeader.append("Ряд 2");

        model->setHorizontalHeaderLabels(horizontalHeader);
        model->setVerticalHeaderLabels(verticalHeader);

        //Первый ряд
        item = new QStandardItem(QString("0"));
        model->setItem(0, 0, item);

        item = new QStandardItem(QString("1"));
        model->setItem(0, 1, item);

        item = new QStandardItem(QString("2"));
        model->setItem(0, 2, item);

        item = new QStandardItem(QString("3"));
        model->setItem(0, 3, item);

        //Второй ряд
        item = new QStandardItem(QString("4"));
        model->setItem(1, 0, item);

        item = new QStandardItem(QString("5"));
        model->setItem(1, 1, item);

        item = new QStandardItem(QString("6"));
        model->setItem(1, 2, item);

        item = new QStandardItem(QString("7"));
        model->setItem(1, 3, item);

        ui->tableView->setModel(model);

        ui->tableView->resizeRowsToContents();
        ui->tableView->resizeColumnsToContents();*/
}

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QtWidgets>
#include <QMainWindow>
#include <QItemSelectionModel>
#include <QStringList>
#include <QStringListModel>
#include <QAbstractItemView>
#include <QTimer>
#include <QString>
#include "adddial.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    int i;
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    QTableView* pTableView;
    QTimer *timer;
    QStringListModel *modelIn, *docIn, *docOut;
    QStringListModel *modelOut;
    bool timerstatus;
    QListView* pListView;
};
#endif // MAINWINDOW_H

#ifndef ADDDIAL_H
#define ADDDIAL_H

#include <QWidget>

namespace Ui {
class addDial;
}

class addDial : public QWidget
{
    Q_OBJECT

public:
    explicit addDial(QWidget *parent = nullptr);
    ~addDial();

private:
    Ui::addDial *ui;
};

#endif // ADDDIAL_H

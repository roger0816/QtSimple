#ifndef STAGEEX01_H
#define STAGEEX01_H

#include <QWidget>
#include <QDebug>

namespace Ui {
class StageEx01;
}

class StageEx01 : public QWidget
{
    Q_OBJECT

public:
    explicit StageEx01(QWidget *parent = 0);
    ~StageEx01();

private:
    Ui::StageEx01 *ui;

signals:

private slots:

    void btnClicked();
};

#endif // STAGEEX01_H

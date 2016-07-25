#ifndef STAGESTART_H
#define STAGESTART_H

#include "StageBase.h"

namespace Ui {
class StageStart;
}

class StageStart : public StageBase
{
    Q_OBJECT

public:
    explicit StageStart(QWidget *parent = 0);
    ~StageStart();

private:
    Ui::StageStart *ui;
};

#endif // STAGESTART_H

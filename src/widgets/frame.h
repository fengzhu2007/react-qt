#ifndef FRAME_H
#define FRAME_H

#include <QFrame>
namespace react_qt{

class Frame : public QFrame
{
    Q_OBJECT
public:
    Q_INVOKABLE Frame(QWidget *parent = nullptr);
};
}
#endif // FRAME_H

#ifndef ACTION_H
#define ACTION_H

#include <QAction>
namespace react_qt{

class Action : public QAction
{
    Q_OBJECT
public:
    Q_INVOKABLE Action(const QString &text,QObject *parent = nullptr);
};
}
#endif // ACTION_H

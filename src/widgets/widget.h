#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
namespace react_qt{

class Widget : public QWidget
{
    Q_OBJECT
public:
    Q_INVOKABLE Widget(QWidget *parent = nullptr);

signals:
};
}

#endif // WIDGET_H

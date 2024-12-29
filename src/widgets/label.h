#ifndef LABEL_H
#define LABEL_H

#include <QLabel>
namespace react_qt{

class Label : public QLabel
{
    Q_OBJECT
public:
    Q_INVOKABLE Label(const QString& text,QWidget* parent=nullptr);
};
}
#endif // LABEL_H

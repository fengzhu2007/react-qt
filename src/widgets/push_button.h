#ifndef PUSH_BUTTON_H
#define PUSH_BUTTON_H
#include <QJSValueList>
#include <QPushButton>
namespace react_qt{
class PushButton : public QPushButton
{
    Q_OBJECT
public:
    Q_INVOKABLE PushButton(const QString& text,QWidget* parent=nullptr);
};
}
#endif // PUSH_BUTTON_H

#ifndef H_BOX_LAYOUT_H
#define H_BOX_LAYOUT_H

#include <QHBoxLayout>
namespace react_qt{

class HBoxLayout : public QHBoxLayout
{
    Q_OBJECT
public:
    Q_INVOKABLE HBoxLayout();
    Q_INVOKABLE HBoxLayout(QWidget* parent);
};
}
#endif // H_BOX_LAYOUT_H

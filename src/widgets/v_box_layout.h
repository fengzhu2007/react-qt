#ifndef V_BOX_LAYOUT_H
#define V_BOX_LAYOUT_H

#include <QVBoxLayout>
namespace react_qt{

class VBoxLayout : public QVBoxLayout
{
    Q_OBJECT
public:
    Q_INVOKABLE VBoxLayout();
    Q_INVOKABLE VBoxLayout(QWidget* parent);
};
}
#endif // V_BOX_LAYOUT_H

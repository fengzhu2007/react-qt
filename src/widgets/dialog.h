#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
namespace react_qt{
class Dialog : public QDialog
{
    Q_OBJECT
public:
    Q_INVOKABLE Dialog(QWidget* parent=nullptr);
};
}
#endif // DIALOG_H

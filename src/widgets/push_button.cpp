#include "push_button.h"
#include <QDebug>
namespace react_qt{

PushButton::PushButton(const QString& text,QWidget* parent):QPushButton(text,parent) {
    qDebug()<<"values"<<text;
}


}

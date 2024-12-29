#include "action.h"
namespace react_qt{

Action::Action(const QString &text,QObject *parent)
    : QAction{text,parent}
{}
}

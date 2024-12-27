#ifndef PLUGIN_H
#define PLUGIN_H
#include "react_qt_global.h"
#include <QJSEngine>

namespace react_qt {

    class QRACT_QT_EXPORT Plugin
    {
    public:
        explicit Plugin(QJSEngine* engine);
    };

}


#endif // PLUGIN_H

#ifndef PLUGIN_H
#define PLUGIN_H
#include "react_qt_global.h"
#include <QJSEngine>
#include <QDialog>
namespace react_qt {

    class QRACT_QT_EXPORT Plugin
    {
    public:
        static void install(QJSEngine* engine);

    private:
        explicit Plugin(QJSEngine* engine);

    private:
        static Plugin* instance;
    };

}


#endif // PLUGIN_H

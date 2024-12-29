#include "plugin.h"
#include <QJSEngine>
#include <QJsValue>
#include "widgets/push_button.h"
#include "widgets/label.h"
#include "widgets/dialog.h"
namespace react_qt {


Plugin* Plugin::instance = nullptr;

Plugin::Plugin(QJSEngine* engine) {
    QJSValue globalObject = engine->globalObject();
    globalObject.setProperty("Label",engine->newQMetaObject<Label>());
    globalObject.setProperty("PushButton",engine->newQMetaObject<PushButton>());
    globalObject.setProperty("Dialog",engine->newQMetaObject<Dialog>());
}


void Plugin::install(QJSEngine* engine){
    if(instance==nullptr){
        instance = new Plugin(engine);
    }
}


}

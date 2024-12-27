#ifndef REACT_QT_GLOBAL_H
#define REACT_QT_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(REACT_QT_LIBRARY)
#  define QRACT_QT_EXPORT Q_DECL_EXPORT
#else
#  define QRACT_QT_EXPORT Q_DECL_IMPORT
#endif

#endif // REACT_QT_GLOBAL_H

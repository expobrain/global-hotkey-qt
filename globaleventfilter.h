#ifndef GLOBALEVENTFILTER_H
#define GLOBALEVENTFILTER_H

#include <QObject>


const Qt::KeyboardModifiers HOTKEY = Qt::ShiftModifier | Qt::ControlModifier;


class GlobalEventFilter : public QObject
{
    Q_OBJECT

public:
    GlobalEventFilter(QObject* parent);
    bool eventFilter(QObject* object, QEvent* event);

private:
    bool hotkey;
};

#endif // GLOBALEVENTFILTER_H

#ifndef QTMATERIALCHECKBOX_H
#define QTMATERIALCHECKBOX_H

#include <QtMaterialWidgets/include/qtmaterialcheckable.h>


class QtMaterialCheckBoxPrivate;

#include <QtUiPlugin/QDesignerExportWidget>
class QDESIGNER_WIDGET_EXPORT QtMaterialCheckBox : public QtMaterialCheckable
{
    Q_OBJECT

public:
    explicit QtMaterialCheckBox(QWidget *parent = 0);
    ~QtMaterialCheckBox();

private:
    Q_DISABLE_COPY(QtMaterialCheckBox)
    Q_DECLARE_PRIVATE(QtMaterialCheckBox)
};

#endif // QTMATERIALCHECKBOX_H

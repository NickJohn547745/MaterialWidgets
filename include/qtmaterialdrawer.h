#ifndef QTMATERIALDRAWER_H
#define QTMATERIALDRAWER_H

#include <QtMaterialWidgets/include/qtmaterialoverlaywidget.h>


class QtMaterialDrawerPrivate;
class QtMaterialDrawerStateMachine;

#include <QtUiPlugin/QDesignerExportWidget>
class QDESIGNER_WIDGET_EXPORT QtMaterialDrawer : public QtMaterialOverlayWidget
{
    Q_OBJECT

public:
    explicit QtMaterialDrawer(QWidget *parent = 0);
    ~QtMaterialDrawer();

    void setDrawerWidth(int width);
    int drawerWidth() const;

    void setDrawerLayout(QLayout *layout);
    QLayout *drawerLayout() const;

    void setClickOutsideToClose(bool state);
    bool clickOutsideToClose() const;

    void setAutoRaise(bool state);
    bool autoRaise() const;

    void setOverlayMode(bool value);
    bool overlayMode() const;

public slots:
    void openDrawer();
    void closeDrawer();

protected:
    bool event(QEvent *event) Q_DECL_OVERRIDE;
    bool eventFilter(QObject *obj, QEvent *event) Q_DECL_OVERRIDE;
    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;

    const QScopedPointer<QtMaterialDrawerPrivate> d_ptr;

private:
    Q_DISABLE_COPY(QtMaterialDrawer)
    Q_DECLARE_PRIVATE(QtMaterialDrawer)
};

#endif // QTMATERIALDRAWER_H

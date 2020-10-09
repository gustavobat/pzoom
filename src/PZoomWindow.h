#ifndef PZOOMWINDOW_H
#define PZOOMWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class PZoomWindow; }
QT_END_NAMESPACE

class PZoomWindow : public QMainWindow
{
    Q_OBJECT

public:
    PZoomWindow(QWidget *parent = nullptr);
    ~PZoomWindow();

private:
    Ui::PZoomWindow *ui;
};
#endif // PZOOMWINDOW_H

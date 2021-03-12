#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QVBoxLayout>
#include <QVector>

#include "Channel.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private:
    QPushButton *NewChannelButton;
    QVBoxLayout *Layout;
    QVector<Channel *> channels;

signals:
    void pressNewChannelButton();

public slots:
    void newChannelButtonPressed();

};
#endif // MAINWINDOW_H

#include "mainwindow.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{

    NewChannelButton = new QPushButton;
    NewChannelButton->setText("New");
    NewChannelButton->setFixedSize(QSize(40, 40));

    //channels.push_back((Channel *)NewChannelButton);

    QWidget *placeholderWidget = new QWidget;

    Layout = new QVBoxLayout(placeholderWidget);
    Layout->setAlignment(Qt::AlignCenter | Qt::AlignTop);

    setCentralWidget(placeholderWidget);

    Layout->setDirection(QBoxLayout::BottomToTop);

    Layout->addWidget(NewChannelButton, 0);

    this->setFixedSize(1000, 500);

    connect(NewChannelButton, &QPushButton::pressed, this, &MainWindow::newChannelButtonPressed);
}

MainWindow::~MainWindow()
{

}

void MainWindow::newChannelButtonPressed() {

    Channel *newChannel = new Channel("Title");


    Layout->addWidget(newChannel, 0);

    Layout->setAlignment(NewChannelButton, Qt::AlignHCenter | Qt::AlignTop);

    channels.push_back(newChannel);

}




#include "Channel.h"

Channel::Channel(QString name) {
    this->name = name;

    this->setFixedSize(700, 100);
    this->setText(name);
    this->setLayout(new QHBoxLayout());
    this->layout()->setAlignment(Qt::AlignLeft);
}

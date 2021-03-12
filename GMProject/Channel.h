#include <QString>
#include <QPushButton>
#include <QHBoxLayout>


#ifndef CHANNEL_H
#define CHANNEL_H

class Channel : public QPushButton {
    Q_OBJECT

private:
    QString name;

public:
    Channel(QString name);



};




#endif // CHANNEL_H

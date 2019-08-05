#include "MyLocation.h"

MyLocation::MyLocation(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton, &QPushButton::clicked, this, &MyLocation::onConnectClicked);
}


void MyLocation::onConnectClicked()
{
	ui.pushButton->setText("Clicked");
}
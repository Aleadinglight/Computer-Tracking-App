#include "MyLocation.h"

MyLocation::MyLocation(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	m_button= ui.pushButton;
	QObject::connect(m_button, &QPushButton::clicked, this, &MyLocation::onConnectClicked);
}


void MyLocation::onConnectClicked()
{
	m_button->setText("Clicked");
}
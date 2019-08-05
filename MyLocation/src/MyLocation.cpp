#include "MyLocation.h"

MyLocation::MyLocation(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	m_button= ui.pushButton;
	connect(m_button, SIGNAL(clicked()), this, SLOT(onConnectClicked()));
}


void MyLocation::onConnectClicked()
{
	m_button->setText("Clicked");
}
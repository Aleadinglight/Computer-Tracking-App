#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MyLocation.h"

class MyLocation : public QMainWindow
{
	Q_OBJECT

public:
	MyLocation(QWidget *parent = Q_NULLPTR);

private:
	Ui::MyLocationClass ui;
};

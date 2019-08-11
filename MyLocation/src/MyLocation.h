#pragma once

#include <QtWidgets/QMainWindow>
#include <QLabel>
#include <QPushButton>
#include <QString>
#include <QGeoPositionInfo>
#include <QGeoPositionInfoSource>
#include "ui_MyLocation.h"

class MyLocation : public QMainWindow
{
	Q_OBJECT

public:
	MyLocation(QWidget *parent = Q_NULLPTR);
	QGeoPositionInfoSource* source;

private slots:
	void onConnectClicked();
	void positionUpdated(const QGeoPositionInfo& info);

private:
	Ui::MyLocationClass ui;
	/*QPushButton* m_button;
	QLabel* m_username;*/
};

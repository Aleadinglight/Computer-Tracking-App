#include "MyLocation.h"

MyLocation::MyLocation(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	source = QGeoPositionInfoSource::createDefaultSource(this);
	connect(ui.pushButton, &QPushButton::clicked, this, &MyLocation::onConnectClicked);
	connect(source, SIGNAL(positionUpdated(QGeoPositionInfo)),
		this, SLOT(positionUpdated(QGeoPositionInfo)));
}


void MyLocation::onConnectClicked()
{
	ui.pushButton->setText("Clicked");
	
	if (source) {
		ui.debug->setText("Yes");
		source->requestUpdate();
		ui.debug->setText("Update");
	}

	if (source) {
		QGeoPositionInfo init = source->lastKnownPosition();
		QGeoCoordinate geoCoordinate = init.coordinate();
		ui.debug->setText(QString("Latitude: %1 Longitude: %2").arg(geoCoordinate.latitude()).arg(geoCoordinate.longitude()));
		return;
	}
	
	ui.debug->setText("No");
}

void MyLocation::positionUpdated(const QGeoPositionInfo& info)
{
	if (info.isValid()) {
		QGeoCoordinate geoCoordinate = info.coordinate();
		ui.debug->setText(QString("Latitude: %1 Longitude: %2").arg(geoCoordinate.latitude()).arg(geoCoordinate.longitude()));
		return;
	}
	ui.debug->setText("No");
}
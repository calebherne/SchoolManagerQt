#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_SchoolManagerQt.h"

class SchoolManagerQt : public QMainWindow
{
	Q_OBJECT

public:
	SchoolManagerQt(QWidget *parent = Q_NULLPTR);

private:
	Ui::SchoolManagerQtClass ui;
};

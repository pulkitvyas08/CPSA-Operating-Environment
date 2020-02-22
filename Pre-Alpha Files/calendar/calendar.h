#ifndef CALENDAR_H
#define CALENDAR_H

#include <QtWidgets/QMainWindow>
#include "ui_calendar.h"

class calendar : public QMainWindow
{
	Q_OBJECT

public:
	calendar(QWidget *parent = 0);
	~calendar();

private:
	Ui::calendarClass ui;
	QDate getdate();
	QDate currentDate() const;
	void setCurrentDate(const QDate &d);
	void on_calendar_clicked(const QDate &date);


private slots:
    void on_MonthFrontButton_clicked();
	void on_MonthBackButton_clicked();
    void on_yearBackButton_clicked();
	void on_yearFrontButton_clicked();
    void on_OkButton_clicked();
};

#endif // CALENDAR_H

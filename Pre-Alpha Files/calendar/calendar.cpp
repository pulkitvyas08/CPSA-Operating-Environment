#include "calendar.h"
#include <QCalendarWidget>
#include <QEvent>
#include <QDate>
#include <QApplication>
#include <QMessageBox>

calendar::calendar(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	setWindowFlags(Qt::FramelessWindowHint);
	ui.calendarWidget->setNavigationBarVisible(false);
	ui.calendarWidget->setHorizontalHeaderFormat(QCalendarWidget::SingleLetterDayNames);
	ui.calendarWidget->setVerticalHeaderFormat(QCalendarWidget::NoVerticalHeader);

	connect(ui.yearBackButton, SIGNAL(clicked()), this, SLOT(on_yearBackButton_clicked()));
	connect(ui.yearFrontButton, SIGNAL(clicked()), this, SLOT(on_yearFrontButton_clicked()));
	connect(ui.MonthBackButton, SIGNAL(clicked()), this, SLOT(on_MonthBackButton_clicked()));
	connect(ui.MonthFrontButton, SIGNAL(clicked()), this, SLOT(on_MonthFrontButton_clicked()));

	connect(ui.OkButton, SIGNAL(clicked()), this, SLOT(on_OkButton_clicked()));
}


calendar::~calendar()
{
}

QDate calendar::currentDate() const
{
	return ui.calendarWidget->selectedDate();
}
void calendar::setCurrentDate(const QDate &d)
{
	QDate date = d;
	if (!date.isValid())
		date = QDate::currentDate();
	ui.calendarWidget->setSelectedDate(date);
	ui.calendarWidget->showSelectedDate();
	on_calendar_clicked(date);
}

void calendar::on_calendar_clicked(const QDate &date)
{
	ui.DateLabel->setText(date.toString("dd MMMM yyyy"));
}

QDate calendar::getdate()
{
	QMessageBox showDateMessage(QMessageBox::Warning,
		ui.calendarWidget->selectedDate().toString("dd MMMM yyyy"), "", QMessageBox::Ok, 0);
	ui.DateLabel->setText(ui.calendarWidget->selectedDate().toString("dd MMMM yyyy"));
	showDateMessage.setText("Date Selected is " + ui.calendarWidget->selectedDate().toString("dd MMMM yyyy"));
	int ret = showDateMessage.exec();
	if (ret == QMessageBox::Ok)
	{

		return ui.calendarWidget->selectedDate();

	}
	else
	{
		return QDate();
	}

}
void calendar::on_yearBackButton_clicked() {
	QDate date = currentDate();

	date = date.addYears(-1);
	setCurrentDate(date);
}

void calendar::on_yearFrontButton_clicked()
{
	QDate date = currentDate();
	date = date.addYears(+1);
	setCurrentDate(date);
}

void calendar::on_MonthFrontButton_clicked()
{
	QDate date = currentDate();
	date = date.addMonths(+1);
	setCurrentDate(date);
}

void calendar::on_MonthBackButton_clicked()
{
	QDate date = currentDate();
	date = date.addMonths(-1);
	setCurrentDate(date);
}

void calendar::on_OkButton_clicked()
{
	getdate();
}

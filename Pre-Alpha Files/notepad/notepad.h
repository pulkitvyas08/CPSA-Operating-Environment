#ifndef NOTEPAD_H
#define NOTEPAD_H

#include <QtWidgets/QMainWindow>
#include "ui_notepad.h"
#include<QtCore>
#include<QtGui>
#include<commdlg.h>

class notepad : public QMainWindow
{
	Q_OBJECT

public:
	notepad(QWidget *parent = 0);
	~notepad();

private:
	Ui::notepadClass ui;
	QString mFilename;

	private slots:
	void on_actionNew_triggered();
	
	void on_actionOpen_triggered();
	void on_actionSave_triggered();
	void on_actionSave_As_triggered();
	
	void on_actionCopy_triggered();
	void on_actionPaste_triggered();
	void on_actionCut_triggered();
	void on_actionUndo_triggered();
	void on_actionRedo_triggered();
};

#endif // NOTEPAD_H

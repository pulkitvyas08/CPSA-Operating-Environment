#include "notepad.h"
#include<QFileDialog>
#include <QTextStream>

notepad::notepad(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.actionNew, SIGNAL(triggered()), this, SLOT(on_actionNew_triggered()));
	
	connect(ui.actionOpen, SIGNAL(triggered()), this, SLOT(on_actionOpen_triggered()));
	connect(ui.actionSave, SIGNAL(triggered()), this, SLOT(on_actionSave_triggered()));
	connect(ui.actionSave_As, SIGNAL(triggered()), this, SLOT(on_actionSave_As_triggered()));
	
	connect(ui.actionCut, SIGNAL(triggered()), this, SLOT(on_actionCut_triggered()));
	connect(ui.actionCopy, SIGNAL(triggered()), this, SLOT(on_actionCopy_triggered()));
	connect(ui.actionPaste, SIGNAL(triggered()), this, SLOT(on_actionPaste_triggered()));
	connect(ui.actionUndo, SIGNAL(triggered()), this, SLOT(on_actionUndo_triggered()));
	connect(ui.actionRedo, SIGNAL(triggered()), this, SLOT(on_actionRedo_triggered()));
}

notepad::~notepad()
{

}

void notepad::on_actionNew_triggered()
{
	mFilename = "";
	ui.textEdit->setPlainText("");
}

void notepad::on_actionOpen_triggered()
{
	QString file = QFileDialog::getOpenFileName(this);
	if (!file.isEmpty())
	{
		QFile sFile(file);
		if (sFile.open(QFile::ReadOnly | QFile::Text))
		{
			mFilename = file;
			QTextStream in(&sFile);
			QString text = in.readAll();
			sFile.close();

			ui.textEdit->setPlainText(text);
		}
	}
}


void notepad::on_actionSave_triggered()
{
	QFile sFile(mFilename);
	if (sFile.open(QFile::WriteOnly | QFile::Text)
	{
		QTextStream out(&sFile);
		out << ui.textEdit->toPlainText();

		sFile.flush();
		sFile.close();
	}
}


void notepad::on_actionSave_As_triggered()
{
	QString file = QFIleDialog::getSaveFileName(this, "Open A File");
	if (!file.isEmpty())
	{
		mFilename = file;
		on_actionSave_As_triggered();

	}
}


void notepad::on_actionCopy_triggered()
{
	ui.textEdit->copy();
}

void notepad::on_actionPaste_triggered()
{
	ui.textEdit->paste();
}

void notepad::on_actionCut_triggered()
{
	ui.textEdit->cut();
}

void notepad::on_actionUndo_triggered()
{
	ui.textEdit->undo();
}

void notepad::on_actionRedo_triggered()
{
	ui.textEdit->redo();
}
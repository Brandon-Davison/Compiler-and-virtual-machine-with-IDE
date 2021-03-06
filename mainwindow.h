#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "codeeditor.h"

#include <QMainWindow>
#include <QStyleFactory>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QIODevice>

class QTextEdit;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(CodeEditor* codeEditor, QWidget *parent = 0);

    ~MainWindow();

private slots:
    void on_actionRun_triggered();

    void on_actionNewProject_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_Project_triggered();

private:
    Ui::MainWindow *ui;

    CodeEditor *codeEditor;

    QString filePath;

    void readFileIntoCodeEditor();

    void readCodeEditorIntoFile();

    void setTheme();

    void addWidgets();
    void addCodeEditorWidget();
    void addOutputWidgets();

};

#endif // MAINWINDOW_H

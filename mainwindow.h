#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include<QFileDialog>
#include<QApplication>
#include<QMessageBox>
#include<QScrollArea>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    //打开文件
    QDockWidget *dock_center;
    QString currentPath;
    QLabel *imgLabel;
    void InitImage();
    void ConnectFile();
private slots:
    void NewFile();
    void OpenFile();
    void SaveFile();
    void SaveasFile();
};

#endif // MAINWINDOW_H
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_DellRow_clicked();

    void on_pushButton_AddColumn_clicked();

    void on_pushButton_DelColumn_clicked();


    void on_pushButton_GetSum_clicked();

    void on_pushButtonSetRand_clicked();


    void on_spinBoxRow_valueChanged(int arg1);

    void on_tableWidget_cellChanged(int row, int column);

private:
    Ui::MainWindow *ui;
    bool no_auto_change;
};

#endif // MAINWINDOW_H

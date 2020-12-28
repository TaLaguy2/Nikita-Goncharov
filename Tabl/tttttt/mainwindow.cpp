#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    no_auto_change=true;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->tableWidget->setRowCount(ui->tableWidget->rowCount()+1);
   ui->spinBoxRow->setValue(ui->tableWidget->rowCount()+1);

}

void MainWindow::on_pushButton_DellRow_clicked()
{
    int row=ui->tableWidget->rowCount();
    if (row>0)
        ui->tableWidget->setRowCount(row-1);
}

void MainWindow::on_pushButton_AddColumn_clicked()
{
     ui->tableWidget->setColumnCount(ui->tableWidget->columnCount()+1);
}

void MainWindow::on_pushButton_DelColumn_clicked()
{
    int column=ui->tableWidget->columnCount();
    if (column>0)
        ui->tableWidget->setColumnCount(column-1);
}



void MainWindow::on_pushButton_GetSum_clicked()
{
    no_auto_change=false;
    int row_count=ui->tableWidget->rowCount();
    int column_coumt=ui->tableWidget->columnCount();
    int sum=0;

    bool flag;

    for (int i=0;i<row_count;i++)
    {
        for (int j=0;j<column_coumt;j++)
        {
          if (ui->tableWidget->item(i,j)!=nullptr)
          {
          sum+=ui->tableWidget->item(i,j)->text().toInt(&flag);
          if(!flag)
              ui->tableWidget->item(i,j)->setBackgroundColor(Qt::red);
          else
              ui->tableWidget->item(i,j)->setBackgroundColor(Qt::white);
          }
          else
          {
              QTableWidgetItem * ti;
              ti = new QTableWidgetItem;
              ui->tableWidget->setItem(i,j,ti);
            ui->tableWidget->item(i,j)->setBackgroundColor(Qt::magenta);
          }
        }
    }
    ui->labelSum->setNum(sum);
    no_auto_change=true;
}

void MainWindow::on_pushButtonSetRand_clicked()
{
    no_auto_change=false;
    int row_count=ui->tableWidget->rowCount();
    int column_coumt=ui->tableWidget->columnCount();


    for (int i=0;i<row_count;i++)
    {
        for (int j=0;j<column_coumt;j++)
        {
            if (ui->tableWidget->item(i,j)==nullptr)
            {
                QTableWidgetItem * ti;
                ti = new QTableWidgetItem;
                ui->tableWidget->setItem(i,j,ti);
            }
             ui->tableWidget->item(i,j)->setText(QString::number(rand()%1000-500));
             ui->tableWidget->item(i,j)->setBackgroundColor(Qt::white);
        }
    }
    no_auto_change=true;
}


void MainWindow::on_spinBoxRow_valueChanged(int arg1)
{
        ui->tableWidget->setRowCount(arg1);
}

void MainWindow::on_tableWidget_cellChanged(int row, int column)
{
    if (no_auto_change)
    {
        bool flag;
        ui->tableWidget->item(row,column)->text().toInt(&flag);
        if(!flag)
            ui->tableWidget->item(row,column)->setBackgroundColor(Qt::yellow);
        else
            ui->tableWidget->item(row,column)->setBackgroundColor(Qt::white);
    }

}

#include "stdafx/stdafx.h"

#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->RadioFile->setChecked(true);
    on_RadioFile_clicked(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_BtnInFile_clicked()
{
    m_in_file = QFileDialog::getOpenFileName();
    ui->EditInFile->setText(m_in_file);
}

void MainWindow::on_BtnRun_clicked()
{
    if(!m_in_file.isEmpty() && !m_out_file.isEmpty()){
        dvbs2_mono<>::get_data(m_in_file.toStdString(), m_out_file.toStdString(), ui->CheckChangeBits->checkState());
    }
    if(!m_in_dir.isEmpty() && !m_out_dir.isEmpty()){
        dvbs2_mono<>::get_data_dir(m_in_dir.toStdString(), m_out_dir.toStdString(), ui->CheckChangeBits->checkState());
    }
}

void MainWindow::on_BtnOutFile_clicked()
{
    m_out_file = QFileDialog::getSaveFileName();
    ui->EditOutFile->setText(m_out_file);
}

void MainWindow::on_BtnInDir_clicked()
{
    m_in_dir = QFileDialog::getExistingDirectory();
    ui->EditInDir->setText(m_in_dir);
}

void MainWindow::on_BtnOutDir_clicked()
{
    m_out_dir = QFileDialog::getExistingDirectory();
    ui->EditOutDir->setText(m_out_dir);
}

void MainWindow::on_RadioFile_clicked(bool checked)
{
    if(checked){
        ui->BtnInDir->setDisabled(true);
        ui->BtnOutDir->setDisabled(true);
        ui->EditInDir->setDisabled(true);
        ui->EditOutDir->setDisabled(true);

        ui->BtnInFile->setEnabled(true);
        ui->BtnOutFile->setEnabled(true);
        ui->EditInFile->setEnabled(true);
        ui->EditOutFile->setEnabled(true);
    }
}

void MainWindow::on_RadioDir_clicked(bool checked)
{
    if(checked){
        ui->BtnInFile->setDisabled(true);
        ui->BtnOutFile->setDisabled(true);
        ui->EditInFile->setDisabled(true);
        ui->EditOutDir->setDisabled(true);

        ui->BtnInDir->setEnabled(true);
        ui->BtnOutDir->setEnabled(true);
        ui->EditInDir->setEnabled(true);
        ui->EditOutDir->setEnabled(true);
    }
}

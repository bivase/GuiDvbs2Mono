#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_BtnInFile_clicked();

    void on_BtnRun_clicked();

    void on_BtnOutFile_clicked();

    void on_BtnInDir_clicked();

    void on_BtnOutDir_clicked();

    void on_RadioFile_clicked(bool checked);

    void on_RadioDir_clicked(bool checked);

private:
    Ui::MainWindow *ui;
    QString m_in_file{};
    QString m_out_file{};
    QString m_in_dir{};
    QString m_out_dir{};
};
#endif // MAINWINDOW_H

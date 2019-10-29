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
    void updateRound();
    int on_pushButton_clicked();
    int on_pushButton_2_clicked();
    int on_pushButton_3_clicked();
    int computerChoose();
    int compare(int, int);
    void internal(int);
    void updateScore();
private:
    int round;
    int humanscore;
    int computerscore;
    int ties;
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

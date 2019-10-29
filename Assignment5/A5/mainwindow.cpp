#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include "Choice.h"
#include "ComputerFactor.h"
#include "RandomChoice.h"
#include <iostream>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    round = 0;
    humanscore = 0;
    computerscore = 0;
    ties = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::updateRound(){
    if(round > 19){
        ui->RoundNum->setText(QString::number(0));
        ui->c_w->setText(QString::number(0));
        computerscore = 0;
        humanscore = 0;
        ties = 0;
        ui->h_w->setText(QString::number(0));
        ui->t_w->setText(QString::number(0));
        round = 0;
    }
    else {
        round++;
        ui->RoundNum->setText(QString::number(round));
    }
}
int MainWindow::on_pushButton_clicked()
{

    ui->humanchoose->setText("Rock");
    updateRound();
    internal(3);
    updateScore();
    return 3;

}

int MainWindow::on_pushButton_2_clicked()
{
    ui->humanchoose->setText("Paper");
    updateRound();
    internal(2);
    updateScore();
    return 2;
}


int MainWindow::on_pushButton_3_clicked()
{
    ui->humanchoose->setText("Scissors");
    updateRound();
    internal(1);
    updateScore();
    return 1;
}

int MainWindow::computerChoose(){
    Factory factory;
    ChoiceBase *normal = factory.CreateChoice(RANDOM);
    int ComputerChos;
    ComputerChos = normal->Choose("");
    QString s = "";
    if(ComputerChos == 1)
        s = "Scissors";
    else if(ComputerChos == 2)
        s = "Paper";
    else {
        s = "Rock";
    }
    ui->computerchoose->setText(s);
    return ComputerChos;
}

int MainWindow::compare(int player, int computer) {
        if (player == 1 && computer == 2)
            return 0;
        else if (player == 1 && computer == 3)
            return 1;
        else if (player == 1 && computer == 1)
            return -1;
        else if (player == 2 && computer == 1)
            return 1;
        else if (player == 2 && computer == 2)
            return -1;
        else if (player == 2 && computer == 3)
            return 0;
        else if (player == 3 && computer == 1)
            return 0;
        else if (player == 3 && computer == 2)
            return 1;
        else if (player == 3 && computer == 3)
            return -1;
        return 0;
}

void MainWindow::internal(int human){
    int computerChos = computerChoose();
    int score = compare(human, computerChos);
    if(score == 1){
        humanscore++;
        ui->winner->setText("Player win");
    }
    else if(score == 0){
        computerscore++;
        ui->winner->setText("Computer win");
    }
    else if(score == -1){
        ties++;
        ui->winner->setText("Ties");
    }
}
void MainWindow::updateScore(){
    ui->c_w->setText(QString::number(computerscore));
    ui->h_w->setText(QString::number(humanscore));
    ui->t_w->setText(QString::number(ties));
}

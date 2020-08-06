#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->one, &QPushButton::clicked, [=]() { ui->expression->setText(ui->expression->text()+"1"); } );
    connect(ui->two, &QPushButton::clicked, [=]() { ui->expression->setText(ui->expression->text()+"2"); } );
    connect(ui->three, &QPushButton::clicked, [=]() { ui->expression->setText(ui->expression->text()+"3"); } );
    connect(ui->four, &QPushButton::clicked, [=]() { ui->expression->setText(ui->expression->text()+"4"); } );
    connect(ui->five, &QPushButton::clicked, [=]() { ui->expression->setText(ui->expression->text()+"5"); } );
    connect(ui->six, &QPushButton::clicked, [=]() { ui->expression->setText(ui->expression->text()+"6"); } );
    connect(ui->seven, &QPushButton::clicked, [=]() { ui->expression->setText(ui->expression->text()+"7"); } );
    connect(ui->eigth, &QPushButton::clicked, [=]() { ui->expression->setText(ui->expression->text()+"8"); } );
    connect(ui->nine, &QPushButton::clicked, [=]() { ui->expression->setText(ui->expression->text()+"9"); } );
    connect(ui->zero, &QPushButton::clicked, [=]() { ui->expression->setText(ui->expression->text()+"0"); } );
    connect(ui->plus, &QPushButton::clicked, [=]() { a = ui->expression->text().toInt(); sign = '+'; ui->expression->clear(); } );
    connect(ui->minus, &QPushButton::clicked, [=]() { a = ui->expression->text().toInt(); sign = '-'; ui->expression->clear(); } );
    connect(ui->multi, &QPushButton::clicked, [=]() { a = ui->expression->text().toInt(); sign = '*'; ui->expression->clear(); } );
    connect(ui->division, &QPushButton::clicked, [=]() { a = ui->expression->text().toInt(); sign = '/'; ui->expression->clear(); } );
    connect(ui->inversia, &QPushButton::clicked, [=]() { a = ui->expression->text().toInt(); sign = 'i'; calculate(); } );
    connect(ui->result, &QPushButton::clicked, this, &MainWindow::calculate);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::calculate()
{
    b = ui->expression->text().toInt();
    switch (sign) {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        if (b == 0){
            ui->result_out->setText("error. division by zero");
            a = 0;
            b = 0;
            ui->expression->clear();
            return;
        }
        else
            result = a * 1. / b;
        break;
    case 'i':
        result = -a;
        break;
    default:
        break;
    }
    a = 0;
    b = 0;
    ui->expression->clear();
    ui->result_out->setText(QString::number(result));
}

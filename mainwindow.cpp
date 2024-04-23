#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);

    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/abaddon.jpg", "Abaddon"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/alchemist.jpg", "Alchemist"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/ancient_apparition.jpg", "Ancient Apparition"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/talant.jpg", "Anti-Mage"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/arc.jpg", "Arc Warden"});
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->tableWidget_2->clearContents();
    ui->tableWidget_2->setRowCount(0);
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);
    ui->comboBox->setCurrentIndex(0);
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_pushButton_3_clicked()
{
    int selectedHero = ui->comboBox->currentIndex();
    if (selectedHero == 0) return;
    selectedHero-=1;
    int row = ui->tableWidget_2->rowCount();
    if (row>=5){
        QMessageBox::critical(this, "Ошибка", "Не может быть больше 5-ти героев");
        return;
    }
    QString newHero = allHeroes[selectedHero][1];
    for(int i = 0; i < row; ++i) {
        if(ui->tableWidget_2->item(i, 1)->text() == newHero) {
            QMessageBox::critical(this, "Ошибка", "Герой уже добавлен");
            return;
        }
    }

    QPixmap pixmap(allHeroes[selectedHero][0]);
    QTableWidgetItem *item = new QTableWidgetItem, *item2 = new QTableWidgetItem(allHeroes[selectedHero][1]);
    item->setData(Qt::DecorationRole, pixmap);

    ui->tableWidget_2->insertRow(row);
    ui->tableWidget_2->setItem(row, 0, item);
    ui->tableWidget_2->setItem(row, 1, item2);
}


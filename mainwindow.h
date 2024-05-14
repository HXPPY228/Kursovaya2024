#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QTextDocument>
#include <QTextTable>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrl>
#include <QTableWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void DeleteRow();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void AbaddonParsing();

private:
    Ui::MainWindow *ui;
    QList<QList<QString>> allHeroes;
    QList<QString> SelectedHeroes;

    QNetworkAccessManager *manager = new QNetworkAccessManager(this);
    QList<QList<QString>> AllCounters;
    QList<QList<QString>> AbaddonCounters;
};

#endif // MAINWINDOW_H

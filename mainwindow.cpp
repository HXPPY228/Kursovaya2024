#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    ui->tableWidget->setColumnWidth(0, 133);
    ui->pushButton_5->setEnabled(false);

    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/abaddon.jpg", "Abaddon"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/alchemist.jpg", "Alchemist"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/ancient_apparition.jpg", "Ancient Apparition"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/talant.jpg", "Anti-Mage"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/arc.jpg", "Arc Warden"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/axe.jpg", "Axe"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/bane.jpg", "Bane"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/batrider.jpg", "Batrider"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/beastmaster.jpg", "Beastmaster"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/seeker.jpg", "Bloodseeker"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/bh.jpg", "Bounty Hunter"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/pivo.jpg", "Brewmaster"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/back.jpg", "Bristleback"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/broodmother.jpg", "Broodmother"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/centaur.jpg", "Centaur Warrunner"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/ck.jpg", "Chaos Knight"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/chen.jpg", "Chen"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/bonik.jpg", "Clinkz"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/clock.jpg", "Clockwerk"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/cm.jpg", "Crystal Maiden"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/darkseer.jpg", "Dark Seer"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/willow.jpg", "Dark Willow"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/db.jpg", "Dawnbreaker"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/dazzle.jpg", "Dazzle"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/dp.jpg", "Death Prophet"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/disruptor.jpg", "Disruptor"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/doom.jpg", "Doom"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/dk.jpg", "Dragon Knight"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/trax.jpg", "Drow Ranger"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/espirit.jpg", "Earth Spirit"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/kostyanchik.jpg", "Earthshaker"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/titan.jpg", "Elder Titan"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/ember.jpg", "Ember Spirit"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/encha.jpg", "Enchantress"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/enigma.jpg", "Enigma"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/void.jpg", "Faceless Void"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/grim.jpg", "Grimstroke"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/gyro.jpg", "Gyrocopter"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/belka.jpg", "Hoodwink"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/huskar.jpg", "Huskar"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/sanya_tornado.jpg", "Invoker"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/wisp.jpg", "Io"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/jakiro.jpg", "Jakiro"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/urnero.jpg", "Juggernaut"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/kotl.jpg", "Keeper of the Light"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/kunkka.jpg", "Kunkka"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/lc♥.jpg", "Legion Commander"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/leshrak.jpg", "Leshrac"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/lich.jpg", "Lich"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/ghoul.jpg", "Lifestealer"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/lina.jpg", "Lina"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/lion.jpg", "Lion"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/druid.jpg", "Lone Druid"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/luna.jpg", "Luna"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/wolf.jpg", "Lycan"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/collapse.jpg", "Magnus"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/marci.jpg", "Marci"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/mars.jpg", "Mars"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/medusa.jpg", "Medusa"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/2017.jpg", "Meepo"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/mirana.jpg", "Mirana"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/mk.jpg", "Monkey King"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/voda.jpg", "Morphling"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/muerta.jpg", "Muerta"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/naga.jpg", "Naga Siren"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/furion.jpg", "Nature's Prophet"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/necr.jpg", "Necrophos"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/ns.jpg", "Night Stalker"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/nyx.jpg", "Nyx Assassin"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/nikitosik.jpg", "Ogre Magi"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/omni.jpg", "Omniknight"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/oracle.jpg", "Oracle"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/od.jpg", "Outworld Destroyer"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/pango.jpg", "Pangolier"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/pa.jpg", "Phantom Assassin"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/pl.jpg", "Phantom Lancer"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/seregga.jpg", "Phoenix"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/dino.jpg", "Primal Beast"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/puck.jpg", "Puck"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/pudge).jpg", "Pudge"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/pugna.jpg", "Pugna"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/qvopa.jpg", "Queen of Pain"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/razor.jpg", "Razor"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/riki.jpg", "Riki"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/rubick.jpg", "Rubick"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/sk.jpg", "Sand King"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/shd.jpg", "Shadow Demon"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/zxc.jpg", "Shadow Fiend"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/shaman.jpg", "Shadow Shaman"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/salo.jpg", "Silencer"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/petuh.jpg", "Skywrath Mage"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/seledka.jpg", "Slardar"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/haru.jpg", "Slark"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/babka.jpg", "Snapfire"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/sniper.jpg", "Sniper"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/spectre.jpg", "Spectre"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/bara.jpg", "Spirit Breaker"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/storm.jpg", "Storm Spirit"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/sven.jpg", "Sven"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/miner.jpg", "Techies"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/ta.jpg", "Templar Assassin"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/tb.jpg", "Terrorblade"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/arbuz.jpg", "Tidehunter"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/timber.jpg", "Timbersaw"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/gomo.jpg", "Tinker"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/airlines.jpg", "Tiny"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/trent.jpg", "Treant Protector"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/troll.jpg", "Troll Warlord"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/tusk.jpg", "Tusk"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/under.jpg", "Underlord"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/zondbi.jpg", "Undying"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/ursa.jpg", "Ursa"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/venga.jpg", "Vengeful Spirit"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/venik.jpg", "Venomancer"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/viper.jpg", "Viper"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/visage.jpg", "Visage"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/vs.jpg", "Void Spirit"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/warlock.jpg", "Warlock"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/juk.jpg", "Weaver"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/wr.jpg", "Windranger"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/wyvern.jpg", "Winter Wyvern"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/wd.jpg", "Witch Doctor"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/papich.jpg", "Wraith King"});
    allHeroes.append(QList<QString>{"D:/BSUIR/Kursovaya/Pictures/zeus.jpg", "Zeus"});

    for (int i = 0; i < 124; ++i){
        ui->comboBox->addItem(allHeroes[i][1]);

        AllCounters.append(QList<QString>{allHeroes[i][1], "0.0"});
    }

    AbaddonParsing();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::DeleteRow()
{
    QPushButton* button = qobject_cast<QPushButton*>(sender());
    int row = ui->tableWidget_2->indexAt(button->pos()).row();
    ui->tableWidget_2->removeRow(row);
    ui->pushButton_3->setEnabled(true);
    if (ui->tableWidget_2->rowCount() == 0) ui->pushButton_5->setEnabled(false);
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
    SelectedHeroes.clear();
    AllCounters.clear();
    for (int i = 0; i < 124; ++i) AllCounters.append(QList<QString>{allHeroes[i][1], "0.0"});
}

void MainWindow::on_pushButton_3_clicked()
{
    int selectedHero = ui->comboBox->currentIndex();
    if (selectedHero == 0) return;
    selectedHero-=1;
    int row = ui->tableWidget_2->rowCount();
    /*if (row>=5){
        QMessageBox::information(this, "Ошибка", "Не может быть больше 5-ти героев");
        return;
    }*/

    QString newHero = allHeroes[selectedHero][1];
    for(int i = 0; i < row; ++i) {
        if(ui->tableWidget_2->item(i, 1)->text() == newHero) {
            QMessageBox::information(this, "Ошибка", "Герой уже добавлен");
            return;
        }
    }

    QPixmap pixmap(allHeroes[selectedHero][0]);
    QTableWidgetItem *item = new QTableWidgetItem, *item2 = new QTableWidgetItem(allHeroes[selectedHero][1]);
    item->setData(Qt::DecorationRole, pixmap);

    ui->tableWidget_2->insertRow(row);
    ui->tableWidget_2->setItem(row, 0, item);
    ui->tableWidget_2->setItem(row, 1, item2);
    QPushButton* delButton = new QPushButton("Удалить");
    connect(delButton, &QPushButton::clicked, this, &MainWindow::DeleteRow);
    ui->tableWidget_2->setCellWidget(row, 2, delButton);
    ui->pushButton_5->setEnabled(true);
    if (row==4) ui->pushButton_3->setEnabled(false);
}


void MainWindow::on_pushButton_4_clicked()
{
    this->close();
}


void MainWindow::on_pushButton_5_clicked()
{
    ui->tableWidget->setRowCount(0);

    SelectedHeroes.append("zxc");
    SelectedHeroes.clear();
    for (int i=0; i<ui->tableWidget_2->rowCount(); ++i){
        SelectedHeroes.append(ui->tableWidget_2->item(i,1)->text());
    }
    if (SelectedHeroes.contains("Abaddon")){
        for (int i=0;i<124;++i){
            double allCounters = AllCounters[i][1].toDouble();
            allCounters+=AbaddonCounters[i][1].toDouble();
            AllCounters[i][1]=QString::number(allCounters);
        }
    }

    for (int i = 0; i < 124; ++i) {
        ui->tableWidget->insertRow(i);

        QPixmap pixmap(allHeroes[i][0]);
        QTableWidgetItem *item = new QTableWidgetItem;
        item->setData(Qt::DecorationRole, pixmap);
        ui->tableWidget->setItem(i, 0, item);
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(AllCounters[i][0]));
        ui->tableWidget->setItem(i, 2, new QTableWidgetItem(AllCounters[i][1]));
    }

    for (int i=0;i<SelectedHeroes.size();++i){
        ui->tableWidget->removeRow(0);
    }

    for(int i = 0; i < ui->tableWidget->rowCount(); ++i) {
        ui->tableWidget->item(i, 2)->setTextAlignment(Qt::AlignCenter);
    }
    ui->tableWidget->sortItems(2, Qt::DescendingOrder);

    AllCounters.clear();
    for (int i = 0; i < 124; ++i) AllCounters.append(QList<QString>{allHeroes[i][1], "0.0"});
}


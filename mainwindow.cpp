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

    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->tableWidget_2->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->tableWidget_2->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);

    QMovie *movie = new QMovie(":/img/Pictures/nowifi.gif");
    ui->label_gif->setMovie(movie);
    ui->label_gif->setScaledContents(true);
    movie->start();

    QMovie *movie1 = new QMovie(":/img/Pictures/loading.gif");
    ui->label_loading->setMovie(movie1);
    ui->label_loading->setScaledContents(true);
    movie1->start();

    allHeroes.append(QList<QString>{":/img/Pictures/abaddon.jpg", "Abaddon"});
    allHeroes.append(QList<QString>{":/img/Pictures/alchemist.jpg", "Alchemist"});
    allHeroes.append(QList<QString>{":/img/Pictures/ancient_apparition.jpg", "Ancient Apparition"});
    allHeroes.append(QList<QString>{":/img/Pictures/talant.jpg", "Anti-Mage"});
    allHeroes.append(QList<QString>{":/img/Pictures/arc.jpg", "Arc Warden"});
    allHeroes.append(QList<QString>{":/img/Pictures/axe.jpg", "Axe"});
    allHeroes.append(QList<QString>{":/img/Pictures/bane.jpg", "Bane"});
    allHeroes.append(QList<QString>{":/img/Pictures/batrider.jpg", "Batrider"});
    allHeroes.append(QList<QString>{":/img/Pictures/beastmaster.jpg", "Beastmaster"});
    allHeroes.append(QList<QString>{":/img/Pictures/seeker.jpg", "Bloodseeker"});
    allHeroes.append(QList<QString>{":/img/Pictures/bh.jpg", "Bounty Hunter"});
    allHeroes.append(QList<QString>{":/img/Pictures/pivo.jpg", "Brewmaster"});
    allHeroes.append(QList<QString>{":/img/Pictures/back.jpg", "Bristleback"});
    allHeroes.append(QList<QString>{":/img/Pictures/broodmother.jpg", "Broodmother"});
    allHeroes.append(QList<QString>{":/img/Pictures/centaur.jpg", "Centaur Warrunner"});
    allHeroes.append(QList<QString>{":/img/Pictures/ck.jpg", "Chaos Knight"});
    allHeroes.append(QList<QString>{":/img/Pictures/chen.jpg", "Chen"});
    allHeroes.append(QList<QString>{":/img/Pictures/bonik.jpg", "Clinkz"});
    allHeroes.append(QList<QString>{":/img/Pictures/clock.jpg", "Clockwerk"});
    allHeroes.append(QList<QString>{":/img/Pictures/cm.jpg", "Crystal Maiden"});
    allHeroes.append(QList<QString>{":/img/Pictures/darkseer.jpg", "Dark Seer"});
    allHeroes.append(QList<QString>{":/img/Pictures/willow.jpg", "Dark Willow"});
    allHeroes.append(QList<QString>{":/img/Pictures/db.jpg", "Dawnbreaker"});
    allHeroes.append(QList<QString>{":/img/Pictures/dazzle.jpg", "Dazzle"});
    allHeroes.append(QList<QString>{":/img/Pictures/dp.jpg", "Death Prophet"});
    allHeroes.append(QList<QString>{":/img/Pictures/disruptor.jpg", "Disruptor"});
    allHeroes.append(QList<QString>{":/img/Pictures/doom.jpg", "Doom"});
    allHeroes.append(QList<QString>{":/img/Pictures/dk.jpg", "Dragon Knight"});
    allHeroes.append(QList<QString>{":/img/Pictures/trax.jpg", "Drow Ranger"});
    allHeroes.append(QList<QString>{":/img/Pictures/espirit.jpg", "Earth Spirit"});
    allHeroes.append(QList<QString>{":/img/Pictures/kostyanchik.jpg", "Earthshaker"});
    allHeroes.append(QList<QString>{":/img/Pictures/titan.jpg", "Elder Titan"});
    allHeroes.append(QList<QString>{":/img/Pictures/ember.jpg", "Ember Spirit"});
    allHeroes.append(QList<QString>{":/img/Pictures/encha.jpg", "Enchantress"});
    allHeroes.append(QList<QString>{":/img/Pictures/enigma.jpg", "Enigma"});
    allHeroes.append(QList<QString>{":/img/Pictures/void.jpg", "Faceless Void"});
    allHeroes.append(QList<QString>{":/img/Pictures/grim.jpg", "Grimstroke"});
    allHeroes.append(QList<QString>{":/img/Pictures/gyro.jpg", "Gyrocopter"});
    allHeroes.append(QList<QString>{":/img/Pictures/belka.jpg", "Hoodwink"});
    allHeroes.append(QList<QString>{":/img/Pictures/huskar.jpg", "Huskar"});
    allHeroes.append(QList<QString>{":/img/Pictures/sanya_tornado.jpg", "Invoker"});
    allHeroes.append(QList<QString>{":/img/Pictures/wisp.jpg", "Io"});
    allHeroes.append(QList<QString>{":/img/Pictures/jakiro.jpg", "Jakiro"});
    allHeroes.append(QList<QString>{":/img/Pictures/urnero.jpg", "Juggernaut"});
    allHeroes.append(QList<QString>{":/img/Pictures/kotl.jpg", "Keeper of the Light"});
    allHeroes.append(QList<QString>{":/img/Pictures/kunkka.jpg", "Kunkka"});
    allHeroes.append(QList<QString>{":/img/Pictures/kez.jpg", "Kez"});
    allHeroes.append(QList<QString>{":/img/Pictures/lc.jpg", "Legion Commander"});
    allHeroes.append(QList<QString>{":/img/Pictures/leshrak.jpg", "Leshrac"});
    allHeroes.append(QList<QString>{":/img/Pictures/lich.jpg", "Lich"});
    allHeroes.append(QList<QString>{":/img/Pictures/ghoul.jpg", "Lifestealer"});
    allHeroes.append(QList<QString>{":/img/Pictures/lina.jpg", "Lina"});
    allHeroes.append(QList<QString>{":/img/Pictures/lion.jpg", "Lion"});
    allHeroes.append(QList<QString>{":/img/Pictures/druid.jpg", "Lone Druid"});
    allHeroes.append(QList<QString>{":/img/Pictures/luna.jpg", "Luna"});
    allHeroes.append(QList<QString>{":/img/Pictures/wolf.jpg", "Lycan"});
    allHeroes.append(QList<QString>{":/img/Pictures/collapse.jpg", "Magnus"});
    allHeroes.append(QList<QString>{":/img/Pictures/marci.jpg", "Marci"});
    allHeroes.append(QList<QString>{":/img/Pictures/mars.jpg", "Mars"});
    allHeroes.append(QList<QString>{":/img/Pictures/medusa.jpg", "Medusa"});
    allHeroes.append(QList<QString>{":/img/Pictures/2017.jpg", "Meepo"});
    allHeroes.append(QList<QString>{":/img/Pictures/mirana.jpg", "Mirana"});
    allHeroes.append(QList<QString>{":/img/Pictures/mk.jpg", "Monkey King"});
    allHeroes.append(QList<QString>{":/img/Pictures/voda.jpg", "Morphling"});
    allHeroes.append(QList<QString>{":/img/Pictures/muerta.jpg", "Muerta"});
    allHeroes.append(QList<QString>{":/img/Pictures/naga.jpg", "Naga Siren"});
    allHeroes.append(QList<QString>{":/img/Pictures/furion.jpg", "Nature's Prophet"});
    allHeroes.append(QList<QString>{":/img/Pictures/necr.jpg", "Necrophos"});
    allHeroes.append(QList<QString>{":/img/Pictures/ns.jpg", "Night Stalker"});
    allHeroes.append(QList<QString>{":/img/Pictures/nyx.jpg", "Nyx Assassin"});
    allHeroes.append(QList<QString>{":/img/Pictures/nikitosik.jpg", "Ogre Magi"});
    allHeroes.append(QList<QString>{":/img/Pictures/omni.jpg", "Omniknight"});
    allHeroes.append(QList<QString>{":/img/Pictures/oracle.jpg", "Oracle"});
    allHeroes.append(QList<QString>{":/img/Pictures/od.jpg", "Outworld Destroyer"});
    allHeroes.append(QList<QString>{":/img/Pictures/pango.jpg", "Pangolier"});
    allHeroes.append(QList<QString>{":/img/Pictures/pa.jpg", "Phantom Assassin"});
    allHeroes.append(QList<QString>{":/img/Pictures/pl.jpg", "Phantom Lancer"});
    allHeroes.append(QList<QString>{":/img/Pictures/seregga.jpg", "Phoenix"});
    allHeroes.append(QList<QString>{":/img/Pictures/dino.jpg", "Primal Beast"});
    allHeroes.append(QList<QString>{":/img/Pictures/puck.jpg", "Puck"});
    allHeroes.append(QList<QString>{":/img/Pictures/pudge).jpg", "Pudge"});
    allHeroes.append(QList<QString>{":/img/Pictures/pugna.jpg", "Pugna"});
    allHeroes.append(QList<QString>{":/img/Pictures/qvopa.jpg", "Queen of Pain"});
    allHeroes.append(QList<QString>{":/img/Pictures/razor.jpg", "Razor"});
    allHeroes.append(QList<QString>{":/img/Pictures/riki.jpg", "Riki"});
    allHeroes.append(QList<QString>{":/img/Pictures/ringmaster.jpg", "Ringmaster"});
    allHeroes.append(QList<QString>{":/img/Pictures/rubick.jpg", "Rubick"});
    allHeroes.append(QList<QString>{":/img/Pictures/sk.jpg", "Sand King"});
    allHeroes.append(QList<QString>{":/img/Pictures/shd.jpg", "Shadow Demon"});
    allHeroes.append(QList<QString>{":/img/Pictures/zxc.jpg", "Shadow Fiend"});
    allHeroes.append(QList<QString>{":/img/Pictures/shaman.jpg", "Shadow Shaman"});
    allHeroes.append(QList<QString>{":/img/Pictures/salo.jpg", "Silencer"});
    allHeroes.append(QList<QString>{":/img/Pictures/petuh.jpg", "Skywrath Mage"});
    allHeroes.append(QList<QString>{":/img/Pictures/seledka.jpg", "Slardar"});
    allHeroes.append(QList<QString>{":/img/Pictures/haru.jpg", "Slark"});
    allHeroes.append(QList<QString>{":/img/Pictures/babka.jpg", "Snapfire"});
    allHeroes.append(QList<QString>{":/img/Pictures/sniper.jpg", "Sniper"});
    allHeroes.append(QList<QString>{":/img/Pictures/spectre.jpg", "Spectre"});
    allHeroes.append(QList<QString>{":/img/Pictures/bara.jpg", "Spirit Breaker"});
    allHeroes.append(QList<QString>{":/img/Pictures/storm.jpg", "Storm Spirit"});
    allHeroes.append(QList<QString>{":/img/Pictures/sven.jpg", "Sven"});
    allHeroes.append(QList<QString>{":/img/Pictures/miner.jpg", "Techies"});
    allHeroes.append(QList<QString>{":/img/Pictures/ta.jpg", "Templar Assassin"});
    allHeroes.append(QList<QString>{":/img/Pictures/tb.jpg", "Terrorblade"});
    allHeroes.append(QList<QString>{":/img/Pictures/arbuz.jpg", "Tidehunter"});
    allHeroes.append(QList<QString>{":/img/Pictures/timber.jpg", "Timbersaw"});
    allHeroes.append(QList<QString>{":/img/Pictures/gomo.jpg", "Tinker"});
    allHeroes.append(QList<QString>{":/img/Pictures/airlines.jpg", "Tiny"});
    allHeroes.append(QList<QString>{":/img/Pictures/trent.jpg", "Treant Protector"});
    allHeroes.append(QList<QString>{":/img/Pictures/troll.jpg", "Troll Warlord"});
    allHeroes.append(QList<QString>{":/img/Pictures/tusk.jpg", "Tusk"});
    allHeroes.append(QList<QString>{":/img/Pictures/under.jpg", "Underlord"});
    allHeroes.append(QList<QString>{":/img/Pictures/zondbi.jpg", "Undying"});
    allHeroes.append(QList<QString>{":/img/Pictures/ursa.jpg", "Ursa"});
    allHeroes.append(QList<QString>{":/img/Pictures/venga.jpg", "Vengeful Spirit"});
    allHeroes.append(QList<QString>{":/img/Pictures/venik.jpg", "Venomancer"});
    allHeroes.append(QList<QString>{":/img/Pictures/viper.jpg", "Viper"});
    allHeroes.append(QList<QString>{":/img/Pictures/visage.jpg", "Visage"});
    allHeroes.append(QList<QString>{":/img/Pictures/vs.jpg", "Void Spirit"});
    allHeroes.append(QList<QString>{":/img/Pictures/warlock.jpg", "Warlock"});
    allHeroes.append(QList<QString>{":/img/Pictures/juk.jpg", "Weaver"});
    allHeroes.append(QList<QString>{":/img/Pictures/wr.jpg", "Windranger"});
    allHeroes.append(QList<QString>{":/img/Pictures/wyvern.jpg", "Winter Wyvern"});
    allHeroes.append(QList<QString>{":/img/Pictures/wd.jpg", "Witch Doctor"});
    allHeroes.append(QList<QString>{":/img/Pictures/papich.jpg", "Wraith King"});
    allHeroes.append(QList<QString>{":/img/Pictures/zeus.jpg", "Zeus"});

    for (int i = 0; i < heroNumber; ++i){
        ui->comboBox->addItem(allHeroes[i][1]);

        AllCounters.append(QList<QString>{allHeroes[i][1], "0.0"});
    }

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
    ui->tableWidget->setRowCount(0);
}

void MainWindow::on_pushButton_clicked()
{
    if (!parsed){
        AllHeroParsing();
        ui->stackedWidget->setCurrentIndex(3);
    }else {
        ui->stackedWidget->setCurrentIndex(1);
    }
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->pushButton_5->setEnabled(false);
    ui->pushButton_3->setEnabled(true);
    ui->tableWidget_2->clearContents();
    ui->tableWidget_2->setRowCount(0);
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);
    ui->comboBox->setCurrentIndex(0);
    ui->stackedWidget->setCurrentIndex(0);
    SelectedHeroes.clear();
    AllCounters.clear();
    for (int i = 0; i < heroNumber; ++i) AllCounters.append(QList<QString>{allHeroes[i][1], "0.0"});
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->tableWidget->setRowCount(0);
    int selectedHero = ui->comboBox->currentIndex();
    if (selectedHero == 0) return;
    selectedHero-=1;
    int row = ui->tableWidget_2->rowCount();

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

    for (int i = 0; i < heroNumber; ++i) {
        double allCounters = AllCounters[i][1].toDouble();
        for (QString hero : SelectedHeroes) {
            if (hero == "Abaddon") {
                allCounters += AbaddonCounters[i][1].toDouble();
            } else if (hero == "Alchemist") {
                allCounters += AlchemistCounters[i][1].toDouble();
            } else if (hero == "Ancient Apparition") {
                allCounters += AncientApparitionCounters[i][1].toDouble();
            } else if (hero == "Anti-Mage") {
                allCounters += AntiMageCounters[i][1].toDouble();
            } else if (hero == "Arc Warden") {
                allCounters += ArcWardenCounters[i][1].toDouble();
            } else if (hero == "Axe") {
                allCounters += AxeCounters[i][1].toDouble();
            } else if (hero == "Bane") {
                allCounters += BaneCounters[i][1].toDouble();
            } else if (hero == "Batrider") {
                allCounters += BatriderCounters[i][1].toDouble();
            } else if (hero == "Beastmaster") {
                allCounters += BeastmasterCounters[i][1].toDouble();
            } else if (hero == "Bloodseeker") {
                allCounters += BloodseekerCounters[i][1].toDouble();
            } else if (hero == "Bounty Hunter") {
                allCounters += BountyHunterCounters[i][1].toDouble();
            } else if (hero == "Brewmaster") {
                allCounters += BrewmasterCounters[i][1].toDouble();
            } else if (hero == "Bristleback") {
                allCounters += BristlebackCounters[i][1].toDouble();
            } else if (hero == "Broodmother") {
                allCounters += BroodmotherCounters[i][1].toDouble();
            } else if (hero == "Centaur Warrunner") {
                allCounters += CentaurWarrunnerCounters[i][1].toDouble();
            } else if (hero == "Chaos Knight") {
                allCounters += ChaosKnightCounters[i][1].toDouble();
            } else if (hero == "Chen") {
                allCounters += ChenCounters[i][1].toDouble();
            } else if (hero == "Clinkz") {
                allCounters += ClinkzCounters[i][1].toDouble();
            } else if (hero == "Clockwerk") {
                allCounters += ClockwerkCounters[i][1].toDouble();
            } else if (hero == "Crystal Maiden") {
                allCounters += CrystalMaidenCounters[i][1].toDouble();
            } else if (hero == "Dark Seer") {
                allCounters += DarkSeerCounters[i][1].toDouble();
            } else if (hero == "Dark Willow") {
                allCounters += DarkWillowCounters[i][1].toDouble();
            } else if (hero == "Dawnbreaker") {
                allCounters += DawnbreakerCounters[i][1].toDouble();
            } else if (hero == "Dazzle") {
                allCounters += DazzleCounters[i][1].toDouble();
            } else if (hero == "Death Prophet") {
                allCounters += DeathProphetCounters[i][1].toDouble();
            } else if (hero == "Disruptor") {
                allCounters += DisruptorCounters[i][1].toDouble();
            } else if (hero == "Doom") {
                allCounters += DoomCounters[i][1].toDouble();
            } else if (hero == "Dragon Knight") {
                allCounters += DragonKnightCounters[i][1].toDouble();
            } else if (hero == "Drow Ranger") {
                allCounters += DrowRangerCounters[i][1].toDouble();
            } else if (hero == "Earth Spirit") {
                allCounters += EarthSpiritCounters[i][1].toDouble();
            } else if (hero == "Earthshaker") {
                allCounters += EarthshakerCounters[i][1].toDouble();
            } else if (hero == "Elder Titan") {
                allCounters += ElderTitanCounters[i][1].toDouble();
            } else if (hero == "Ember Spirit") {
                allCounters += EmberSpiritCounters[i][1].toDouble();
            } else if (hero == "Enchantress") {
                allCounters += EnchantressCounters[i][1].toDouble();
            } else if (hero == "Enigma") {
                allCounters += EnigmaCounters[i][1].toDouble();
            } else if (hero == "Faceless Void") {
                allCounters += FacelessVoidCounters[i][1].toDouble();
            } else if (hero == "Grimstroke") {
                allCounters += GrimstrokeCounters[i][1].toDouble();
            } else if (hero == "Gyrocopter") {
                allCounters += GyrocopterCounters[i][1].toDouble();
            } else if (hero == "Hoodwink") {
                allCounters += HoodwinkCounters[i][1].toDouble();
            } else if (hero == "Huskar") {
                allCounters += HuskarCounters[i][1].toDouble();
            } else if (hero == "Invoker") {
                allCounters += InvokerCounters[i][1].toDouble();
            } else if (hero == "Io") {
                allCounters += IoCounters[i][1].toDouble();
            } else if (hero == "Jakiro") {
                allCounters += JakiroCounters[i][1].toDouble();
            } else if (hero == "Juggernaut") {
                allCounters += JuggernautCounters[i][1].toDouble();
            } else if (hero == "Keeper of the Light") {
                allCounters += KeeperOfTheLightCounters[i][1].toDouble();
            } else if (hero == "Kunkka") {
                allCounters += KunkkaCounters[i][1].toDouble();
            } else if (hero == "Kez") {
                allCounters += KezCounters[i][1].toDouble();
            } else if (hero == "Legion Commander") {
                allCounters += LegionCommanderCounters[i][1].toDouble();
            } else if (hero == "Leshrac") {
                allCounters += LeshracCounters[i][1].toDouble();
            } else if (hero == "Lich") {
                allCounters += LichCounters[i][1].toDouble();
            } else if (hero == "Lifestealer") {
                allCounters += LifestealerCounters[i][1].toDouble();
            } else if (hero == "Lina") {
                allCounters += LinaCounters[i][1].toDouble();
            } else if (hero == "Lion") {
                allCounters += LionCounters[i][1].toDouble();
            } else if (hero == "Lone Druid") {
                allCounters += LoneDruidCounters[i][1].toDouble();
            } else if (hero == "Luna") {
                allCounters += LunaCounters[i][1].toDouble();
            } else if (hero == "Lycan") {
                allCounters += LycanCounters[i][1].toDouble();
            } else if (hero == "Magnus") {
                allCounters += MagnusCounters[i][1].toDouble();
            } else if (hero == "Marci") {
                allCounters += MarciCounters[i][1].toDouble();
            } else if (hero == "Mars") {
                allCounters += MarsCounters[i][1].toDouble();
            } else if (hero == "Medusa") {
                allCounters += MedusaCounters[i][1].toDouble();
            } else if (hero == "Meepo") {
                allCounters += MeepoCounters[i][1].toDouble();
            } else if (hero == "Mirana") {
                allCounters += MiranaCounters[i][1].toDouble();
            } else if (hero == "Monkey King") {
                allCounters += MonkeyKingCounters[i][1].toDouble();
            } else if (hero == "Morphling") {
                allCounters += MorphlingCounters[i][1].toDouble();
            } else if (hero == "Muerta") {
                allCounters += MuertaCounters[i][1].toDouble();
            } else if (hero == "Naga Siren") {
                allCounters += NagaSirenCounters[i][1].toDouble();
            } else if (hero == "Nature's Prophet") {
                allCounters += NaturesProphetCounters[i][1].toDouble();
            } else if (hero == "Necrophos") {
                allCounters += NecrophosCounters[i][1].toDouble();
            } else if (hero == "Night Stalker") {
                allCounters += NightStalkerCounters[i][1].toDouble();
            } else if (hero == "Nyx Assassin") {
                allCounters += NyxAssassinCounters[i][1].toDouble();
            } else if (hero == "Ogre Magi") {
                allCounters += OgreMagiCounters[i][1].toDouble();
            } else if (hero == "Omniknight") {
                allCounters += OmniknightCounters[i][1].toDouble();
            } else if (hero == "Oracle") {
                allCounters += OracleCounters[i][1].toDouble();
            } else if (hero == "Outworld Destroyer") {
                allCounters += OutworldDestroyerCounters[i][1].toDouble();
            } else if (hero == "Pangolier") {
                allCounters += PangolierCounters[i][1].toDouble();
            } else if (hero == "Phantom Assassin") {
                allCounters += PhantomAssassinCounters[i][1].toDouble();
            } else if (hero == "Phantom Lancer") {
                allCounters += PhantomLancerCounters[i][1].toDouble();
            } else if (hero == "Phoenix") {
                allCounters += PhoenixCounters[i][1].toDouble();
            } else if (hero == "Primal Beast") {
                allCounters += PrimalBeastCounters[i][1].toDouble();
            } else if (hero == "Puck") {
                allCounters += PuckCounters[i][1].toDouble();
            } else if (hero == "Pudge") {
                allCounters += PudgeCounters[i][1].toDouble();
            } else if (hero == "Pugna") {
                allCounters += PugnaCounters[i][1].toDouble();
            } else if (hero == "Queen of Pain") {
                allCounters += QueenOfPainCounters[i][1].toDouble();
            } else if (hero == "Razor") {
                allCounters += RazorCounters[i][1].toDouble();
            } else if (hero == "Riki") {
                allCounters += RikiCounters[i][1].toDouble();
            } else if (hero == "Ringmaster") {
                allCounters += RingmasterCounters[i][1].toDouble();
            } else if (hero == "Rubick") {
                allCounters += RubickCounters[i][1].toDouble();
            } else if (hero == "Sand King") {
                allCounters += SandKingCounters[i][1].toDouble();
            } else if (hero == "Shadow Demon") {
                allCounters += ShadowDemonCounters[i][1].toDouble();
            } else if (hero == "Shadow Fiend") {
                allCounters += ShadowFiendCounters[i][1].toDouble();
            } else if (hero == "Shadow Shaman") {
                allCounters += ShadowShamanCounters[i][1].toDouble();
            } else if (hero == "Silencer") {
                allCounters += SilencerCounters[i][1].toDouble();
            } else if (hero == "Skywrath Mage") {
                allCounters += SkywrathMageCounters[i][1].toDouble();
            } else if (hero == "Slardar") {
                allCounters += SlardarCounters[i][1].toDouble();
            } else if (hero == "Slark") {
                allCounters += SlarkCounters[i][1].toDouble();
            } else if (hero == "Snapfire") {
                allCounters += SnapfireCounters[i][1].toDouble();
            } else if (hero == "Sniper") {
                allCounters += SniperCounters[i][1].toDouble();
            } else if (hero == "Spectre") {
                allCounters += SpectreCounters[i][1].toDouble();
            } else if (hero == "Spirit Breaker") {
                allCounters += SpiritBreakerCounters[i][1].toDouble();
            } else if (hero == "Storm Spirit") {
                allCounters += StormSpiritCounters[i][1].toDouble();
            } else if (hero == "Sven") {
                allCounters += SvenCounters[i][1].toDouble();
            } else if (hero == "Techies") {
                allCounters += TechiesCounters[i][1].toDouble();
            } else if (hero == "Templar Assassin") {
                allCounters += TemplarAssassinCounters[i][1].toDouble();
            } else if (hero == "Terrorblade") {
                allCounters += TerrorbladeCounters[i][1].toDouble();
            } else if (hero == "Tidehunter") {
                allCounters += TidehunterCounters[i][1].toDouble();
            } else if (hero == "Timbersaw") {
                allCounters += TimbersawCounters[i][1].toDouble();
            } else if (hero == "Tinker") {
                allCounters += TinkerCounters[i][1].toDouble();
            } else if (hero == "Tiny") {
                allCounters += TinyCounters[i][1].toDouble();
            } else if (hero == "Treant Protector") {
                allCounters += TreantProtectorCounters[i][1].toDouble();
            } else if (hero == "Troll Warlord") {
                allCounters += TrollWarlordCounters[i][1].toDouble();
            } else if (hero == "Tusk") {
                allCounters += TuskCounters[i][1].toDouble();
            } else if (hero == "Underlord") {
                allCounters += UnderlordCounters[i][1].toDouble();
            } else if (hero == "Undying") {
                allCounters += UndyingCounters[i][1].toDouble();
            } else if (hero == "Ursa") {
                allCounters += UrsaCounters[i][1].toDouble();
            } else if (hero == "Vengeful Spirit") {
                allCounters += VengefulSpiritCounters[i][1].toDouble();
            } else if (hero == "Venomancer") {
                allCounters += VenomancerCounters[i][1].toDouble();
            } else if (hero == "Viper") {
                allCounters += ViperCounters[i][1].toDouble();
            } else if (hero == "Visage") {
                allCounters += VisageCounters[i][1].toDouble();
            } else if (hero == "Void Spirit") {
                allCounters += VoidSpiritCounters[i][1].toDouble();
            } else if (hero == "Warlock") {
                allCounters += WarlockCounters[i][1].toDouble();
            } else if (hero == "Weaver") {
                allCounters += WeaverCounters[i][1].toDouble();
            } else if (hero == "Windranger") {
                allCounters += WindrangerCounters[i][1].toDouble();
            } else if (hero == "Winter Wyvern") {
                allCounters += WinterWyvernCounters[i][1].toDouble();
            } else if (hero == "Witch Doctor") {
                allCounters += WitchDoctorCounters[i][1].toDouble();
            } else if (hero == "Wraith King") {
                allCounters += WraithKingCounters[i][1].toDouble();
            } else if (hero == "Zeus") {
                allCounters += ZeusCounters[i][1].toDouble();
            }
            ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        }
        AllCounters[i][1] = QString::number(allCounters);
    }


    for (int i = 0; i < heroNumber; ++i) {
        ui->tableWidget->insertRow(i);

        QPixmap pixmap(allHeroes[i][0]);
        QTableWidgetItem *item = new QTableWidgetItem;
        item->setData(Qt::DecorationRole, pixmap);
        ui->tableWidget->setItem(i, 0, item);
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(AllCounters[i][0]));

        AllCounters[i][1]=QString::number(AllCounters[i][1].toDouble()/SelectedHeroes.size());

        ui->tableWidget->setItem(i, 2, new QTableWidgetItem(AllCounters[i][1]));
    }

    for(int i = 0; i < ui->tableWidget->rowCount(); ++i) {
        ui->tableWidget->item(i, 2)->setTextAlignment(Qt::AlignCenter);
    }

    for (int i = ui->tableWidget->rowCount() - 1; i >= 0; --i) {
        QTableWidgetItem *item = ui->tableWidget->item(i, 2);
        if (item && item->text().toDouble() < 0) {
            ui->tableWidget->removeRow(i);
        }
    }

    ui->tableWidget->sortItems(2, Qt::DescendingOrder);


    AllCounters.clear();
    for (int i = 0; i < heroNumber; ++i) AllCounters.append(QList<QString>{allHeroes[i][1], "0.0"});
}


void MainWindow::on_pushButton_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


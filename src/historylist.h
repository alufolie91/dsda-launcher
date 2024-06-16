#ifndef HISTORYLIST_H
#define HISTORYLIST_H

#include "fstream"
#include <QListWidget>
#include <QSettings>
#include <QShortcut>
#include <QStandardPaths>
#include <QWidget>

namespace Ui {
class historyList;
}

class historyList : public QWidget
{
    Q_OBJECT

public:
    explicit historyList(QWidget *parent = nullptr);
    ~historyList();
    QString historyPath;

  private:
    Ui::historyList *ui;
    void init_historyPath();

  public slots:
    void getHistory();
    void fooo3();
private slots:
    void on_load_pushButton_clicked();
    void on_launch_pushButton_clicked();
    void on_history_listWidget_currentRowChanged(int currentRow);
};

#endif // HISTORYLIST_H

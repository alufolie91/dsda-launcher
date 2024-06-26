#ifndef DEMODIALOG_H
#define DEMODIALOG_H

#include "funcs.h"
#include <QComboBox>
#include <QDialog>
#include <QDialogButtonBox>
#include <QHeaderView>
#include <QLabel>
#include <QPair>
#include <QPushButton>
#include <QSettings>
#include <QSplitter>
#include <QVBoxLayout>
#include <qtablewidget.h>

class demodialog : public QDialog
{
    Q_OBJECT

public:
  explicit demodialog(QString footer_iwad, QStringList footer_files, QWidget *parent = nullptr);
  int get_iwad_index();
  QStringList get_files_list();

private:
    QComboBox *iwad_comboBox;
    QTableWidget *files_listWidget;
    QLabel *selected_count;
    void update_selected_count();
    QFileInfoList files;

  private slots:
    void accept();
};

#endif // DEMODIALOG_H



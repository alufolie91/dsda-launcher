#include "console.h"
#include "ui_console.h"

Console::Console(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Console)
{
    ui->setupUi(this);

    // Keyboard shortcut
    // Qt::CTRL is the CTRL key for Windows/Linux and is the CMD key for MacOS

    // Closes the active window
    QShortcut * ctrlwShortcut = new QShortcut(QKeySequence(Qt::Key_W | Qt::CTRL),this,SLOT(ctrlw()));
    ctrlwShortcut->setAutoRepeat(false);

    ui->console_textEdit->setReadOnly(true);
}

Console::~Console()
{
    delete ui;
}

void Console::appendText(QString s) { ui->console_textEdit->append(s); }

void Console::clearText()
{
    ui->console_textEdit->setPlainText("");
}


void Console::ctrlw() // CTRL+W runs this function close the active window
{
    QWidget *currentWindow = QApplication::activeWindow();
    currentWindow->close();
}


#include "mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{fileSystemModel = new QFileSystemModel(this);
    fileSystemModel->setRootPath("/");
    treeView = new QTreeView(this);
    treeView->setModel(fileSystemModel);
    treeView->setRootIndex(fileSystemModel->index("/"));

openButton = new QPushButton("Open ", this);
cancelButton = new QPushButton("Cancel", this);

selectedPathLabel = new QLabel("Selected Path: None", this);

connect(openButton, &QPushButton::clicked,this, &MainWindow::onOpenButtonClicked);
connect(cancelButton, &QPushButton::clicked,this, &MainWindow::onCancelButtonClicked);

QHBoxLayout* buttonLayout = new QHBoxLayout();
buttonLayout->addWidget(openButton);
buttonLayout->addWidget(cancelButton);

QVBoxLayout* mainLayout = new QVBoxLayout();
mainLayout->addWidget(treeView);
mainLayout->addWidget(selectedPathLabel);
mainLayout->addLayout(buttonLayout);

QWidget* centralWidget = new QWidget(this);
centralWidget->setLayout(mainLayout);
setCentralWidget(centralWidget);
}
MainWindow::~MainWindow(){}

void MainWindow::onOpenButtonClicked(){
    QModelIndex selectedIndex = treeView->currentIndex();

    if(!selectedIndex.isValid()){
        QMessageBox::warning(this,"warning", "No file or directory selected");
        return;
    }
    QString selectedPath = fileSystemModel->filePath(selectedIndex);
    selectedPathLabel->setText("Selected Path:" + selectedPath);
    QMessageBox::information(this, "Open"," You selected:" + selectedPath);

}

void MainWindow::onCancelButtonClicked()
{
    close();
}

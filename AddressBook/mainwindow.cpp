 #include "mainwindow.h"
#include <QMessageBox>



 MainWindow::MainWindow(QWidget *parent)
    :QMainWindow(parent)

 {
     centralWidget = new QWidget(this);

     setCentralWidget(centralWidget);
     setupForm();
  }
 void MainWindow::setupForm(){
     QFormLayout* formLayout = new QFormLayout;

     nameField = new QLineEdit(this);
     lastnameField = new QLineEdit(this);
     addressField = new QLineEdit(this);
     emailaddressField = new QLineEdit(this);

     formLayout->addRow(" NAME: ", nameField);
     formLayout->addRow("LAST NAME: " , lastnameField);
     formLayout->addRow("ADDRESS: ", addressField);
     formLayout->addRow("EMAIL ADDRESS: ", emailaddressField);

     //create buttons:
     addButton = new QPushButton("Add", this);
     deleteButton = new QPushButton("Delete", this);

     //connect buttons to slots:
     connect(addButton, &QPushButton::clicked, this, &MainWindow::addEntry);
     connect(deleteButton, &QPushButton::clicked, this, &MainWindow::deleteEntry);

     //create list widget to stor entries:
     entryList = new QListWidget(this);

     //create vertical layout for combine form.list.buttons:
     QVBoxLayout* mainLayout = new QVBoxLayout;
     mainLayout->addLayout(formLayout);
     mainLayout->addWidget(entryList);
     mainLayout->addWidget(addButton);
     mainLayout->addWidget(deleteButton);

     //apply layout to central widget:
     centralWidget->setLayout(mainLayout);
 }

 void MainWindow::addEntry(){
     QString name = nameField->text();
      QString lastname = lastnameField->text();
     QString address= addressField->text();
      QString emailaddress = emailaddressField->text();


      if(name.isEmpty() || lastname.isEmpty() || address.isEmpty() || emailaddress.isEmpty()){
         QMessageBox::warning(this, "Input Error", "All Fields must be filled.");
         return;
     }
      if(!emailaddress.contains('@')){
         QMessageBox::warning(this,"Email Error", "Email must contain '@' symbol");
          return;
     }
     QString entry = name + " " + lastname + "  lives in  " + address + ":" + " Email address is " +emailaddress ;
     entryList->addItem(entry);

     //clear input fields:
     nameField->clear();
     lastnameField->clear();
     addressField->clear();
     emailaddressField->clear();

 }
 void MainWindow::deleteEntry(){
 QListWidgetItem* selectedItem = entryList->currentItem();
     if(selectedItem){
         delete entryList->takeItem(entryList->row(selectedItem));
 }else{
     QMessageBox::warning(this, "Selection Error", "No entry selected.");
 }
 }
MainWindow::~MainWindow()
{

}


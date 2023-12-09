// 写一个跟cmd长得差不多的东西
#include<QApplication>//所有程序都是一个对象，所以就必须包含这个头文件
#include<QWidget> //这个是窗口。窗口和程序不一样
#include<QLabel>
#include<QLineEdit>
#include<QPushButton>
#include<QHBoxLayout>
#include<QVBoxLayout>// layout布局也是对象

int main(int argc,char* argv[]){

	QApplication app(argc,argv);//constructor
	QLabel *infoLabel=new QLabel;
	QLabel *openLabel=new QLabel;
	QLineEdit *cmdLineEdit=new QLineEdit;
	QPushButton *commitButton=new QPushButton;
	QPushButton *cancelButton=new QPushButton;
	
	infoLabel->setText("input cmd:");
	openLabel->setText("Open");
	commitButton->setText("Commit");
	cancelButton->setText("Cancel");
	
	QHBoxLayout *cmdLayout=new QHBoxLayout;
	cmdLayout->addWidget(openLabel);
	cmdLayout->addWidget(cmdLineEdit);
	
	QHBoxLayout *buttonLayout=new QHBoxLayout;
	buttonLayout->addWidget(commitButton);
	buttonLayout->addWidget(cancelButton);
	
	QVBoxLayout *mainLayout=new QVBoxLayout;
	mainLayout->addWidget(infoLabel);
	mainLayout->addLayout(cmdLayout);// 添加布局的话用addLayout
	mainLayout->addLayout(buttonLayout);
	
	QWidget w;
	// then we connect w and mainLayout
	w.setLayout(mainLayout);
	w.show(); // if not show, we can see nothing
	
	return app.exec(); //return这个程序，让程序页面一直停留在那里
}

/********************************************************************************
** Form generated from reading UI file 'imageretrieval.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGERETRIEVAL_H
#define UI_IMAGERETRIEVAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImageRetrievalClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QListWidget *baseImgList;
    QWidget *widget;
    QVBoxLayout *actionList;
    QLabel *label;
    QDoubleSpinBox *threshold;
    QPushButton *findSimiliar;
    QLabel *loader;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QComboBox *extraFunc;
    QPushButton *extraBtn;
    QListWidget *resultList;
    QListWidget *infoList;
    QMenuBar *menuBar;
    QMenu *menuHi;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ImageRetrievalClass)
    {
        if (ImageRetrievalClass->objectName().isEmpty())
            ImageRetrievalClass->setObjectName(QStringLiteral("ImageRetrievalClass"));
        ImageRetrievalClass->setEnabled(true);
        ImageRetrievalClass->resize(1114, 644);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ImageRetrievalClass->sizePolicy().hasHeightForWidth());
        ImageRetrievalClass->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(ImageRetrievalClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setMinimumSize(QSize(1024, 0));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        baseImgList = new QListWidget(centralWidget);
        baseImgList->setObjectName(QStringLiteral("baseImgList"));
        sizePolicy.setHeightForWidth(baseImgList->sizePolicy().hasHeightForWidth());
        baseImgList->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(baseImgList);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        actionList = new QVBoxLayout(widget);
        actionList->setSpacing(6);
        actionList->setContentsMargins(11, 11, 11, 11);
        actionList->setObjectName(QStringLiteral("actionList"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(500, 500));
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);

        actionList->addWidget(label);

        threshold = new QDoubleSpinBox(widget);
        threshold->setObjectName(QStringLiteral("threshold"));
        threshold->setWrapping(false);
        threshold->setDecimals(8);
        threshold->setSingleStep(0.01);
        threshold->setValue(3.62853);

        actionList->addWidget(threshold);

        findSimiliar = new QPushButton(widget);
        findSimiliar->setObjectName(QStringLiteral("findSimiliar"));
        findSimiliar->setEnabled(true);

        actionList->addWidget(findSimiliar);

        loader = new QLabel(widget);
        loader->setObjectName(QStringLiteral("loader"));
        loader->setMaximumSize(QSize(500, 500));
        loader->setAlignment(Qt::AlignCenter);

        actionList->addWidget(loader);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        actionList->addItem(verticalSpacer);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        actionList->addWidget(label_2);

        extraFunc = new QComboBox(widget);
        extraFunc->setObjectName(QStringLiteral("extraFunc"));
        extraFunc->setMaximumSize(QSize(250, 16777215));

        actionList->addWidget(extraFunc);

        extraBtn = new QPushButton(widget);
        extraBtn->setObjectName(QStringLiteral("extraBtn"));
        extraBtn->setEnabled(true);

        actionList->addWidget(extraBtn);

        findSimiliar->raise();
        extraBtn->raise();
        threshold->raise();
        label->raise();
        extraFunc->raise();
        label_2->raise();
        loader->raise();

        horizontalLayout->addWidget(widget);

        resultList = new QListWidget(centralWidget);
        resultList->setObjectName(QStringLiteral("resultList"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(resultList->sizePolicy().hasHeightForWidth());
        resultList->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(resultList);

        infoList = new QListWidget(centralWidget);
        infoList->setObjectName(QStringLiteral("infoList"));
        sizePolicy.setHeightForWidth(infoList->sizePolicy().hasHeightForWidth());
        infoList->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(infoList);


        horizontalLayout_2->addLayout(horizontalLayout);

        ImageRetrievalClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ImageRetrievalClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1114, 21));
        menuHi = new QMenu(menuBar);
        menuHi->setObjectName(QStringLiteral("menuHi"));
        ImageRetrievalClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ImageRetrievalClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ImageRetrievalClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ImageRetrievalClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ImageRetrievalClass->setStatusBar(statusBar);

        menuBar->addAction(menuHi->menuAction());

        retranslateUi(ImageRetrievalClass);

        QMetaObject::connectSlotsByName(ImageRetrievalClass);
    } // setupUi

    void retranslateUi(QMainWindow *ImageRetrievalClass)
    {
        ImageRetrievalClass->setWindowTitle(QApplication::translate("ImageRetrievalClass", "ImageRetrieval", 0));
        label->setText(QApplication::translate("ImageRetrievalClass", "Threshold", 0));
        threshold->setPrefix(QString());
        findSimiliar->setText(QApplication::translate("ImageRetrievalClass", "Find similiar", 0));
        loader->setText(QApplication::translate("ImageRetrievalClass", "HAHAHAH", 0));
        label_2->setText(QApplication::translate("ImageRetrievalClass", "Extra function", 0));
        extraBtn->setText(QApplication::translate("ImageRetrievalClass", "Try", 0));
        menuHi->setTitle(QApplication::translate("ImageRetrievalClass", "Exit", 0));
    } // retranslateUi

};

namespace Ui {
    class ImageRetrievalClass: public Ui_ImageRetrievalClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGERETRIEVAL_H

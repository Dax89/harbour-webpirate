#ifndef WEBVIEWDATABASE_H
#define WEBVIEWDATABASE_H

#include <QCoreApplication>
#include <QObject>
#include <QStandardPaths>
#include <QDir>

class WebViewDatabase : public QObject
{
    Q_OBJECT

    public:
        explicit WebViewDatabase(QObject *parent = 0);

    private:
        void renameDatabase();

    public slots:
        void clearNavigationData();

    private:
        static const QString OLD_DB_NAME;
};

#endif // WEBVIEWDATABASE_H

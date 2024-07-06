#include <QCoreApplication>
#include <QtDebug>

QString FilterPadding(const QString s)
{
    QString output(s.normalized(QString::NormalizationForm_D));
    return output.replace(QRegExp("[^a-zA-Z0-9\\s=/+-]"), "");
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QByteArray str = "Z6XkJattWjJakDGkei80KlPeA0Uw7Wav5EanN6nvyNrzPJ4MBAn8AYSczSShbJweP4uN5mPSG9qY\n7oRUEE3+B/W7CTlAkmRid2Y/PuEDWU0rc5ewUOxftUrFglLXGK0XJil2BGfpxXSwJwpxU3XEouAj\nX3uz7V/od9jrSkMTq8+bmLxDyTV0bA+EvbJGyaJfti5Z0i3ondjYeisa+QqslvRRqg3bcZz902cd\nUcBmxLh6P2Wn0+KOoMVa4uHZdeUpib6S4npdEqvE1xTspST1BD0Hh8CcSbAeLYgfcYghxr9EiDje\nqtFMg1gClc2J6HLXLvN4OybvL5fJDn3/s1NLHQ==\n\x03\x03\x03";
    QByteArray str2 = "5A 36 58 6B 4A 61 74 74 57 6A 4A 61 6B 44 47 6B 65 69 38 30 4B 6C 50 65 41 30 55 77 37 57 61 76 35 45 61 6E 4E 36 6E 76 79 4E 72 7A 50 4A 34 4D 42 41 6E 38 41 59 53 63 7A 53 53 68 62 4A 77 65 50 34 75 4E 35 6D 50 53 47 39 71 59 5C 6E 37 6F 52 55 45 45 33 2B 42 2F 57 37 43 54 6C 41 6B 6D 52 69 64 32 59 2F 50 75 45 44 57 55 30 72 63 35 65 77 55 4F 78 66 74 55 72 46 67 6C 4C 58 47 4B 30 58 4A 69 6C 32 42 47 66 70 78 58 53 77 4A 77 70 78 55 33 58 45 6F 75 41 6A 5C 6E 58 33 75 7A 37 56 2F 6F 64 39 6A 72 53 6B 4D 54 71 38 2B 62 6D 4C 78 44 79 54 56 30 62 41 2B 45 76 62 4A 47 79 61 4A 66 74 69 35 5A 30 69 33 6F 6E 64 6A 59 65 69 73 61 2B 51 71 73 6C 76 52 52 71 67 33 62 63 5A 7A 39 30 32 63 64 5C\xff\x03\x03\x03";

    qDebug() <<FilterPadding(str);
    qDebug() <<FilterPadding(str2);
    return 0;
}

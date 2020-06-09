#ifndef K3BFILEFILTER_H
#define K3BFILEFILTER_H


class FileFilter : public QDialog
{
    Q_OBJECT

public:
    explicit FileFilter(QWidget *parent = nullptr);
    ~FileFilter();

    QCheckBox *hide_check;
    QCheckBox *link_check;
    QCheckBox *deform_link;

    Q_SLOT void filter_exit();

private:

    QDialog *filter_dialog;
};

#endif // BURNFILTER_H

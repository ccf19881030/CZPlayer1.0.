#ifndef MUSICLIST_H
#define MUSICLIST_H

#include "head.h"

class MusicList : public QTableWidget
{
    Q_OBJECT

public:
    MusicList(Phonon::MediaObject *mediaObject,
              QList<Phonon::MediaSource> *sources,
              QWidget *widget = 0);
    ~MusicList();

protected:
    void contextMenuEvent(QContextMenuEvent *event);

signals:
    void sig_PlayListClean();
    void sig_RowSelected(int row, QString title);

private slots:
    void slot_ClearAllMusicList();//清空歌曲
    void slot_DelCurrentMusic();//删除当前歌曲
    void slot_TableClicked(int index);//获取选中行
    void slot_LocateCurrentMusic();//定位到当前歌曲
	void slot_SaveList();//保存当前列表

private:
    void updateMusicList();//更新播放列表序号

private:
    QPoint dragPosition;
    QWidget *parent;
    QAction *clearMusicList;
    QAction *closeAction;
    QAction *delCurrentMusicAction;
	QAction *saveListAction;
    int row;

    Phonon::MediaObject *m_mediaObject;
    QList<Phonon::MediaSource> *m_sources;
};

#endif // MUSICLIST_H

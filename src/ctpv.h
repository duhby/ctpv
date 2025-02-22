#ifndef CTPV_H
#define CTPV_H

#define ANY_TYPE "*"

struct CTPV {
    enum {
        MODE_PREVIEW = 0, /* default mode */
        MODE_HELP,
        MODE_SERVER,
        MODE_CLEAR,
        MODE_END,
        MODE_LIST,
        MODE_MIME,
        MODE_VERSION,
    } mode;
    char *server_id_s;
    struct {
        int forcekitty, forcekittyanim, forcechafa, noimages, nosymlinkinfo;
        int autochafa, chafasixel, chafakitty, showgpg;
        char *shell;
    } opts;
    int debug;
};

extern struct CTPV ctpv;

extern const char any_type[];

#endif

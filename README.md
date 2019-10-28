# gtk-nirvana

This is a desktop wrapper for [Nirvana HQ](https://nirvanahq.com/) - a great GTD tool. It creates a window that contains a WebKit that loads Nirvana.

Note I have no affiliation with [People Like Us](http://peoplelikeus.ca/), the makers of Nirvana!

## How to install

Currently ou have to checkout the project and build it on your own. Execute `./configure && make && make install`

See more instructions in file INSTALL. 

## Hints for building (notice to my future self)

If you got some errors building after changeing some code, just try following commands in a row:

```bash
aclocal
autoconf
autoheader
automake --add-missing
```
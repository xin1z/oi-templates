# Templates I use when solving CP problems

## TL,DR

As mentioned in the title,
this repository contains basically all the templates I use for competitive programming.

If you want to try it out, clone this repo to your home directory with:

```bash
git clone https://github.com/xin1z/oi-templates.git ~/oi-templates
```

Files included for now:

````
oi-templates
├── c-and-cpp
│   ├── cp-template.c
│   └── cp-template.cc
├── LICENSE
└── README.md

2 directories, 4 files
````

Copy certain template file(s) to your working directory while competing, and you're all good to go.

## Some *Bullshit*

It's not really my *coding philosophy*, but that's how it's like.

### No Traditional "OI Style"

I'm not a huge fan of such a common *shxtty* "OI style", e.g.:

````c
#define fr_inc(i, a, b) for(int i = a; i <= b; i++)
#define fr_in(i, a, b) for(int i = a; i < b; i++)
#define fr_dec(i, a, b) for(int i = a; i >= b; i--)
#define fr_de(i, a, b) for(int i = a; i > b; i--)

// etc. etc.
````

You aren't going to like it once you realize
"ohh damn I can't even understand what I wrote yesterday".
It's bad for tutorials, too.

So conclusion: I'm not going to use it that way.

What's acceptable to me:
```c++
using ll = long long;
#define elif else if

// etc. etc.
```

At least they're comprehensible (to me).

### Compete in a *Modern Way*

I don't know how it's like in other countries or regions,
but in China, a lot of traditional OI coaches teaches their students to write in a "C++98 style"
(i.e. almostly no modern features being used, no `constexpr`, no blank spaces etc.),
even though most IOI-styled contests in China already support up to C++20 (at least C++17).

I'm not solely a OIer myself, but a person who codes just for fun. And `C++98`... I don't think it's the future.
At least I don't want to live in the past.
OOP sounds cool, RAII sounds cool.
Although they aren't necessary if the only reason I code is to compete,
I think I'm not one who just wants to win competitions.

### In Sum

So yeah, that's how it's like.

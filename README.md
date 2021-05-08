# Aagnor

Circa 2006, Virigoth, the Head Coder for Aabahran: The Forsaken Lands publicly released the source code for the mud. The MUD was heavily modified ROM, but FL itself was downstream of ROM a few levels, based on code from Abandoned Realms & Carrion Fields. I worked on several muds based on this codebase over the next few years, several of which made it to beta, but sadly never truly opened. Around about 2008 I kicked off my own project and began recruiting, but had to stop work on the mud in 2009 .

What is contained here is that incomlete mud. I no longer have any ambition to open it, but am continuing development on it in my spare time as a project. My plan is to build a basic set oOf areas so that the mud is "fully functional" but I am not building a mud. I just want to get this code to a runable state. Where I need to build things to make functionality work, like the jail, I will, over the next few weeks ideally.

As of right now, the mud is playable. There are city areas to buy food/weapons/armor, there is a mostly complete newbie area with some walkthroughs, and there are some questing areas with some fairly engaging content. That said, most of it is incomplete, and you will find rooms in the game with no description, or worse. Over time, my plan is to get this to "workable mud" state. 

```
docker-compose build
docker-compose up &
```

Connect to the mud at localhost port 1848.
Connect to the website at localhost port 80.

You can then log in as an Implementor character named Admin with password admin. 90% of the mud is functional.
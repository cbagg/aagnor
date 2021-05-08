FROM scratch

ADD ubuntu-6.06-root.tar.gz /
COPY sources.list /etc/apt/sources.list

RUN apt-get update && apt-get upgrade -y
RUN apt-get install -y gcc-3.4 build-essential

COPY src/ mud/src

RUN cd mud/src && make all

CMD cd /mud/area && /mud/src/clands

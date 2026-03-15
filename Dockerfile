FROM ubuntu:20.04

RUN apt update && apt install -y g++

WORKDIR /app

COPY calculator.cpp .

RUN g++ calculator.cpp -o calculator

CMD ["sh", "-c", "./calculator"]


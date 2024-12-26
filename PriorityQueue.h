//
// Created by Cosmin on 12/13/2024.
//

#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H
#include <map>
#include <queue>

#include "Patient.h"

#endif //PRIORITYQUEUE_H
#pragma once

#include <cstdint>
#include<vector>
using namespace std;
template <class T>
class PriorityQueue {
    queue<Patient> *Pacienti;
    uint32_t Prioritate;
public:

    PriorityQueue(uint32_t maxPriorityValue) {
        Pacienti = new queue<Patient>;
        while(!Pacienti->empty()) {

            Patient pacient;
            pacient.prioritate = maxPriorityValue;
            Pacienti->push(pacient);

        }

    }

    uint32_t size() {
        return Pacienti->size();
    }


    bool empty() {
        return Pacienti->empty();
    }


    void push(T value, uint32_t priority) {

        Patient pacient = value;
        pacient.prioritate = priority;
        Pacienti->push(pacient);

    }


    T pop() {

        map<uint32_t,vector<Patient>> MapQueue;

        while(!Pacienti->empty()) {
            int priorityMap = Pacienti->front().prioritate;
            MapQueue[priorityMap].push_back(Pacienti->front());
            Pacienti->pop();
        }

        map<uint32_t,vector<Patient>>::iterator it;
        vector<Patient>::iterator it2;

        for(it=MapQueue.begin();it!=MapQueue.end();it++) {
            for(it2=it->second.begin();it2!=it->second.end();it2++)
            Pacienti->push(*it2);
        }
        return Pacienti->front();
    }
    void pop2() {
        Pacienti->pop();
    }

    ~PriorityQueue() {
        delete Pacienti;
    }
};
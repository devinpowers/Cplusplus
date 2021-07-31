#include <iostream>
#include "Component.h"
#include "Composite.h"
#include "Leaf.h"

using namespace std;

int main()
{

   auto *computer = new Composite(name: "COMPUTER");
   auto *peripherals = new Composite(name: "PERIPHERALS");
   auto *motherboard = new Composite(name: "MOTHERBOARD");



   auto *hdd = new Leaf(name: "SEAGATE HYBRID 2.5 TB", price: 145.25);
   auto *ram = new Leaf(name: "Crucail 2 GB RAM, price", price: 100.22);
   auto *cpu = new Leaf(name: "Intel X9 Xeon", price: 400.55);
   auto *mouse = new Leaf(name: "Razer naga 234", price: 80.15);
   auto *keyboard = new Leaf(name: "Logistic x350", price: 20.25);
   auto *monitor = new Leaf(name: "Dell XP TFI", price: 500.95);
   auto *speaker = new Leaf(name: "Samsung Video Spatial", price: 120.25);

   motherboard->AddComponent(ram);
   motherboard->AddComponent(cpu);

   peripherals->AddComponent(mouse);
   peripherals->AddComponent(keyboard);
   peripherals->AddComponent(monitor);
   peripherals->AddComponent(speaker);

   computer->AddComponent(hdd); // add composite object
   computer->AddComponent(peripherals);
   computer->AddComponent(motherboard);

   computer->ShowDetails();
}
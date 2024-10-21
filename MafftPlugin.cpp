#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "MafftPlugin.h"

void MafftPlugin::input(std::string file) {
 inputfile = file;
}

void MafftPlugin::run() {}

void MafftPlugin::output(std::string file) {
 std::string outputfile = file;
myCommand += "mafft";
myCommand += " ";
myCommand += inputfile + " >& ";
myCommand += outputfile + " ";
 system(myCommand.c_str());
}

PluginProxy<MafftPlugin> MafftPluginProxy = PluginProxy<MafftPlugin>("Mafft", PluginManager::getInstance());

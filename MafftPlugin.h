#ifndef MAFFTPLUGIN_H
#define MAFFTPLUGIN_H

#include "Plugin.h"
#include "Tool.h"
#include "PluginProxy.h"
#include <string>

class MafftPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "Mafft";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif

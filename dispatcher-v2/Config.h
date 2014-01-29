#ifndef CONFIG_H
#define CONFIG_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <string>
#include <map>

using namespace std;

class Config
{
    public:
        Config();
        virtual ~Config();
        string Getdatabase_ip() { return database_ip; }
        void Setdatabase_ip(string val) { database_ip = val; }
        int Getdatabase_port() { return database_port; }
        void Setdatabase_port(int val) { database_port = val; }
        string Getdatabase_user() { return database_user; }
        void Setdatabase_user(string val) { database_user = val; }
        string Getdatabase_password() { return database_password; }
        void Setdatabase_password(string val) { database_password = val; }
        string Getdatabase_table() { return database_table; }
        void Setdatabase_table(string val) { database_table = val; }
        string Getjudger_string() { return judger_string; }
        void Setjudger_string(string val) { judger_string = val; }
        string Getsubmit_string() { return submit_string; }
        void Setsubmit_string(string val) { submit_string = val; }
        string Getrejudge_string() { return rejudge_string; }
        void Setrejudge_string(string val) { rejudge_string = val; }
        string Geterror_rejudge_string() { return error_rejudge_string; }
        void Seterror_rejudge_string(string val) { error_rejudge_string = val; }
        string Getchallenge_string() { return challenge_string; }
        void Setchallenge_string(string val) { challenge_string = val; }
        string Getpretest_string() { return pretest_string; }
        void Setpretest_string(string val) { pretest_string = val; }
        string Gettestall_string() { return testall_string; }
        void Settestall_string(string val) { testall_string = val; }
        string Getlog_file_prefix() { return log_file_prefix; }
        void Setlog_file_prefix(string val) { log_file_prefix = val; }
        int Getport_listen() { return port_listen; }
        void Setport_listen(int val) { port_listen = val; }
        
        static Config * Getinstance();
    protected:
    private:
        string database_ip;
        int database_port;
        string database_user;
        string database_password;
        string database_table;
        string judger_string;
        string submit_string;
        string rejudge_string;
        string error_rejudge_string;
        string challenge_string;
        string pretest_string;
        string testall_string;
        string log_file_prefix;
        int port_listen;

        map <string, string> config;
        
        static Config * instance;
};

#endif // CONFIG_H

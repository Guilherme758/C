#include <stdio.h>
#include <mysql.h>

int main(){
    MYSQL mysql;

	mysql_init(&mysql);
    if(mysql_real_connect(&mysql, "localhost", "root", "040603.a", "arduino", 3306, NULL, 0) != NULL){
		mysql_query(&mysql, "INSERT INTO Users (Name) VALUES ('Guilherme')");
	}
	else{
		printf("Conexão mal-sucedida\n");
	}
}

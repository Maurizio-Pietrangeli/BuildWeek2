La sostaziale differenza tra il livello low e medium è caratterizzata dalla presenza o meno del singolo apice nella variabile $id.

Low >>> "SELECT first_name, last_name FROM users WHERE user_id = '$id'";
Medium >>> "SELECT first_name, last_name FROM users WHERE user_id = $id";

Questo vuoldire che per la query sql inserita nell'area di testo è sufficente non inserire il carattere apice singolo (')
per passare i valori nella clausola WHERE è sifficende inserire la stringa in esadecimale (credit_card=0x6372656469745f6361726473)

L'inserimento di un utente non è possibile perchè la clausola UNION accoda due SELECT che devono avere lo stesso numero di campi
la UNION non può essere usata con INSERT INTO. la SELECT INTO serve per la tabella secondaria 

la funzione mysql_query() PHP accetta solo query da eseguire 

DOCUMENTAZIONI ESTERNE:

Esadecimale:
https://dev.mysql.com/doc/refman/8.0/en/hexadecimal-literals.html

UNION:
https://www.w3schools.com/sql/sql_union.asp
https://dev.mysql.com/doc/refman/8.0/en/union.html

PHP mysql_query():
https://www.php.net/manual/it/function.mysql-query.php
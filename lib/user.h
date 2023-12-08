typedef struct {
	char *user_name;
	char *email_address;
	char *password;
} User;

int set_user_name(User*);
int get_user_name(User*);

int set_password(User*);
int get_password(User*);

int set_email_address(User*);
int get_email_address(User*);

int get_accounts(User*);
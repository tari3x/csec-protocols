/* */

#define PORT_ALICE     12344
#define PORT_BOB       12345

int create_bind_socket(int port);

int connect_socket(char *addr, int port);

int print_connect_error (int err);

#define alice_pub_key  "6F"
#define alice_priv_key "8F2E01740C36605DAB7386C5B36D3C4486E93D24B5B4D04A4DD55CB06A76DFD9EA952B9199CD1F7F7F25E3E6848E226844068EBD46B7B6312CB04AFBCEF8EF77"
#define alice_mod_key  "BF7B3660980B0895F1A0AAFC0ECCB036A1EAD03A58C9B6F13FFE7F0AC5E5EA9A5ED5059BB531710ADFFB2E450702ED6051505E4588320FCAEBF1AC00D1C23923"

#define bob_pub_key  "457"
#define bob_priv_key "6D960DFF600E96711FF8695400929046C2E111684542D49F5754F62B0A6CE7632BAC4B0F2E02F94BD4DB94DB57501DDCD9A5089D8B8ABB3F53A2854E72A9EBE7"
#define bob_mod_key  "AE2D7DE4A34B8ECB3DCD1E12264424AC8825A2715B6806223FBA4FF608E119583911A914BD1BEDC674E0CA3BB91581C3A9DF49DC61A6EAAEEB542C736CCBC17D"

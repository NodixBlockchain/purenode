#ifndef WALLET_API
	#define WALLET_API C_IMPORT
#endif



WALLET_API int C_API_FUNC init_wallet(mem_zone_ref_ptr node, tpo_mod_file *pos_mod);
WALLET_API int C_API_FUNC find_stake_hash(hash_t hash, unsigned char *stakes, unsigned int len);
WALLET_API int C_API_FUNC get_tx_inputs_from_addr(btc_addr_t addr, uint64_t *total_unspent, uint64_t min_amount, size_t min_conf, size_t max_conf, mem_zone_ref_ptr tx);
WALLET_API int C_API_FUNC list_received	(btc_addr_t addr, mem_zone_ref_ptr received, size_t min_conf, size_t max_conf, uint64_t *amount, size_t *ntx, size_t *max, size_t first);
WALLET_API int C_API_FUNC list_unspent	(btc_addr_t addr, mem_zone_ref_ptr unspents, size_t min_conf, size_t max_conf, uint64_t *total_unspent, size_t *ntx, size_t *max, size_t first);
WALLET_API int C_API_FUNC list_obj(btc_addr_t addr, const char *appName, unsigned int appType, mem_zone_ref_ptr unspents, size_t min_conf, size_t max_conf, size_t *ntx, size_t *max, size_t first);
WALLET_API int C_API_FUNC list_spent	(btc_addr_t addr, mem_zone_ref_ptr spents, size_t min_conf, size_t max_conf, uint64_t *total_spent, size_t *ntx, size_t *max, size_t first);
WALLET_API int C_API_FUNC list_sentobjs(btc_addr_t addr, const char *appName, unsigned int appType, mem_zone_ref_ptr spents, size_t min_conf, size_t max_conf, size_t *ntx, size_t *max, size_t first);
WALLET_API int C_API_FUNC remove_wallet_tx(const hash_t tx_hash);
WALLET_API int C_API_FUNC add_unspent(btc_addr_t	addr, const char *tx_hash, unsigned int oidx, uint64_t amount, btc_addr_t *src_addrs, unsigned int n_addrs);
WALLET_API int C_API_FUNC spend_tx_addr(btc_addr_t addr, const char *tx_hash, unsigned int vin, const char *ptx_hash, unsigned int oidx, btc_addr_t *addrs_to, unsigned int n_addrs_to);
WALLET_API int C_API_FUNC store_tx_wallet(btc_addr_t addr, hash_t tx_hash);
WALLET_API int C_API_FUNC store_wallet_tx(mem_zone_ref_ptr tx);
WALLET_API int C_API_FUNC store_wallet_txs(mem_zone_ref_ptr tx_list);
WALLET_API int C_API_FUNC list_staking_unspent(mem_zone_ref_ptr last_blk, btc_addr_t addr, mem_zone_ref_ptr unspents, unsigned int min_depth, int *max);
WALLET_API int C_API_FUNC wallet_list_addrs(mem_zone_ref_ptr account_name, mem_zone_ref_ptr addr_list,unsigned int balance, unsigned int minconf);
WALLET_API int C_API_FUNC setpassword(struct string *username, struct string *pw, struct string *newpw);
WALLET_API int C_API_FUNC checkpassword(struct string *username, struct string *pw);
WALLET_API int C_API_FUNC uname_cleanup(struct string *uname);
WALLET_API int C_API_FUNC add_keypair(struct string *username, const char *clabel, btc_addr_t pubaddr, dh_key_t priv, unsigned int rescan, unsigned int *found);
WALLET_API int C_API_FUNC get_privkey(struct string *username, struct string *pubaddr, dh_key_t key);
WALLET_API int C_API_FUNC get_account_list(mem_zone_ref_ptr accnt_list,unsigned int page_idx);
WALLET_API int C_API_FUNC rescan_addr(btc_addr_t pubaddr);

WALLET_API int C_API_FUNC set_anon_pw(const char *pw, unsigned int staking, unsigned int timeout);
WALLET_API int C_API_FUNC generate_new_keypair(const char *clabel, btc_addr_t pubaddr);
WALLET_API int C_API_FUNC get_anon_key(btc_addr_t pubaddr, dh_key_t privkey);
WALLET_API int C_API_FUNC privkey_to_addr(const dh_key_t privkey, struct string *privAddr);
WALLET_API int C_API_FUNC reset_anon_pw();
WALLET_API int C_API_FUNC generate_staking_block(const struct string *account_name, unsigned int iminconf, mem_zone_ref_ptr newBlock);
WALLET_API int C_API_FUNC sign_staking_block(struct string *account_name, mem_zone_ref_ptr block);
WALLET_API int C_API_FUNC create_signature_script(const struct string *signature, dh_key_t pubkey, struct string *script);

WALLET_API int C_API_FUNC wallet_pop_message(mem_zone_ref_ptr msg);
WALLET_API int C_API_FUNC unlock_unspent(hash_t txid, unsigned int oidx, unsigned int send_msg);
WALLET_API int C_API_FUNC cancel_tx_lock(mem_zone_ref_ptr tx);
WALLET_API int C_API_FUNC  wallet_clear_locked_inputs();
WALLET_API int C_API_FUNC  send_tx_messages(mem_zone_ref_ptr tx);
WALLET_API int C_API_FUNC  wallet_infos(unsigned int *staking, unsigned int *timeout);

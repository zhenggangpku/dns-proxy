#ifndef DNS_PROXY__DNS_H
#define DNS_PROXY__DNS_H

/**
 * Check whether a packet is a standard QUERY
 * @param buffer the input packet as a byte array
 * @return 1 if the request is a query, 0 otherwise
 */
int check_if_query(const unsigned char *buffer);


/**
 * Check if a packet is has an invalid TLD
 * @param buffer the input packet as a byte array
 * @return 1 if the TLD is valid, 0 otherwise
 */
int check_if_tld_valid(const unsigned char *buffer);

/**
 * Get the domain name from a packet
 * @param buffer the input packet as a byte array
 * @return the domain name as a cstring
 */
unsigned char* get_domain_name(const unsigned char *buffer);

/**
 * Create an NXDOMAIN reply to the packet in the buffer
 * @param buffer the input packet as a byte array
 * @return a packet as a byte array
 */
unsigned char **create_nxdomain_reply(const unsigned char *buffer);

#endif //DNS_PROXY__DNS_H

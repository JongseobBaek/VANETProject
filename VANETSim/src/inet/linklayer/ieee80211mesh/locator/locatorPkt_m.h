//
// Generated file, do not edit! Created by nedtool 4.6 from linklayer/ieee80211mesh/locator/locatorPkt.msg.
//

#ifndef _INET__IEEE80211_LOCATORPKT_M_H_
#define _INET__IEEE80211_LOCATORPKT_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif

// cplusplus {{
#include "inet/networklayer/contract/ipv4/IPv4Address.h"
#include "inet/linklayer/common/MACAddress.h"
#include "inet/networklayer/common/L3Address.h"
// }}


namespace inet {
namespace ieee80211 {

/**
 * Enum generated from <tt>linklayer/ieee80211mesh/locator/locatorPkt.msg:36</tt> by nedtool.
 * <pre>
 * enum LocatorOpcode
 * {
 * 
 *     LocatorAssoc = 1;
 *     LocatorDisAssoc = 2;
 *     LocatorAskAddress = 3;
 *     LocatorAckAddress = 4;
 *     RequestAddress = 5;
 *     ReplyAddress = 6;
 * }
 * </pre>
 */
enum LocatorOpcode {
    LocatorAssoc = 1,
    LocatorDisAssoc = 2,
    LocatorAskAddress = 3,
    LocatorAckAddress = 4,
    RequestAddress = 5,
    ReplyAddress = 6
};

/**
 * Class generated from <tt>linklayer/ieee80211mesh/locator/locatorPkt.msg:46</tt> by nedtool.
 * <pre>
 * packet LocatorPkt
 * {
 *     byteLength = 22;//6+6+4+4+2
 *     int opcode @enum(LocatorOpcode);
 *     L3Address origin;
 *     unsigned int sequence;
 *     MACAddress apMACAddress;
 *     MACAddress staMACAddress;
 *     IPv4Address apIPAddress;
 *     IPv4Address staIPAddress;
 * }
 * </pre>
 */
class LocatorPkt : public ::cPacket
{
  protected:
    int opcode_var;
    L3Address origin_var;
    unsigned int sequence_var;
    MACAddress apMACAddress_var;
    MACAddress staMACAddress_var;
    IPv4Address apIPAddress_var;
    IPv4Address staIPAddress_var;

  private:
    void copy(const LocatorPkt& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const LocatorPkt&);

  public:
    LocatorPkt(const char *name=NULL, int kind=0);
    LocatorPkt(const LocatorPkt& other);
    virtual ~LocatorPkt();
    LocatorPkt& operator=(const LocatorPkt& other);
    virtual LocatorPkt *dup() const {return new LocatorPkt(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getOpcode() const;
    virtual void setOpcode(int opcode);
    virtual L3Address& getOrigin();
    virtual const L3Address& getOrigin() const {return const_cast<LocatorPkt*>(this)->getOrigin();}
    virtual void setOrigin(const L3Address& origin);
    virtual unsigned int getSequence() const;
    virtual void setSequence(unsigned int sequence);
    virtual MACAddress& getApMACAddress();
    virtual const MACAddress& getApMACAddress() const {return const_cast<LocatorPkt*>(this)->getApMACAddress();}
    virtual void setApMACAddress(const MACAddress& apMACAddress);
    virtual MACAddress& getStaMACAddress();
    virtual const MACAddress& getStaMACAddress() const {return const_cast<LocatorPkt*>(this)->getStaMACAddress();}
    virtual void setStaMACAddress(const MACAddress& staMACAddress);
    virtual IPv4Address& getApIPAddress();
    virtual const IPv4Address& getApIPAddress() const {return const_cast<LocatorPkt*>(this)->getApIPAddress();}
    virtual void setApIPAddress(const IPv4Address& apIPAddress);
    virtual IPv4Address& getStaIPAddress();
    virtual const IPv4Address& getStaIPAddress() const {return const_cast<LocatorPkt*>(this)->getStaIPAddress();}
    virtual void setStaIPAddress(const IPv4Address& staIPAddress);
};

inline void doPacking(cCommBuffer *b, LocatorPkt& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, LocatorPkt& obj) {obj.parsimUnpack(b);}

} // namespace ieee80211
} // namespace inet

#endif // ifndef _INET__IEEE80211_LOCATORPKT_M_H_


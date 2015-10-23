//
// Generated file, do not edit! Created by nedtool 4.6 from networklayer/contract/generic/GenericNetworkProtocolControlInfo.msg.
//

#ifndef _INET_GENERICNETWORKPROTOCOLCONTROLINFO_M_H_
#define _INET_GENERICNETWORKPROTOCOLCONTROLINFO_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif

// cplusplus {{
#include "inet/networklayer/common/L3Address.h"
#include "inet/networklayer/common/IPProtocolId_m.h"
// }}


namespace inet {

/**
 * Class generated from <tt>networklayer/contract/generic/GenericNetworkProtocolControlInfo.msg:33</tt> by nedtool.
 * <pre>
 * //
 * // Control information for sending/receiving packets over the generic network protocol.
 * //
 * class GenericNetworkProtocolControlInfo  //TODO rename!!!!
 * {
 *     @customize(true);
 *     L3Address destinationAddress @getter(_getDestinationAddress);   // destination address
 *     L3Address sourceAddress @getter(_getSourceAddress);    // source address
 *     int interfaceId = -1; // interface on which the datagram was received, or
 *                           // should be sent (see ~InterfaceTable)
 *     short protocol @enum(IPProtocolId);  // encapsulated protocol
 *     short hopLimit;     // maximum hop count
 * }
 * </pre>
 *
 * GenericNetworkProtocolControlInfo_Base is only useful if it gets subclassed, and GenericNetworkProtocolControlInfo is derived from it.
 * The minimum code to be written for GenericNetworkProtocolControlInfo is the following:
 *
 * <pre>
 * class GenericNetworkProtocolControlInfo : public GenericNetworkProtocolControlInfo_Base
 * {
 *   private:
 *     void copy(const GenericNetworkProtocolControlInfo& other) { ... }

 *   public:
 *     GenericNetworkProtocolControlInfo() : GenericNetworkProtocolControlInfo_Base() {}
 *     GenericNetworkProtocolControlInfo(const GenericNetworkProtocolControlInfo& other) : GenericNetworkProtocolControlInfo_Base(other) {copy(other);}
 *     GenericNetworkProtocolControlInfo& operator=(const GenericNetworkProtocolControlInfo& other) {if (this==&other) return *this; GenericNetworkProtocolControlInfo_Base::operator=(other); copy(other); return *this;}
 *     virtual GenericNetworkProtocolControlInfo *dup() const {return new GenericNetworkProtocolControlInfo(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from GenericNetworkProtocolControlInfo_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(GenericNetworkProtocolControlInfo);
 * </pre>
 */
class GenericNetworkProtocolControlInfo_Base : public ::cObject
{
  protected:
    L3Address destinationAddress_var;
    L3Address sourceAddress_var;
    int interfaceId_var;
    short protocol_var;
    short hopLimit_var;

  private:
    void copy(const GenericNetworkProtocolControlInfo_Base& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const GenericNetworkProtocolControlInfo_Base&);
    // make constructors protected to avoid instantiation
    GenericNetworkProtocolControlInfo_Base();
    GenericNetworkProtocolControlInfo_Base(const GenericNetworkProtocolControlInfo_Base& other);
    // make assignment operator protected to force the user override it
    GenericNetworkProtocolControlInfo_Base& operator=(const GenericNetworkProtocolControlInfo_Base& other);

  public:
    virtual ~GenericNetworkProtocolControlInfo_Base();
    virtual GenericNetworkProtocolControlInfo_Base *dup() const {throw cRuntimeError("You forgot to manually add a dup() function to class GenericNetworkProtocolControlInfo");}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual L3Address& _getDestinationAddress();
    virtual const L3Address& _getDestinationAddress() const {return const_cast<GenericNetworkProtocolControlInfo_Base*>(this)->_getDestinationAddress();}
    virtual void setDestinationAddress(const L3Address& destinationAddress);
    virtual L3Address& _getSourceAddress();
    virtual const L3Address& _getSourceAddress() const {return const_cast<GenericNetworkProtocolControlInfo_Base*>(this)->_getSourceAddress();}
    virtual void setSourceAddress(const L3Address& sourceAddress);
    virtual int getInterfaceId() const;
    virtual void setInterfaceId(int interfaceId);
    virtual short getProtocol() const;
    virtual void setProtocol(short protocol);
    virtual short getHopLimit() const;
    virtual void setHopLimit(short hopLimit);
};

/**
 * Class generated from <tt>networklayer/contract/generic/GenericNetworkProtocolControlInfo.msg:52</tt> by nedtool.
 * <pre>
 * //
 * // Control info attached to packets sent from ~GenericNetworkProtocol to ~GenericARP.
 * //
 * // Next hop address is used on a LAN to determine the MAC destination
 * // address (and it may be used on other multicast networks for similar
 * // addressing purpose).
 * //
 * class GenericRoutingDecision
 * {
 *     int interfaceId = -1;
 *     L3Address nextHop;
 * }
 * </pre>
 */
class GenericRoutingDecision : public ::cObject
{
  protected:
    int interfaceId_var;
    L3Address nextHop_var;

  private:
    void copy(const GenericRoutingDecision& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const GenericRoutingDecision&);

  public:
    GenericRoutingDecision();
    GenericRoutingDecision(const GenericRoutingDecision& other);
    virtual ~GenericRoutingDecision();
    GenericRoutingDecision& operator=(const GenericRoutingDecision& other);
    virtual GenericRoutingDecision *dup() const {return new GenericRoutingDecision(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getInterfaceId() const;
    virtual void setInterfaceId(int interfaceId);
    virtual L3Address& getNextHop();
    virtual const L3Address& getNextHop() const {return const_cast<GenericRoutingDecision*>(this)->getNextHop();}
    virtual void setNextHop(const L3Address& nextHop);
};

inline void doPacking(cCommBuffer *b, GenericRoutingDecision& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, GenericRoutingDecision& obj) {obj.parsimUnpack(b);}

} // namespace inet

#endif // ifndef _INET_GENERICNETWORKPROTOCOLCONTROLINFO_M_H_


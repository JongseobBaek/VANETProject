//
// Generated file, do not edit! Created by nedtool 4.6 from networklayer/common/SimpleNetworkProtocolControlInfo.msg.
//

#ifndef _INET_SIMPLENETWORKPROTOCOLCONTROLINFO_M_H_
#define _INET_SIMPLENETWORKPROTOCOLCONTROLINFO_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif

// cplusplus {{
#include "inet/networklayer/common/L3Address.h"
// }}


namespace inet {

/**
 * Class generated from <tt>networklayer/common/SimpleNetworkProtocolControlInfo.msg:31</tt> by nedtool.
 * <pre>
 * //
 * // Network level control information for sending/receiving packets.
 * //
 * class SimpleNetworkProtocolControlInfo
 * {
 *     @customize(true);
 *     L3Address destinationAddress @getter(_getDestinationAddress);
 *     L3Address sourceAddress @getter(_getSourceAddress);
 *     int interfaceId = -1;
 *     short protocol;
 *     short hopLimit;
 * }
 * </pre>
 *
 * SimpleNetworkProtocolControlInfo_Base is only useful if it gets subclassed, and SimpleNetworkProtocolControlInfo is derived from it.
 * The minimum code to be written for SimpleNetworkProtocolControlInfo is the following:
 *
 * <pre>
 * class SimpleNetworkProtocolControlInfo : public SimpleNetworkProtocolControlInfo_Base
 * {
 *   private:
 *     void copy(const SimpleNetworkProtocolControlInfo& other) { ... }

 *   public:
 *     SimpleNetworkProtocolControlInfo() : SimpleNetworkProtocolControlInfo_Base() {}
 *     SimpleNetworkProtocolControlInfo(const SimpleNetworkProtocolControlInfo& other) : SimpleNetworkProtocolControlInfo_Base(other) {copy(other);}
 *     SimpleNetworkProtocolControlInfo& operator=(const SimpleNetworkProtocolControlInfo& other) {if (this==&other) return *this; SimpleNetworkProtocolControlInfo_Base::operator=(other); copy(other); return *this;}
 *     virtual SimpleNetworkProtocolControlInfo *dup() const {return new SimpleNetworkProtocolControlInfo(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from SimpleNetworkProtocolControlInfo_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(SimpleNetworkProtocolControlInfo);
 * </pre>
 */
class SimpleNetworkProtocolControlInfo_Base : public ::cObject
{
  protected:
    L3Address destinationAddress_var;
    L3Address sourceAddress_var;
    int interfaceId_var;
    short protocol_var;
    short hopLimit_var;

  private:
    void copy(const SimpleNetworkProtocolControlInfo_Base& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const SimpleNetworkProtocolControlInfo_Base&);
    // make constructors protected to avoid instantiation
    SimpleNetworkProtocolControlInfo_Base();
    SimpleNetworkProtocolControlInfo_Base(const SimpleNetworkProtocolControlInfo_Base& other);
    // make assignment operator protected to force the user override it
    SimpleNetworkProtocolControlInfo_Base& operator=(const SimpleNetworkProtocolControlInfo_Base& other);

  public:
    virtual ~SimpleNetworkProtocolControlInfo_Base();
    virtual SimpleNetworkProtocolControlInfo_Base *dup() const {throw cRuntimeError("You forgot to manually add a dup() function to class SimpleNetworkProtocolControlInfo");}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual L3Address& _getDestinationAddress();
    virtual const L3Address& _getDestinationAddress() const {return const_cast<SimpleNetworkProtocolControlInfo_Base*>(this)->_getDestinationAddress();}
    virtual void setDestinationAddress(const L3Address& destinationAddress);
    virtual L3Address& _getSourceAddress();
    virtual const L3Address& _getSourceAddress() const {return const_cast<SimpleNetworkProtocolControlInfo_Base*>(this)->_getSourceAddress();}
    virtual void setSourceAddress(const L3Address& sourceAddress);
    virtual int getInterfaceId() const;
    virtual void setInterfaceId(int interfaceId);
    virtual short getProtocol() const;
    virtual void setProtocol(short protocol);
    virtual short getHopLimit() const;
    virtual void setHopLimit(short hopLimit);
};

} // namespace inet

#endif // ifndef _INET_SIMPLENETWORKPROTOCOLCONTROLINFO_M_H_


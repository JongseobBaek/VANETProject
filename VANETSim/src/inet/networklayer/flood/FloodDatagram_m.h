//
// Generated file, do not edit! Created by nedtool 4.6 from networklayer/flood/FloodDatagram.msg.
//

#ifndef _INET_FLOODDATAGRAM_M_H_
#define _INET_FLOODDATAGRAM_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif

// cplusplus {{
#include "inet/networklayer/base/NetworkDatagramBase_m.h"
// }}


namespace inet {

/**
 * Class generated from <tt>networklayer/flood/FloodDatagram.msg:27</tt> by nedtool.
 * <pre>
 * packet FloodDatagram extends NetworkDatagramBase
 * {
 *     @customize(true);
 * 
 *     int ttl = 1;    // time to live field
 *     unsigned long seqNum = 0; // sequence number
 *     int transportProtocol = -1;
 * }
 * </pre>
 *
 * FloodDatagram_Base is only useful if it gets subclassed, and FloodDatagram is derived from it.
 * The minimum code to be written for FloodDatagram is the following:
 *
 * <pre>
 * class FloodDatagram : public FloodDatagram_Base
 * {
 *   private:
 *     void copy(const FloodDatagram& other) { ... }

 *   public:
 *     FloodDatagram(const char *name=NULL, int kind=0) : FloodDatagram_Base(name,kind) {}
 *     FloodDatagram(const FloodDatagram& other) : FloodDatagram_Base(other) {copy(other);}
 *     FloodDatagram& operator=(const FloodDatagram& other) {if (this==&other) return *this; FloodDatagram_Base::operator=(other); copy(other); return *this;}
 *     virtual FloodDatagram *dup() const {return new FloodDatagram(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from FloodDatagram_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(FloodDatagram);
 * </pre>
 */
class FloodDatagram_Base : public ::inet::NetworkDatagramBase
{
  protected:
    int ttl_var;
    unsigned long seqNum_var;
    int transportProtocol_var;

  private:
    void copy(const FloodDatagram_Base& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const FloodDatagram_Base&);
    // make constructors protected to avoid instantiation
    FloodDatagram_Base(const char *name=NULL, int kind=0);
    FloodDatagram_Base(const FloodDatagram_Base& other);
    // make assignment operator protected to force the user override it
    FloodDatagram_Base& operator=(const FloodDatagram_Base& other);

  public:
    virtual ~FloodDatagram_Base();
    virtual FloodDatagram_Base *dup() const {throw cRuntimeError("You forgot to manually add a dup() function to class FloodDatagram");}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getTtl() const;
    virtual void setTtl(int ttl);
    virtual unsigned long getSeqNum() const;
    virtual void setSeqNum(unsigned long seqNum);
    virtual int getTransportProtocol() const;
    virtual void setTransportProtocol(int transportProtocol);
};

} // namespace inet

#endif // ifndef _INET_FLOODDATAGRAM_M_H_


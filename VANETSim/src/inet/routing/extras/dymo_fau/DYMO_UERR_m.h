//
// Generated file, do not edit! Created by nedtool 4.6 from routing/extras/dymo_fau/DYMO_UERR.msg.
//

#ifndef _INET__INETMANET_DYMO_UERR_M_H_
#define _INET__INETMANET_DYMO_UERR_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif

// cplusplus {{
#include "inet/routing/extras/dymo_fau/DYMO_PacketBBMessage_m.h"
// }}


namespace inet {
namespace inetmanet {

/**
 * Class generated from <tt>routing/extras/dymo_fau/DYMO_UERR.msg:31</tt> by nedtool.
 * <pre>
 * message DYMO_UERR extends DYMO_PacketBBMessage
 * {
 *     int uelemTargetAddress;
 *     int uerrTargetAddress;
 *     char uelemType;
 * }
 * </pre>
 */
class DYMO_UERR : public ::inet::inetmanet::DYMO_PacketBBMessage
{
  protected:
    int uelemTargetAddress_var;
    int uerrTargetAddress_var;
    char uelemType_var;

  private:
    void copy(const DYMO_UERR& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const DYMO_UERR&);

  public:
    DYMO_UERR(const char *name=NULL, int kind=0);
    DYMO_UERR(const DYMO_UERR& other);
    virtual ~DYMO_UERR();
    DYMO_UERR& operator=(const DYMO_UERR& other);
    virtual DYMO_UERR *dup() const {return new DYMO_UERR(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getUelemTargetAddress() const;
    virtual void setUelemTargetAddress(int uelemTargetAddress);
    virtual int getUerrTargetAddress() const;
    virtual void setUerrTargetAddress(int uerrTargetAddress);
    virtual char getUelemType() const;
    virtual void setUelemType(char uelemType);
};

inline void doPacking(cCommBuffer *b, DYMO_UERR& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, DYMO_UERR& obj) {obj.parsimUnpack(b);}

} // namespace inetmanet
} // namespace inet

#endif // ifndef _INET__INETMANET_DYMO_UERR_M_H_


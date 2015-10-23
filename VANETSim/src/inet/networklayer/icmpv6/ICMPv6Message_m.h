//
// Generated file, do not edit! Created by nedtool 4.6 from networklayer/icmpv6/ICMPv6Message.msg.
//

#ifndef _INET_ICMPV6MESSAGE_M_H_
#define _INET_ICMPV6MESSAGE_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif

// cplusplus {{
#include "inet/common/INETDefs.h"
#define ICMPv6_HEADER_BYTES  8
// }}


namespace inet {

/**
 * Enum generated from <tt>networklayer/icmpv6/ICMPv6Message.msg:32</tt> by nedtool.
 * <pre>
 * enum ICMPv6Type
 * {
 * 
 *     ICMPv6_UNSPECIFIED = 0;
 *     ICMPv6_DESTINATION_UNREACHABLE = 1;
 *     ICMPv6_PACKET_TOO_BIG = 2;
 *     ICMPv6_TIME_EXCEEDED = 3;
 *     ICMPv6_PARAMETER_PROBLEM = 4;
 *     ICMPv6_ECHO_REQUEST = 128;
 *     ICMPv6_ECHO_REPLY = 129;
 *     ICMPv6_MLD_QUERY = 130;
 *     ICMPv6_MLD_REPORT = 131;
 *     ICMPv6_MLD_DONE = 132;
 *     ICMPv6_ROUTER_SOL = 133;
 *     ICMPv6_ROUTER_AD = 134;
 *     ICMPv6_NEIGHBOUR_SOL = 135;
 *     ICMPv6_NEIGHBOUR_AD = 136;
 *     ICMPv6_REDIRECT = 137;
 *     ICMPv6_MLDv2_REPORT = 143;
 *     ICMPv6_EXPERIMENTAL_MOBILITY = 150;  //Zarrar Yousaf 02.08.07 (FMIPv6 Implementation)
 * }
 * 
 * 
 * //cplusplus {{
 * //typedef int ICMPv6Code;
 * //}}
 * </pre>
 */
enum ICMPv6Type {
    ICMPv6_UNSPECIFIED = 0,
    ICMPv6_DESTINATION_UNREACHABLE = 1,
    ICMPv6_PACKET_TOO_BIG = 2,
    ICMPv6_TIME_EXCEEDED = 3,
    ICMPv6_PARAMETER_PROBLEM = 4,
    ICMPv6_ECHO_REQUEST = 128,
    ICMPv6_ECHO_REPLY = 129,
    ICMPv6_MLD_QUERY = 130,
    ICMPv6_MLD_REPORT = 131,
    ICMPv6_MLD_DONE = 132,
    ICMPv6_ROUTER_SOL = 133,
    ICMPv6_ROUTER_AD = 134,
    ICMPv6_NEIGHBOUR_SOL = 135,
    ICMPv6_NEIGHBOUR_AD = 136,
    ICMPv6_REDIRECT = 137,
    ICMPv6_MLDv2_REPORT = 143,
    ICMPv6_EXPERIMENTAL_MOBILITY = 150
};

/**
 * Enum generated from <tt>networklayer/icmpv6/ICMPv6Message.msg:63</tt> by nedtool.
 * <pre>
 * //
 * // ICMPv6 "codes" for type ICMPv6_DESTINATION_UNREACHABLE
 * //
 * enum ICMPv6DEST_UN
 * {
 * 
 *     NO_ROUTE_TO_DEST = 0;
 *     COMM_WITH_DEST_PROHIBITED = 1;
 *     //2 - NOT ASSIGNED
 *     ADDRESS_UNREACHABLE = 3;
 *     PORT_UNREACHABLE = 4;
 * }
 * </pre>
 */
enum ICMPv6DEST_UN {
    NO_ROUTE_TO_DEST = 0,
    COMM_WITH_DEST_PROHIBITED = 1,
    ADDRESS_UNREACHABLE = 3,
    PORT_UNREACHABLE = 4
};

/**
 * Enum generated from <tt>networklayer/icmpv6/ICMPv6Message.msg:77</tt> by nedtool.
 * <pre>
 * //
 * // ICMPv6 "codes" for type ICMPv6_TIME_EXCEEDED
 * //
 * enum ICMPv6_TIME_EX
 * {
 * 
 *     ND_HOP_LIMIT_EXCEEDED = 0;
 *     ND_FRAGMENT_REASSEMBLY_TIME = 1;
 * }
 * </pre>
 */
enum ICMPv6_TIME_EX {
    ND_HOP_LIMIT_EXCEEDED = 0,
    ND_FRAGMENT_REASSEMBLY_TIME = 1
};

/**
 * Enum generated from <tt>networklayer/icmpv6/ICMPv6Message.msg:87</tt> by nedtool.
 * <pre>
 * //
 * // ICMPv6 "codes" for type ICMPv6_PARAMETER_PROBLEM
 * //
 * enum ICMPv6_PARAMETER_PROB
 * {
 * 
 *     ERROREOUS_HDR_FIELD = 0;
 *     UNRECOGNIZED_NEXT_HDR_TYPE = 1;
 *     UNRECOGNIZED_IPV6_OPTION = 2;
 * }
 * </pre>
 */
enum ICMPv6_PARAMETER_PROB {
    ERROREOUS_HDR_FIELD = 0,
    UNRECOGNIZED_NEXT_HDR_TYPE = 1,
    UNRECOGNIZED_IPV6_OPTION = 2
};

/**
 * Class generated from <tt>networklayer/icmpv6/ICMPv6Message.msg:105</tt> by nedtool.
 * <pre>
 * //
 * // Represents an ICMPv6 packet.
 * //
 * // Notes:
 * //    1. number of octets excluding the error datagram that is usually appended
 * //       in optInfo, i.e. the Type|CODE|CHECKSUM|UNUSED/POINTER/MTU/OTHER
 * //       as defined in RFC2463
 * //    2. Any ICMP type with MSB set, i.e. >=128 is an Informational ICMP message
 * //
 * packet ICMPv6Message
 * {
 *     int type @enum(ICMPv6Type);
 *         //int code; //TODO: this should be specific to different ICMP types.
 * }
 * </pre>
 */
class ICMPv6Message : public ::cPacket
{
  protected:
    int type_var;

  private:
    void copy(const ICMPv6Message& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const ICMPv6Message&);

  public:
    ICMPv6Message(const char *name=NULL, int kind=0);
    ICMPv6Message(const ICMPv6Message& other);
    virtual ~ICMPv6Message();
    ICMPv6Message& operator=(const ICMPv6Message& other);
    virtual ICMPv6Message *dup() const {return new ICMPv6Message(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getType() const;
    virtual void setType(int type);
};

inline void doPacking(cCommBuffer *b, ICMPv6Message& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, ICMPv6Message& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>networklayer/icmpv6/ICMPv6Message.msg:115</tt> by nedtool.
 * <pre>
 * //
 * // Notes:
 * //   1. As defined in RFC2463: Section 3
 * //
 * packet ICMPv6DestUnreachableMsg extends ICMPv6Message
 * {
 *     int code @enum(ICMPv6DEST_UN);
 * }
 * </pre>
 */
class ICMPv6DestUnreachableMsg : public ::inet::ICMPv6Message
{
  protected:
    int code_var;

  private:
    void copy(const ICMPv6DestUnreachableMsg& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const ICMPv6DestUnreachableMsg&);

  public:
    ICMPv6DestUnreachableMsg(const char *name=NULL, int kind=0);
    ICMPv6DestUnreachableMsg(const ICMPv6DestUnreachableMsg& other);
    virtual ~ICMPv6DestUnreachableMsg();
    ICMPv6DestUnreachableMsg& operator=(const ICMPv6DestUnreachableMsg& other);
    virtual ICMPv6DestUnreachableMsg *dup() const {return new ICMPv6DestUnreachableMsg(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getCode() const;
    virtual void setCode(int code);
};

inline void doPacking(cCommBuffer *b, ICMPv6DestUnreachableMsg& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, ICMPv6DestUnreachableMsg& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>networklayer/icmpv6/ICMPv6Message.msg:120</tt> by nedtool.
 * <pre>
 * packet ICMPv6PacketTooBigMsg extends ICMPv6Message
 * {
 *     int code; //Set to 0 by sender and ignored by receiver.
 *     int MTU; //MTU of next-hop link
 * }
 * </pre>
 */
class ICMPv6PacketTooBigMsg : public ::inet::ICMPv6Message
{
  protected:
    int code_var;
    int MTU_var;

  private:
    void copy(const ICMPv6PacketTooBigMsg& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const ICMPv6PacketTooBigMsg&);

  public:
    ICMPv6PacketTooBigMsg(const char *name=NULL, int kind=0);
    ICMPv6PacketTooBigMsg(const ICMPv6PacketTooBigMsg& other);
    virtual ~ICMPv6PacketTooBigMsg();
    ICMPv6PacketTooBigMsg& operator=(const ICMPv6PacketTooBigMsg& other);
    virtual ICMPv6PacketTooBigMsg *dup() const {return new ICMPv6PacketTooBigMsg(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getCode() const;
    virtual void setCode(int code);
    virtual int getMTU() const;
    virtual void setMTU(int MTU);
};

inline void doPacking(cCommBuffer *b, ICMPv6PacketTooBigMsg& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, ICMPv6PacketTooBigMsg& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>networklayer/icmpv6/ICMPv6Message.msg:126</tt> by nedtool.
 * <pre>
 * packet ICMPv6TimeExceededMsg extends ICMPv6Message
 * {
 *     int code @enum(ICMPv6_TIME_EX);
 * }
 * </pre>
 */
class ICMPv6TimeExceededMsg : public ::inet::ICMPv6Message
{
  protected:
    int code_var;

  private:
    void copy(const ICMPv6TimeExceededMsg& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const ICMPv6TimeExceededMsg&);

  public:
    ICMPv6TimeExceededMsg(const char *name=NULL, int kind=0);
    ICMPv6TimeExceededMsg(const ICMPv6TimeExceededMsg& other);
    virtual ~ICMPv6TimeExceededMsg();
    ICMPv6TimeExceededMsg& operator=(const ICMPv6TimeExceededMsg& other);
    virtual ICMPv6TimeExceededMsg *dup() const {return new ICMPv6TimeExceededMsg(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getCode() const;
    virtual void setCode(int code);
};

inline void doPacking(cCommBuffer *b, ICMPv6TimeExceededMsg& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, ICMPv6TimeExceededMsg& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>networklayer/icmpv6/ICMPv6Message.msg:131</tt> by nedtool.
 * <pre>
 * packet ICMPv6ParamProblemMsg extends ICMPv6Message
 * {
 *     int code @enum(ICMPv6_PARAMETER_PROB);
 * }
 * </pre>
 */
class ICMPv6ParamProblemMsg : public ::inet::ICMPv6Message
{
  protected:
    int code_var;

  private:
    void copy(const ICMPv6ParamProblemMsg& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const ICMPv6ParamProblemMsg&);

  public:
    ICMPv6ParamProblemMsg(const char *name=NULL, int kind=0);
    ICMPv6ParamProblemMsg(const ICMPv6ParamProblemMsg& other);
    virtual ~ICMPv6ParamProblemMsg();
    ICMPv6ParamProblemMsg& operator=(const ICMPv6ParamProblemMsg& other);
    virtual ICMPv6ParamProblemMsg *dup() const {return new ICMPv6ParamProblemMsg(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getCode() const;
    virtual void setCode(int code);
};

inline void doPacking(cCommBuffer *b, ICMPv6ParamProblemMsg& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, ICMPv6ParamProblemMsg& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>networklayer/icmpv6/ICMPv6Message.msg:140</tt> by nedtool.
 * <pre>
 * //
 * // ICMPv6 Echo Request packet (RFC2463: Section 4).
 * // Data is attached through encapsulation (see ICMPv6.cc)
 * //
 * packet ICMPv6EchoRequestMsg extends ICMPv6Message
 * {
 *     int code; //set to 0.
 *     int identifier; // identifier to aid in matching Echo replies. May be Zero
 *     int seqNumber; // sequence number to aid in matching Echo replies. May be Zero
 *         //Data is attached through encapsulation. See ICMPv6.cc
 * }
 * </pre>
 */
class ICMPv6EchoRequestMsg : public ::inet::ICMPv6Message
{
  protected:
    int code_var;
    int identifier_var;
    int seqNumber_var;

  private:
    void copy(const ICMPv6EchoRequestMsg& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const ICMPv6EchoRequestMsg&);

  public:
    ICMPv6EchoRequestMsg(const char *name=NULL, int kind=0);
    ICMPv6EchoRequestMsg(const ICMPv6EchoRequestMsg& other);
    virtual ~ICMPv6EchoRequestMsg();
    ICMPv6EchoRequestMsg& operator=(const ICMPv6EchoRequestMsg& other);
    virtual ICMPv6EchoRequestMsg *dup() const {return new ICMPv6EchoRequestMsg(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getCode() const;
    virtual void setCode(int code);
    virtual int getIdentifier() const;
    virtual void setIdentifier(int identifier);
    virtual int getSeqNumber() const;
    virtual void setSeqNumber(int seqNumber);
};

inline void doPacking(cCommBuffer *b, ICMPv6EchoRequestMsg& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, ICMPv6EchoRequestMsg& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>networklayer/icmpv6/ICMPv6Message.msg:151</tt> by nedtool.
 * <pre>
 * //
 * // ICMPv6 Echo Reply packet. Data is attached through encapsulation (see ICMPv6.cc)
 * //
 * packet ICMPv6EchoReplyMsg extends ICMPv6Message
 * {
 *     int code; //set to 0.
 *     int identifier; // identifier to aid in matching Echo replies. May be Zero
 *     int seqNumber; // sequence number to aid in matching Echo replies. May be Zero
 * }
 * </pre>
 */
class ICMPv6EchoReplyMsg : public ::inet::ICMPv6Message
{
  protected:
    int code_var;
    int identifier_var;
    int seqNumber_var;

  private:
    void copy(const ICMPv6EchoReplyMsg& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const ICMPv6EchoReplyMsg&);

  public:
    ICMPv6EchoReplyMsg(const char *name=NULL, int kind=0);
    ICMPv6EchoReplyMsg(const ICMPv6EchoReplyMsg& other);
    virtual ~ICMPv6EchoReplyMsg();
    ICMPv6EchoReplyMsg& operator=(const ICMPv6EchoReplyMsg& other);
    virtual ICMPv6EchoReplyMsg *dup() const {return new ICMPv6EchoReplyMsg(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getCode() const;
    virtual void setCode(int code);
    virtual int getIdentifier() const;
    virtual void setIdentifier(int identifier);
    virtual int getSeqNumber() const;
    virtual void setSeqNumber(int seqNumber);
};

inline void doPacking(cCommBuffer *b, ICMPv6EchoReplyMsg& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, ICMPv6EchoReplyMsg& obj) {obj.parsimUnpack(b);}

} // namespace inet

#endif // ifndef _INET_ICMPV6MESSAGE_M_H_


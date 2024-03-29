// Generated by gencpp from file beginner_tutorials/NamedPoint.msg
// DO NOT EDIT!


#ifndef BEGINNER_TUTORIALS_MESSAGE_NAMEDPOINT_H
#define BEGINNER_TUTORIALS_MESSAGE_NAMEDPOINT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Vector3.h>

namespace beginner_tutorials
{
template <class ContainerAllocator>
struct NamedPoint_
{
  typedef NamedPoint_<ContainerAllocator> Type;

  NamedPoint_()
    : header()
    , name()
    , point()  {
    }
  NamedPoint_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , name(_alloc)
    , point(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _point_type;
  _point_type point;





  typedef boost::shared_ptr< ::beginner_tutorials::NamedPoint_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::beginner_tutorials::NamedPoint_<ContainerAllocator> const> ConstPtr;

}; // struct NamedPoint_

typedef ::beginner_tutorials::NamedPoint_<std::allocator<void> > NamedPoint;

typedef boost::shared_ptr< ::beginner_tutorials::NamedPoint > NamedPointPtr;
typedef boost::shared_ptr< ::beginner_tutorials::NamedPoint const> NamedPointConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::beginner_tutorials::NamedPoint_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::beginner_tutorials::NamedPoint_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::beginner_tutorials::NamedPoint_<ContainerAllocator1> & lhs, const ::beginner_tutorials::NamedPoint_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.name == rhs.name &&
    lhs.point == rhs.point;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::beginner_tutorials::NamedPoint_<ContainerAllocator1> & lhs, const ::beginner_tutorials::NamedPoint_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace beginner_tutorials

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::beginner_tutorials::NamedPoint_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::beginner_tutorials::NamedPoint_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::beginner_tutorials::NamedPoint_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::beginner_tutorials::NamedPoint_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::beginner_tutorials::NamedPoint_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::beginner_tutorials::NamedPoint_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::beginner_tutorials::NamedPoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "128ca778f44b101c0c6b8c64ae0c2d95";
  }

  static const char* value(const ::beginner_tutorials::NamedPoint_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x128ca778f44b101cULL;
  static const uint64_t static_value2 = 0x0c6b8c64ae0c2d95ULL;
};

template<class ContainerAllocator>
struct DataType< ::beginner_tutorials::NamedPoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "beginner_tutorials/NamedPoint";
  }

  static const char* value(const ::beginner_tutorials::NamedPoint_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::beginner_tutorials::NamedPoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"string name\n"
"geometry_msgs/Vector3 point\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::beginner_tutorials::NamedPoint_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::beginner_tutorials::NamedPoint_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.name);
      stream.next(m.point);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct NamedPoint_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::beginner_tutorials::NamedPoint_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::beginner_tutorials::NamedPoint_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "point: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.point);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BEGINNER_TUTORIALS_MESSAGE_NAMEDPOINT_H

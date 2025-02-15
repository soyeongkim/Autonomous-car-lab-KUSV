// Generated by gencpp from file kusv_msgs/DetectedObject.msg
// DO NOT EDIT!


#ifndef KUSV_MSGS_MESSAGE_DETECTEDOBJECT_H
#define KUSV_MSGS_MESSAGE_DETECTEDOBJECT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>
#include <geometry_msgs/Point.h>

namespace kusv_msgs
{
template <class ContainerAllocator>
struct DetectedObject_
{
  typedef DetectedObject_<ContainerAllocator> Type;

  DetectedObject_()
    : id(0)
    , label()
    , pose()
    , convex_hull()  {
    }
  DetectedObject_(const ContainerAllocator& _alloc)
    : id(0)
    , label(_alloc)
    , pose(_alloc)
    , convex_hull(_alloc)  {
  (void)_alloc;
    }



   typedef uint32_t _id_type;
  _id_type id;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _label_type;
  _label_type label;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _pose_type;
  _pose_type pose;

   typedef std::vector< ::geometry_msgs::Point_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Point_<ContainerAllocator> >::other >  _convex_hull_type;
  _convex_hull_type convex_hull;





  typedef boost::shared_ptr< ::kusv_msgs::DetectedObject_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kusv_msgs::DetectedObject_<ContainerAllocator> const> ConstPtr;

}; // struct DetectedObject_

typedef ::kusv_msgs::DetectedObject_<std::allocator<void> > DetectedObject;

typedef boost::shared_ptr< ::kusv_msgs::DetectedObject > DetectedObjectPtr;
typedef boost::shared_ptr< ::kusv_msgs::DetectedObject const> DetectedObjectConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kusv_msgs::DetectedObject_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kusv_msgs::DetectedObject_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace kusv_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'kusv_msgs': ['/home/lke/ACL_KUSV/src/msgs/kusv_msgs/msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'pcl_msgs': ['/opt/ros/kinetic/share/pcl_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'jsk_footstep_msgs': ['/opt/ros/kinetic/share/jsk_footstep_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'jsk_recognition_msgs': ['/opt/ros/kinetic/share/jsk_recognition_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::kusv_msgs::DetectedObject_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kusv_msgs::DetectedObject_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kusv_msgs::DetectedObject_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kusv_msgs::DetectedObject_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kusv_msgs::DetectedObject_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kusv_msgs::DetectedObject_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kusv_msgs::DetectedObject_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cb70f119525e9d60b681d941cb0e2d32";
  }

  static const char* value(const ::kusv_msgs::DetectedObject_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcb70f119525e9d60ULL;
  static const uint64_t static_value2 = 0xb681d941cb0e2d32ULL;
};

template<class ContainerAllocator>
struct DataType< ::kusv_msgs::DetectedObject_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kusv_msgs/DetectedObject";
  }

  static const char* value(const ::kusv_msgs::DetectedObject_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kusv_msgs::DetectedObject_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 id\n\
string label\n\
\n\
geometry_msgs/Pose pose\n\
geometry_msgs/Point[] convex_hull\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of position and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::kusv_msgs::DetectedObject_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kusv_msgs::DetectedObject_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.label);
      stream.next(m.pose);
      stream.next(m.convex_hull);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DetectedObject_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kusv_msgs::DetectedObject_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kusv_msgs::DetectedObject_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.id);
    s << indent << "label: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.label);
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
    s << indent << "convex_hull[]" << std::endl;
    for (size_t i = 0; i < v.convex_hull.size(); ++i)
    {
      s << indent << "  convex_hull[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "    ", v.convex_hull[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // KUSV_MSGS_MESSAGE_DETECTEDOBJECT_H

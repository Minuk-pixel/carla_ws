// Generated by gencpp from file lane_ros/laneinfo.msg
// DO NOT EDIT!


#ifndef LANE_ROS_MESSAGE_LANEINFO_H
#define LANE_ROS_MESSAGE_LANEINFO_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace lane_ros
{
template <class ContainerAllocator>
struct laneinfo_
{
  typedef laneinfo_<ContainerAllocator> Type;

  laneinfo_()
    : left_x(0.0)
    , left_y(0.0)
    , left_slope(0.0)
    , right_x(0.0)
    , right_y(0.0)
    , right_slope(0.0)  {
    }
  laneinfo_(const ContainerAllocator& _alloc)
    : left_x(0.0)
    , left_y(0.0)
    , left_slope(0.0)
    , right_x(0.0)
    , right_y(0.0)
    , right_slope(0.0)  {
  (void)_alloc;
    }



   typedef float _left_x_type;
  _left_x_type left_x;

   typedef float _left_y_type;
  _left_y_type left_y;

   typedef float _left_slope_type;
  _left_slope_type left_slope;

   typedef float _right_x_type;
  _right_x_type right_x;

   typedef float _right_y_type;
  _right_y_type right_y;

   typedef float _right_slope_type;
  _right_slope_type right_slope;





  typedef boost::shared_ptr< ::lane_ros::laneinfo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::lane_ros::laneinfo_<ContainerAllocator> const> ConstPtr;

}; // struct laneinfo_

typedef ::lane_ros::laneinfo_<std::allocator<void> > laneinfo;

typedef boost::shared_ptr< ::lane_ros::laneinfo > laneinfoPtr;
typedef boost::shared_ptr< ::lane_ros::laneinfo const> laneinfoConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::lane_ros::laneinfo_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::lane_ros::laneinfo_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::lane_ros::laneinfo_<ContainerAllocator1> & lhs, const ::lane_ros::laneinfo_<ContainerAllocator2> & rhs)
{
  return lhs.left_x == rhs.left_x &&
    lhs.left_y == rhs.left_y &&
    lhs.left_slope == rhs.left_slope &&
    lhs.right_x == rhs.right_x &&
    lhs.right_y == rhs.right_y &&
    lhs.right_slope == rhs.right_slope;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::lane_ros::laneinfo_<ContainerAllocator1> & lhs, const ::lane_ros::laneinfo_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace lane_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::lane_ros::laneinfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::lane_ros::laneinfo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::lane_ros::laneinfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::lane_ros::laneinfo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lane_ros::laneinfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lane_ros::laneinfo_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::lane_ros::laneinfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "44a42243e734addbc7ddd0e00184e0ab";
  }

  static const char* value(const ::lane_ros::laneinfo_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x44a42243e734addbULL;
  static const uint64_t static_value2 = 0xc7ddd0e00184e0abULL;
};

template<class ContainerAllocator>
struct DataType< ::lane_ros::laneinfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "lane_ros/laneinfo";
  }

  static const char* value(const ::lane_ros::laneinfo_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::lane_ros::laneinfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 left_x\n"
"float32 left_y\n"
"float32 left_slope\n"
"float32 right_x\n"
"float32 right_y\n"
"float32 right_slope\n"
;
  }

  static const char* value(const ::lane_ros::laneinfo_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::lane_ros::laneinfo_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.left_x);
      stream.next(m.left_y);
      stream.next(m.left_slope);
      stream.next(m.right_x);
      stream.next(m.right_y);
      stream.next(m.right_slope);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct laneinfo_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::lane_ros::laneinfo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::lane_ros::laneinfo_<ContainerAllocator>& v)
  {
    if (false || !indent.empty())
      s << std::endl;
    s << indent << "left_x: ";
    Printer<float>::stream(s, indent + "  ", v.left_x);
    if (true || !indent.empty())
      s << std::endl;
    s << indent << "left_y: ";
    Printer<float>::stream(s, indent + "  ", v.left_y);
    if (true || !indent.empty())
      s << std::endl;
    s << indent << "left_slope: ";
    Printer<float>::stream(s, indent + "  ", v.left_slope);
    if (true || !indent.empty())
      s << std::endl;
    s << indent << "right_x: ";
    Printer<float>::stream(s, indent + "  ", v.right_x);
    if (true || !indent.empty())
      s << std::endl;
    s << indent << "right_y: ";
    Printer<float>::stream(s, indent + "  ", v.right_y);
    if (true || !indent.empty())
      s << std::endl;
    s << indent << "right_slope: ";
    Printer<float>::stream(s, indent + "  ", v.right_slope);
  }
};

} // namespace message_operations
} // namespace ros

#endif // LANE_ROS_MESSAGE_LANEINFO_H

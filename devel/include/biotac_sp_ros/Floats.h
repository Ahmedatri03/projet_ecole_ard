// Generated by gencpp from file biotac_sp_ros/Floats.msg
// DO NOT EDIT!


#ifndef BIOTAC_SP_ROS_MESSAGE_FLOATS_H
#define BIOTAC_SP_ROS_MESSAGE_FLOATS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace biotac_sp_ros
{
template <class ContainerAllocator>
struct Floats_
{
  typedef Floats_<ContainerAllocator> Type;

  Floats_()
    : data()  {
    }
  Floats_(const ContainerAllocator& _alloc)
    : data(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::biotac_sp_ros::Floats_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::biotac_sp_ros::Floats_<ContainerAllocator> const> ConstPtr;

}; // struct Floats_

typedef ::biotac_sp_ros::Floats_<std::allocator<void> > Floats;

typedef boost::shared_ptr< ::biotac_sp_ros::Floats > FloatsPtr;
typedef boost::shared_ptr< ::biotac_sp_ros::Floats const> FloatsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::biotac_sp_ros::Floats_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::biotac_sp_ros::Floats_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::biotac_sp_ros::Floats_<ContainerAllocator1> & lhs, const ::biotac_sp_ros::Floats_<ContainerAllocator2> & rhs)
{
  return lhs.data == rhs.data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::biotac_sp_ros::Floats_<ContainerAllocator1> & lhs, const ::biotac_sp_ros::Floats_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace biotac_sp_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::biotac_sp_ros::Floats_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::biotac_sp_ros::Floats_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::biotac_sp_ros::Floats_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::biotac_sp_ros::Floats_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::biotac_sp_ros::Floats_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::biotac_sp_ros::Floats_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::biotac_sp_ros::Floats_<ContainerAllocator> >
{
  static const char* value()
  {
    return "420cd38b6b071cd49f2970c3e2cee511";
  }

  static const char* value(const ::biotac_sp_ros::Floats_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x420cd38b6b071cd4ULL;
  static const uint64_t static_value2 = 0x9f2970c3e2cee511ULL;
};

template<class ContainerAllocator>
struct DataType< ::biotac_sp_ros::Floats_<ContainerAllocator> >
{
  static const char* value()
  {
    return "biotac_sp_ros/Floats";
  }

  static const char* value(const ::biotac_sp_ros::Floats_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::biotac_sp_ros::Floats_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32[] data\n"
;
  }

  static const char* value(const ::biotac_sp_ros::Floats_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::biotac_sp_ros::Floats_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Floats_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::biotac_sp_ros::Floats_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::biotac_sp_ros::Floats_<ContainerAllocator>& v)
  {
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // BIOTAC_SP_ROS_MESSAGE_FLOATS_H

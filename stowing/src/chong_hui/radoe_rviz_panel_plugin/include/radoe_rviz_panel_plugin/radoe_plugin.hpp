#ifndef RADOE_PANEL_H
#define RADOE_PANEL_H

#include <rviz/panel.h>
#include "radoe_plugin_panel.hpp"
#include <ros/ros.h>
#include "std_msgs/String.h"
#include <QTableWidget>

class QLineEdit;
namespace radoe_plugin_panel
{

  class radoe_plugin_panel : public rviz::Panel
{
Q_OBJECT
public:
    radoe_plugin_panel( QWidget* parent = 0 );

    virtual void load();
    virtual void save();
    int count;

    RADOE_plugin* widget_;
    std_msgs::String msg;


protected Q_SLOTS:
    void ROS_Publish_Topics();



protected:
    QLineEdit* output_topic_editor_;

    // The current name of the output topic.
    //QString output_topic_;
    ros::Publisher chatter_pub;

    // The ROS node handle.
    ros::NodeHandle nh_;


};
}
#endif


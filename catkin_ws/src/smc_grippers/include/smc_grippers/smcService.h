#ifndef SMC_SERVICE_H_
#define SMC_SERVICE_H_

#include <ros/ros.h>
#include <ros/service.h>
#include "std_msgs/String.h"
#include <smc_grippers/CoE.h>
#include <smc_grippers/EtherCAT.h>
#include <smc_grippers/SMCServoJXCE1.h>

// includes vor The services
#include <smc_grippers/gripper_service.h>
#include <smc_grippers/press_service.h>
#include <smc_grippers/Bgripper_service.h>

class smcService
{
protected:
  ros::NodeHandle nh;
  /*
    ros::Service gripper;
    ros::Service press;
    ros::Service Bgripper;*/
private:
  //SMCServoJXCE1 *gripper;
  //SMCServoJXCE1 *press;
  //SMCServoJXCE1 *Bgripper;

public:
  smcService();
  virtual ~smcService();
  bool gripperCallback(smc_grippers::gripper_service::Request &req, smc_grippers::gripper_service::Response &res);
  bool pressCallback(smc_grippers::press_service::Request &req, smc_grippers::press_service::Response &res);
  bool BgripperCallback(smc_grippers::Bgripper_service ::Request &req, smc_grippers::Bgripper_service ::Response &res);
};

#endif /* SMC_SERVICE */

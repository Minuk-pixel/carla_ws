#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/minuk/carla_ws/src/Mobile_System_Control/carla_ros_bridge/carla_manual_control"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/minuk/carla_ws/install/lib/python3/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/minuk/carla_ws/install/lib/python3/dist-packages:/home/minuk/carla_ws/build/lib/python3/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/minuk/carla_ws/build" \
    "/usr/bin/python3" \
    "/home/minuk/carla_ws/src/Mobile_System_Control/carla_ros_bridge/carla_manual_control/setup.py" \
     \
    build --build-base "/home/minuk/carla_ws/build/Mobile_System_Control/carla_ros_bridge/carla_manual_control" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/minuk/carla_ws/install" --install-scripts="/home/minuk/carla_ws/install/bin"

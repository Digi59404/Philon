# project name
project (philon)
# the oldest stable cmake version we support
cmake_minimum_required (VERSION 2.6)
# tell cmake where its modules can be found in our project directory
list (APPEND CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake)
# where we install data directory (if we have any)
set (DATADIR "${CMAKE_INSTALL_PREFIX}/share")
# what to call that directory where we install data too
set (PKGDATADIR "${DATADIR}/hello-again")
set (EXEC_NAME "philon")
set (RELEASE_NAME "Build it up.")
set (VERSION "0.1")
set (VERSION_INFO "")
# we're about to use pkgconfig to make sure dependencies are installed so let's find pkgconfig first
find_package(PkgConfig)
# now let's actually check for the required dependencies
pkg_check_modules(DEPS REQUIRED gtk+-3.0 gio-2.0 granite webkitgtk-3.0 libsoup-2.4)
add_definitions(${DEPS_CFLAGS})
link_libraries(${DEPS_LIBRARIES})
link_directories(${DEPS_LIBRARY_DIRS})
# make sure we have vala
find_package(Vala REQUIRED)
# make sure we use vala
include(ValaVersion)
# make sure it's the desired version of vala
ensure_vala_version("0.16" MINIMUM)
# files we want to compile
include(ValaPrecompile)
vala_precompile(VALA_C ${EXEC_NAME}
    src/main.vala
    src/philonWindow.vala
    src/docManager.vala
    src/widgets/webkitView.vala
    src/widgets/folderList.vala
    src/widgets/activeNotebook.vala
    src/widgets/activeList/activeTab.vala
    src/widgets/activeList/activeList.vala
    src/widgets/activeList/activeItem.vala
    
    src/widgets/builderList/builderTab.vala
    src/widgets/builderList/builderList.vala
    src/widgets/builderList/builderItem.vala
    
    src/widgets/deploymentList/deploymentTab.vala
    src/widgets/deploymentList/deploymentList.vala
    src/widgets/deploymentList/deploymentItem.vala
    src/widgets/folderItem.vala
    src/widgets/folderFolder.vala
# tell what libraries to use when compiling
PACKAGES
    gtk+-3.0
    gio-2.0
    granite
    webkitgtk-3.0
    libsoup-2.4
CUSTOM_VAPIS
    vapi/javascriptcore.vapi
)
# tell cmake what to call the executable we just made
add_executable(${EXEC_NAME} ${VALA_C})
# install the binaries we just made
install (TARGETS ${EXEC_NAME} RUNTIME DESTINATION bin)
# install our .desktop file so the Applications menu will see it
install (FILES ${CMAKE_CURRENT_SOURCE_DIR}/data/philon.desktop DESTINATION ${DATADIR}/applications/)

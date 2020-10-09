add_executable(pzoom
	main.cpp
	PZoomWindow.cpp
	PZoomWindow.h
	PZoomWindow.ui
	)

target_link_libraries(pzoom PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

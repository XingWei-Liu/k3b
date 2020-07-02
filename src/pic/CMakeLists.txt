#install( FILES
#    splash.png
#    project_left.png
#    project_right.png
#    probing.png
#    media_audio.png
#    media_data.png
#    media_video.png
#    media_empty.png
#    media_left.png
#    media_mixed.png
#    media_none.png
#    progress_working.png
#    progress_fail.png
#    progress_success.png
#    progress_right.png
#    dialog_left.png
#    dialog_right.png
#    welcome_bg.png
#    k3b.theme
#    DESTINATION ${K3B_DATA_INSTALL_DIR}/pics/pic )

#set(IMAGE_RCCS images.qrc)
#qt5_add_resources(IMAGES_RCC_SRCS ${IMAGE_RCCS})

add_subdirectory(icon)

set(PNG_DIRS icon)
foreach(PNG_DIR ${PNG_DIRS})
    file(GLOB IMAGE_RCCS ${PNG_DIR}/*.png)
endforeach(PNG_DIR)


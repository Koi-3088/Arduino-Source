/*  Video Widget
 *
 *  From: https://github.com/PokemonAutomation/Arduino-Source
 *
 */

#ifndef PokemonAutomation_VideoPipeline_VideoWidget_H
#define PokemonAutomation_VideoPipeline_VideoWidget_H

#include <QWidget>
#include "CommonFramework/VideoPipeline/CameraBase.h"

namespace PokemonAutomation{


//  Base class for the widget that displays the camera video feed.
class VideoWidget : public QWidget{
public:
    using QWidget::QWidget;
    virtual ~VideoWidget() = default;

    //  Get the camera associated with this VideoWidget.
    virtual Camera& camera() = 0;
};



}
#endif

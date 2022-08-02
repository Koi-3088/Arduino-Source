/*  Redispatch
 *
 *  From: https://github.com/PokemonAutomation/Arduino-Source
 *
 */

#ifndef PokemonAutomation_Qt_Redispatch_H
#define PokemonAutomation_Qt_Redispatch_H

#include <functional>

namespace PokemonAutomation{


//  Disable these since they are dangerous.
//void dispatch_to_main_thread(std::function<void()> lambda);
//void queue_on_main_thread(std::function<void()> lambda);

void run_on_main_thread_and_wait(std::function<void()> lambda);



}
#endif

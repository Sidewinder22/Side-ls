#include "HandlerFactory.hpp"
#include "LongListingHandler.hpp"
#include "CleanHandler.hpp"

HandlerFactory::HandlerFactory()
{  }

std::unique_ptr<Handler> HandlerFactory::createLongListingHandler(
    std::vector<std::string> output)
{
    return std::make_unique<LongListingHandler>(std::move(output));
}

std::unique_ptr<Handler> HandlerFactory::createCleanHandler(
    std::vector<std::string> output)
{
    return std::make_unique<CleanHandler>(std::move(output));

}

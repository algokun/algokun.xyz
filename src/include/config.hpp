#pragma once

#include<string>

struct Config
{
  std::string shortcut_icon;
  std::string icon;
  std::string name;
  std::string description;
  std::string twitter_creator;
  std::string twitter_card_image;
  std::string url;
  std::string header;
  std::string footer;
};

Config * configParser();

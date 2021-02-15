#include "../include/config.hpp"
#include<string>
#include "../include/head.hpp"

using namespace std;

string html_head(Config* conf, string text) {
  return "<!DOCTYPE html><html lang='en'><head><link rel='shortcut icon' "
         "href='" +
         conf->shortcut_icon + "' type='image/x-icon'><link rel='icon' href='" +
         conf->icon +
         "' type='image/x-icon'><meta charset='utf-8'><meta name='description' "
         "content='" +
         conf->description +
         "'><meta name='viewport' content='width=device-width, initial-scale=1.0'>"
         "<meta name='robots' content='index,follow' />"
         "<meta name='googlebot' content='index,follow' /><meta name='twitter:card' content='summary_large_image'><meta "
         "name='twitter:site' content='" +
         conf->name + "'><meta name='twitter:title' content='" + conf->name +
         "'><meta name='twitter:description' content='" + conf->description +
         "'><meta name='twitter:creator' content='@" + conf->twitter_creator +
         "'><meta name='twitter:image' content='" + conf->twitter_card_image +
         "'><meta property='og:title' content='" + conf->name +
         "'><meta property='og:url' content='" + conf->url +
         "'><meta property='og:description' content='" + conf->description +
         "'><meta property='og:type' content='website' />"
         "<meta property='og:image' content='"+ conf->twitter_card_image+
         "'><meta property='og:image:alt' content='"+ conf->name+ "'>"
         "<meta property='og:site_name' content='" + conf->name +
         "'><title> " + conf->name + " - " + text +
         "</title><link rel='stylesheet' type='text/css' "
         "href='../links/main.css'></head><body class='" +
         text + "'>";
}

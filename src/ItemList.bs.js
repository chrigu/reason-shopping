// Generated by BUCKLESCRIPT VERSION 5.0.4, PLEASE EDIT WITH CARE
'use strict';

var React = require("react");
var Belt_Array = require("bs-platform/lib/js/belt_Array.js");

function str(prim) {
  return prim;
}

function ItemList(Props) {
  var itemList = Props.itemList;
  var items = Belt_Array.mapWithIndex(itemList, (function (index, item) {
          return React.createElement("li", {
                      key: String(index)
                    }, item);
        }));
  console.log(items);
  return React.createElement("div", {
              className: "item-list"
            }, React.createElement("ul", undefined, items));
}

var make = ItemList;

exports.str = str;
exports.make = make;
/* react Not a pure module */

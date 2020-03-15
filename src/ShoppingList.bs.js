// Generated by BUCKLESCRIPT VERSION 5.0.4, PLEASE EDIT WITH CARE
'use strict';

var Curry = require("bs-platform/lib/js/curry.js");
var React = require("react");
var Belt_Array = require("bs-platform/lib/js/belt_Array.js");
var ItemList$ReactHooksTemplate = require("./ItemList.bs.js");
var ItemInput$ReactHooksTemplate = require("./ItemInput.bs.js");

function str(prim) {
  return prim;
}

function ShoppingList(Props) {
  var initialList = Props.initialList;
  var match = React.useReducer((function (state, action) {
          if (typeof action === "number") {
            if (action !== 0) {
              return state;
            } else {
              return /* record */[/* items : array */[]];
            }
          } else {
            return /* record */[/* items */Belt_Array.concat(state[/* items */0], /* array */[action[0]])];
          }
        }), /* record */[/* items */initialList]);
  var dispatch = match[1];
  var addItem = function (item) {
    console.log(item);
    return Curry._1(dispatch, /* AddItem */[item]);
  };
  return React.createElement("div", {
              className: "shopping-list"
            }, React.createElement(ItemInput$ReactHooksTemplate.make, {
                  submitItem: addItem
                }), React.createElement("button", {
                  className: "shopping-list__button",
                  onClick: (function (param) {
                      return Curry._1(dispatch, /* ResetList */0);
                    })
                }, "Reset list"), React.createElement(ItemList$ReactHooksTemplate.make, {
                  itemList: match[0][/* items */0]
                }));
}

var make = ShoppingList;

exports.str = str;
exports.make = make;
/* react Not a pure module */
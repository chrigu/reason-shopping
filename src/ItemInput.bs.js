// Generated by BUCKLESCRIPT VERSION 5.0.4, PLEASE EDIT WITH CARE
'use strict';

var Curry = require("bs-platform/lib/js/curry.js");
var React = require("react");

function str(prim) {
  return prim;
}

var initialInput = /* record */[/* input */""];

function ItemInput(Props) {
  var submitItem = Props.submitItem;
  var match = React.useReducer((function (state, action) {
          if (typeof action === "number") {
            if (action !== 0) {
              return state;
            } else {
              return initialInput;
            }
          } else {
            return /* record */[/* input */action[0]];
          }
        }), initialInput);
  var dispatch = match[1];
  var state = match[0];
  var onChange = function (_evt) {
    console.log(_evt.target.value);
    return Curry._1(dispatch, /* UpdateInput */[_evt.target.value]);
  };
  return React.createElement("div", {
              className: "item-input"
            }, React.createElement("input", {
                  className: "item-input__input",
                  placeholder: "Enter an item",
                  value: state[/* input */0],
                  onChange: onChange
                }), React.createElement("button", {
                  className: "item-input__reset",
                  onClick: (function (param) {
                      return Curry._1(dispatch, /* ResetInput */0);
                    })
                }, "Reset"), React.createElement("button", {
                  className: "item-input__add",
                  onClick: (function (param) {
                      console.log("submit");
                      Curry._1(submitItem, state[/* input */0]);
                      return Curry._1(dispatch, /* ResetInput */0);
                    })
                }, "Add"));
}

var make = ItemInput;

exports.str = str;
exports.initialInput = initialInput;
exports.make = make;
/* react Not a pure module */

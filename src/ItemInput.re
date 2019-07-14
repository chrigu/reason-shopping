 let str = React.string;

type state = {
  input: string
}

type action =
  | UpdateInput(string)
  | ResetInput
  | SubmitItem


/* You're familiar handleClick from ReactJS. This mandatorily takes the payload,
   then the `self` record, which contains state (none here), `handle`, `reduce`
   and other utilities */
let initialInput = {input: ""};

/* `make` is the function that mandatorily takes `children` (if you want to use
   `JSX). `message` is a named argument, which simulates ReactJS props. Usage:

   `<Component1 message="hello" />`

   Which desugars to

   `React.createElement(
     Component1.make,
     Component1.makeProps(~message="hello", ())
   )` */
[@react.component]
let make = (~submitItem) => {
  let (state, dispatch) =
    React.useReducer(
      (state, action) =>
        switch (action) {
        | UpdateInput(newInput) => {input: newInput}
        | ResetInput => initialInput
        | SubmitItem => state
        },
      initialInput,
    );

  let onChange = _evt => {
      Js.log(ReactEvent.Form.target(_evt)##value);
      dispatch(UpdateInput(ReactEvent.Form.target(_evt)##value));
    };

  let addItem = () => {
      Js.log("submit");
      submitItem(state.input)
      dispatch(ResetInput);
  };

  <div className="item-input">
    <input className="item-input__input" 
          placeholder="Enter an item"
          value=state.input
          onChange={onChange}/>
    <button className="item-input__reset" 
            onClick={_ => dispatch(ResetInput)}>
            (str("Reset"))
    </button>
    <button className="item-input__add" 
            onClick={_ => addItem()}>
            (str("Add"))
    </button>
  </div>
};

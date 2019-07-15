 let str = React.string;

type t = {
  items: array(string)
};

type action = 
  | ResetList
  | AddItem(string)
  | RemoveItem;


[@react.component]
let make = (~initialList) => {
  let (state, dispatch) =
    React.useReducer(
      (state, action) =>
        switch (action) {
        | AddItem(item) => {items: Belt.Array.concat(state.items, [|item|])}
        | RemoveItem => state // todo
        | ResetList => {items: [||]}
        },
      {
        items: initialList
      },
    );


  let addItem = (item) => {
    Js.log(item);
    dispatch(AddItem(item));
  };

  <div className="shopping-list">
    <ItemInput submitItem={addItem} />
    <button className="shopping-list__button" 
            onClick={_ => dispatch(ResetList)}>
            (str("Reset list"))
    </button>
    <ItemList itemList={state.items} />
  </div>
};




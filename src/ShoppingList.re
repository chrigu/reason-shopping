type t = {
  items: array(string)
};

type action = 
  | AddItem(string)
  | RemoveItem;


[@react.component]
let make = (~initialList) => {
  let (state, dispatch) =
    React.useReducer(
      (state, action) =>
        switch (action) {
        | AddItem(item) => {items: Belt.Array.concat(state.items, [|item|])}
        | RemoveItem => state
        },
      {
        items: initialList
      },
    );


  let addItem = (item) => {
    Js.log(item);
    dispatch(AddItem(item));
  };

  <div>
    <ItemInput submitItem={addItem} />
    <ItemList itemList={state.items} />
  </div>
};




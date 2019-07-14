 let str = React.string;

[@react.component]
let make = (~itemList) => {
//   let (state, dispatch) = React.useReducer((state, action) =>
//   switch (action) {
//   | Click => {...state, count: state.count + 1}
//   | Toggle => {...state, show: ! state.show}
//   }, {count: 0, show: true});

//   let addItem = (newItem) => {
//     shoppingList = [newItem, ...shoppingList, ]
//   }

//   let message =
//     "You've clicked this " ++ string_of_int(state.count) ++ " times(s)";
//   <div>
//     <button onClick={_event => dispatch(Click)}>
//       {ReasonReact.string(message)}
//     </button>
//     <button onClick={_event => dispatch(Toggle)}>
//       {ReasonReact.string("Toggle greeting")}
//     </button>
//     {state.show ? ReasonReact.string(greeting) : ReasonReact.null}
//   </div>;

    // let items = itemList.map(item => {

    // });
    let items = Belt_Array.map(itemList, item => {
        <div>(str(item))</div>
    });

    Js.log(items);

    <div className="item-list">

    </div>

};




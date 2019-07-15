 let str = React.string;

[@react.component]
let make = (~itemList) => {

    let items = Belt_Array.mapWithIndex(itemList, (index, item) => {
        <li key={string_of_int(index)}>(str(item))</li>
    });

    Js.log(items);

    <div className="item-list">
        <ul>
            (ReasonReact.array(items))
        </ul>
    </div>

};




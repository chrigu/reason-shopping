module ShoppingList = {

    type t = {
        items: array(string)
    };

    let initialList = [||];

    [@react.component]
    let make = () =>
    <div>
    <ItemInput />

    </div>;

}


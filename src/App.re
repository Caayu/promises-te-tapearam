module Await = {
  let let_ (promise, map) = Js.Promise.then_(map, promise);
}

let usePromise = () => {
  let (message, setMessage) = React.useState(() => "Aguardando...");

  React.useEffect0(() => {
    let data = Js.Promise.resolve("Hello");

    let _ = {
      let%Await res = data;

      setMessage(_=> res);
      Js.Promise.resolve();
    };

    None
  });

  message;
};

[@react.component]
let make = () => {
  let message = usePromise();

  <p>message->React.string</p>;
}

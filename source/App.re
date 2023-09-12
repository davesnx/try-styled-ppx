[@react.component]
let make = () => {
  let route = Some("Home");

  switch (route) {
  | Some("Home") => <Page_Home />
  | None | _ => <Input />
  };
};

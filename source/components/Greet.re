module Container = [%styled.div
  {|
  position: relative;
  text-align: center;
  max-width: 800px;
  margin: 0 auto;
  padding: 6rem;
|}
];

module Text = [%styled.p
  {|
  font-size: 1.875rem;
  text-decoration: none;
  color: #4299E1;
|}
];

module Link = [%styled.a (~size=`Small) =>
  [|
    [%css "color: #1A202C;"],
    [%css "margin-bottom: 1rem;"],
    switch (size) {
      | `Small => [%css "font-size: 1.8rem;"]
      | `Medium => [%css "font-size: 2.2rem;"]
      | `Large => [%css "font-size: 2.4rem;"]
    }
  |]
];

[@react.component]
let make = (~name) =>
  <Container>
    <Text>
      {React.string({j|👋 Welcome $name! You can edit me in |j})}
      <code> {React.string("src/components/Greet.re")} </code>
    </Text>
      <Link href="https://sancho.dev">
        {React.string("Learn Reason React")}
      </Link>
      <br />
      <Link size=`Medium href="https://sancho.dev">
        {React.string("Learn Reason React")}
      </Link>
  </Container>;

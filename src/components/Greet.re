module Container = [%styled {|
  text-align: center;
  margin-top: 3rem;
|}];

module Text = [%styled
  {|
  font-size: 1.875rem;
  text-decoration: none;
  color: #4299e1;
|}
];

module Link = [%styled.a
  {| font-size: 1.875rem; color: #1a202c; margin-bottom: 1rem; |}
];

[@react.component]
let make = (~name) => {
  <Container>
    <Text>
      {React.string({j|👋 Welcome $name! You can edit me in |j})}
      <code> {React.string("src/components/Greet.re")} </code>
    </Text>
    <Link href="https://sancho.dev">
      {React.string("Learn Reason React")}
    </Link>
  </Container>;
};

open ReactNative;
open ReactMultiversal;

let styles =
  StyleSheet.create(
    Style.{
      "baseline":
        style(
          ~fontSize=28.,
          ~fontWeight=`_300,
          ~color=Consts.Colors.lightest,
          (),
        ),
    },
  );

[@react.component]
let make = (~currentLocation) =>
  <View>
    <Head />
    <HeaderLarge currentLocation />
    <BsReactHelmet>
      <title>
        {(Consts.title ++ " " ++ ", ReasonML bindings for React Native")
         ->React.string}
      </title>
    </BsReactHelmet>
    <SpacedView
      vertical=SpacedView.XL
      style=Style.(
        style(
          ~flex=1.,
          ~justifyContent=`center,
          ~alignItems=`center,
          ~backgroundColor=Consts.Colors.darkless,
          (),
        )
      )>
      <View>
        <Text
          style=Style.(
            style(
              ~fontSize=48.,
              ~fontWeight=`_700,
              ~color=Consts.Colors.light,
              (),
            )
          )>
          <Text style=Style.(style(~opacity=0.25, ()))>
            "Reason "->React.string
          </Text>
          "React Native"->React.string
        </Text>
      </View>
      <Spacer size=Spacer.XXL />
      <View style=Style.(style(~width=100.->pct, ()))>
        <View
          style=Style.(
            array([|
              StyleSheet.absoluteFill,
              style(~flex=1., ~flexDirection=`row, ()),
            |])
          )>
          <SVGReact width="85%" height="85%" fill="rgba(200,200,200, 0.2)" />
          <Spacer size=L />
          <SVGReScriptWhite
            width="85%"
            height="85%"
            fill="rgba(200,200,200, 0.2)"
          />
        </View>
        <SpacedView
          vertical=SpacedView.XXL
          style=Style.(
            style(
              ~flex=1.,
              ~flexDirection=`row,
              ~justifyContent=`spaceEvenly,
              (),
            )
          )>
          <Text style=styles##baseline>
            "All your React Native knowledge, codified"->React.string
          </Text>
          <Spacer size=L />
          <Text style=styles##baseline>
            "All the safeness of ReScript at your disposal "->React.string
          </Text>
        </SpacedView>
      </View>
      <Spacer size=Spacer.XXL />
      <ViewLink
        href={Consts.baseUrl ++ "/en/docs/"}
        style=Style.(
          style(
            ~borderRadius=6.,
            ~backgroundColor=Predefined.Colors.Ios.light.blue,
            (),
          )
        )>
        <SpacedView horizontal=SpacedView.L>
          <Text
            style=Style.(
              style(
                ~fontSize=24.,
                ~fontWeight=`_300,
                ~color=Consts.Colors.lightest,
                (),
              )
            )>
            "Get Started"->React.string
          </Text>
        </SpacedView>
      </ViewLink>
    </SpacedView>
    <Spacer />
    <TextLink
      href="https://github.com/reason-react-native/reason-react-native/issues/341"
      style=Style.(
        style(
          ~fontWeight=`_300,
          ~color=Consts.Colors.greyLight,
          ~alignSelf=`center,
          (),
        )
      )>
      "This website is totally WIP"->React.string
    </TextLink>
  </View>;

[MeasureState]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=State
UpdateDivider=2

[MeasureStateButton]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=State
Substitute="0":"Play","1":"Pause","2":"Play"
UpdateDivider=2

[MeasureTrack]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Title
Substitute="":"#NoTrackNameText#"
UpdateDivider=100

[MeasureArtist]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Artist
Substitute="":"#NoArtistNameText#"
UpdateDivider=100

[MeasureCover]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Cover
DefaultPath=#@#images\nocover.png
CoverPath=#@#images\coverWeb.png
Substitute="":"#@#images\nocover.png"
UpdateDivider=100

[MeasurePosition]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Position
Update=500

[MeasureDuration]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Duration
Update=500

[MeasureProgress]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Progress
Update=500

[MeasureAutoHideWebNowPlaying]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Status
IfBelowValue=1
IfBelowAction=[!HideFadeGroup "Spectrum"][!HideFadeGroup "SongInfo"][!Log "AutoHide: WebNowPlaying was closed, hiding skin"]
IfAboveValue=0
IfAboveAction=[!ShowFadeGroup "Spectrum"][!ShowFadeGroup "SongInfo"][!Log "AutoHide: WebNowPlaying was opened, showing skin"]
Disabled=(#EnableAutoHide# > 0 ? 0 : 1)
UpdateDivider=100
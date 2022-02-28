object Form1: TForm1
  Left = 278
  Top = 125
  Width = 928
  Height = 480
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = Form1Create
  PixelsPerInch = 96
  TextHeight = 13
  object Image1: TImage
    Left = 0
    Top = 0
    Width = 537
    Height = 441
    OnMouseMove = Image1MouseMove
  end
  object LabeledEdit1: TLabeledEdit
    Left = 632
    Top = 296
    Width = 121
    Height = 21
    EditLabel.Width = 62
    EditLabel.Height = 13
    EditLabel.Caption = 'LabeledEdit1'
    LabelPosition = lpAbove
    LabelSpacing = 3
    TabOrder = 0
  end
  object Button1: TButton
    Left = 600
    Top = 24
    Width = 75
    Height = 25
    Caption = #1055#1086#1074' '#1087#1088#1086#1090' '#1095#1072#1089
    TabOrder = 1
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 784
    Top = 24
    Width = 75
    Height = 25
    Caption = #1055#1086#1074#1086#1088' '#1087#1086' '#1095#1072#1089
    TabOrder = 2
  end
end

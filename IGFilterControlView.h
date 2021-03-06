
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGExpandableButtonDelegate.h>
#import <Instagram/IGFilterTintControlDelegate.h>

@protocol IGFilterControlViewDelegate;
@class IGFilterTintControl, IGSloppyTouchSlider, IGTiltShiftModeControl, IGTickSlider, UIButton, UILabel, UIView, IGExpandableButton, NSString;

@interface IGFilterControlView : UIView <IGExpandableButtonDelegate, IGFilterTintControlDelegate> {

	char _bordersValue;
	char _priorBordersValue;
	char _showButtons;
	id<IGFilterControlViewDelegate> _delegate;
	float _priorValue;
	unsigned _controlType;
	float _priorOrientationAngle;
	float _priorCropZoom;
	unsigned _perspectiveRotateMode;
	IGFilterTintControl* _tintControl;
	unsigned _tintColorType;
	unsigned _tintShadowsColor;
	unsigned _tintHighlightsColor;
	float _tintShadowsIntensity;
	float _tintHighlightsIntensity;
	IGSloppyTouchSlider* _controlSlider;
	IGTiltShiftModeControl* _tiltShiftModeControl;
	IGTickSlider* _tickSlider;
	UIButton* _bordersButton;
	UILabel* _valueLabel;
	UIButton* _doneButton;
	UIButton* _cancelButton;
	UIView* _controlPanel;
	UIView* _buttonPanel;
	IGExpandableButton* _perspectiveRollButton;
	IGExpandableButton* _perspectivePitchButton;
	IGExpandableButton* _straightenButton;
	CGPoint _priorCropCenter;

}

@property (nonatomic,retain) IGSloppyTouchSlider * controlSlider;                          //@synthesize controlSlider=_controlSlider - In the implementation block
@property (nonatomic,retain) IGTiltShiftModeControl * tiltShiftModeControl;                //@synthesize tiltShiftModeControl=_tiltShiftModeControl - In the implementation block
@property (nonatomic,retain) IGTickSlider * tickSlider;                                    //@synthesize tickSlider=_tickSlider - In the implementation block
@property (nonatomic,retain) UIButton * bordersButton;                                     //@synthesize bordersButton=_bordersButton - In the implementation block
@property (nonatomic,retain) UILabel * valueLabel;                                         //@synthesize valueLabel=_valueLabel - In the implementation block
@property (nonatomic,retain) UIButton * doneButton;                                        //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                                      //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIView * controlPanel;                                        //@synthesize controlPanel=_controlPanel - In the implementation block
@property (nonatomic,retain) UIView * buttonPanel;                                         //@synthesize buttonPanel=_buttonPanel - In the implementation block
@property (assign,nonatomic) char showButtons;                                             //@synthesize showButtons=_showButtons - In the implementation block
@property (nonatomic,retain) IGExpandableButton * perspectiveRollButton;                   //@synthesize perspectiveRollButton=_perspectiveRollButton - In the implementation block
@property (nonatomic,retain) IGExpandableButton * perspectivePitchButton;                  //@synthesize perspectivePitchButton=_perspectivePitchButton - In the implementation block
@property (nonatomic,retain) IGExpandableButton * straightenButton;                        //@synthesize straightenButton=_straightenButton - In the implementation block
@property (assign,nonatomic,__weak) id<IGFilterControlViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float value; 
@property (assign,nonatomic) float priorValue;                                             //@synthesize priorValue=_priorValue - In the implementation block
@property (nonatomic,readonly) unsigned controlType;                                       //@synthesize controlType=_controlType - In the implementation block
@property (assign,nonatomic) char bordersValue;                                            //@synthesize bordersValue=_bordersValue - In the implementation block
@property (assign,nonatomic) char priorBordersValue;                                       //@synthesize priorBordersValue=_priorBordersValue - In the implementation block
@property (assign,nonatomic) float priorOrientationAngle;                                  //@synthesize priorOrientationAngle=_priorOrientationAngle - In the implementation block
@property (assign,nonatomic) CGPoint priorCropCenter;                                      //@synthesize priorCropCenter=_priorCropCenter - In the implementation block
@property (assign,nonatomic) float priorCropZoom;                                          //@synthesize priorCropZoom=_priorCropZoom - In the implementation block
@property (assign,nonatomic) unsigned perspectiveRotateMode;                               //@synthesize perspectiveRotateMode=_perspectiveRotateMode - In the implementation block
@property (assign,nonatomic) float perspectiveRollAngle; 
@property (assign,nonatomic) float perspectivePitchAngle; 
@property (assign,nonatomic) float straightenAngle; 
@property (nonatomic,retain) IGFilterTintControl * tintControl;                            //@synthesize tintControl=_tintControl - In the implementation block
@property (assign,nonatomic) unsigned tintColorType;                                       //@synthesize tintColorType=_tintColorType - In the implementation block
@property (assign,nonatomic) unsigned tintShadowsColor;                                    //@synthesize tintShadowsColor=_tintShadowsColor - In the implementation block
@property (assign,nonatomic) unsigned tintHighlightsColor;                                 //@synthesize tintHighlightsColor=_tintHighlightsColor - In the implementation block
@property (assign,nonatomic) float tintShadowsIntensity;                                   //@synthesize tintShadowsIntensity=_tintShadowsIntensity - In the implementation block
@property (assign,nonatomic) float tintHighlightsIntensity;                                //@synthesize tintHighlightsIntensity=_tintHighlightsIntensity - In the implementation block
@property (assign,nonatomic) char positionOffscreen; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)onTiltShiftChange:(id)arg1 ;
-(IGExpandableButton *)perspectiveRollButton;
-(IGExpandableButton *)straightenButton;
-(IGExpandableButton *)perspectivePitchButton;
-(unsigned)perspectiveRotateMode;
-(id)_perspectiveButtonForRotateMode:(unsigned)arg1 ;
-(void)onTouchDown;
-(void)onTouchUp;
-(void)onTickSliderChange:(id)arg1 ;
-(void)onSliderChange:(id)arg1 ;
-(void)updateBordersButton;
-(void)onBorders;
-(void)onDone;
-(void)onCancel;
-(CGRect)labelRect;
-(float)buttonTopPadding;
-(void)onPerspectiveRollButtonClick;
-(void)onPerspectivePitchButtonClick;
-(void)onStraightenButtonClick;
-(void)setTintShadowsColor:(unsigned)arg1 ;
-(void)setTintHighlightsColor:(unsigned)arg1 ;
-(void)setTintShadowsIntensity:(float)arg1 ;
-(void)setTintHighlightsIntensity:(float)arg1 ;
-(void)setValuesForTintShadowsColor:(unsigned)arg1 tintHighlightsColor:(unsigned)arg2 tintShadowsIntensity:(float)arg3 tintHighlightsIntensity:(float)arg4 ;
-(void)_updateLayoutStateForPerspectiveButton:(id)arg1 ;
-(void)setPerspectiveRotateMode:(unsigned)arg1 ;
-(IGTickSlider *)tickSlider;
-(void)slidableButton:(id)arg1 valueDidUpdated:(float)arg2 ;
-(void)tintControl:(id)arg1 tintColorDidChange:(unsigned)arg2 tintType:(unsigned)arg3 ;
-(void)tintControl:(id)arg1 tintIntensityDidChange:(float)arg2 tintType:(unsigned)arg3 ;
-(char)positionOffscreen;
-(void)setBordersValue:(char)arg1 ;
-(void)onToggleGrid:(id)arg1 ;
-(float)perspectiveRollAngle;
-(void)setPerspectiveRollAngle:(float)arg1 ;
-(float)perspectivePitchAngle;
-(void)setPerspectivePitchAngle:(float)arg1 ;
-(unsigned)controlType;
-(char)bordersValue;
-(char)priorBordersValue;
-(void)setPriorBordersValue:(char)arg1 ;
-(float)priorOrientationAngle;
-(void)setPriorOrientationAngle:(float)arg1 ;
-(CGPoint)priorCropCenter;
-(void)setPriorCropCenter:(CGPoint)arg1 ;
-(float)priorCropZoom;
-(void)setPriorCropZoom:(float)arg1 ;
-(IGFilterTintControl *)tintControl;
-(void)setTintControl:(IGFilterTintControl *)arg1 ;
-(unsigned)tintColorType;
-(void)setTintColorType:(unsigned)arg1 ;
-(unsigned)tintShadowsColor;
-(unsigned)tintHighlightsColor;
-(float)tintShadowsIntensity;
-(float)tintHighlightsIntensity;
-(IGSloppyTouchSlider *)controlSlider;
-(void)setControlSlider:(IGSloppyTouchSlider *)arg1 ;
-(IGTiltShiftModeControl *)tiltShiftModeControl;
-(void)setTiltShiftModeControl:(IGTiltShiftModeControl *)arg1 ;
-(void)setTickSlider:(IGTickSlider *)arg1 ;
-(UIButton *)bordersButton;
-(void)setBordersButton:(UIButton *)arg1 ;
-(UIView *)controlPanel;
-(void)setControlPanel:(UIView *)arg1 ;
-(UIView *)buttonPanel;
-(void)setButtonPanel:(UIView *)arg1 ;
-(char)showButtons;
-(void)setShowButtons:(char)arg1 ;
-(void)setPerspectiveRollButton:(IGExpandableButton *)arg1 ;
-(void)setPerspectivePitchButton:(IGExpandableButton *)arg1 ;
-(void)setStraightenButton:(IGExpandableButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 controlType:(unsigned)arg2 showButtons:(char)arg3 ;
-(void)setPriorValue:(float)arg1 ;
-(void)setPositionOffscreen:(char)arg1 ;
-(float)priorValue;
-(float)straightenAngle;
-(void)setStraightenAngle:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setUserInteractionEnabled:(char)arg1 ;
-(void)setDelegate:(id<IGFilterControlViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGFilterControlViewDelegate>)delegate;
-(float)value;
-(void)setValue:(float)arg1 ;
-(UIButton *)cancelButton;
-(void)setCancelButton:(UIButton *)arg1 ;
-(void)setValue:(float)arg1 animated:(char)arg2 ;
-(void)setDoneButton:(UIButton *)arg1 ;
-(UIButton *)doneButton;
-(void)setValueLabel:(UILabel *)arg1 ;
-(void)updateValueLabel;
-(UILabel *)valueLabel;
@end


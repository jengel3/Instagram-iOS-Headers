
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/POPAnimationDelegate.h>

@protocol IGAlbumBrushWidthPickerDelegate;
@class UIButton, IGSloppyTouchSlider, CAShapeLayer, UIColor, NSString;

@interface IGAlbumBrushWidthPickerView : UIView <POPAnimationDelegate> {

	IGRange _brushWidthRange;
	UIButton* _brushesButton;
	IGSloppyTouchSlider* _widthSlider;
	CAShapeLayer* _brushWidthPreview;
	id<IGAlbumBrushWidthPickerDelegate> _delegate;
	float _selectedBrushWidth;
	UIColor* _brushColor;

}

@property (assign,nonatomic,__weak) id<IGAlbumBrushWidthPickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float selectedBrushWidth;                                         //@synthesize selectedBrushWidth=_selectedBrushWidth - In the implementation block
@property (nonatomic,retain) UIColor * brushColor;                                             //@synthesize brushColor=_brushColor - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)brushesButtonTapped;
-(void)sliderWillChange;
-(void)sliderDidChange;
-(void)sliderDidFinish;
-(void)hideWidthSlider;
-(void)setBrushButtonSelected:(char)arg1 ;
-(void)showWidthSlider;
-(void)updatePreviewFrameWithBrushWidth:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 brushWidthRange:(IGRange)arg2 ;
-(void)setSelectedBrushWidth:(float)arg1 ;
-(void)setBrushColor:(UIColor *)arg1 ;
-(void)hideBrushOptions;
-(float)selectedBrushWidth;
-(UIColor *)brushColor;
-(void)setDelegate:(id<IGAlbumBrushWidthPickerDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id<IGAlbumBrushWidthPickerDelegate>)delegate;
@end


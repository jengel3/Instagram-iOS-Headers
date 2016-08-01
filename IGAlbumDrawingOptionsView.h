
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGAlbumColorPaletteDelegate.h>
#import <Instagram/IGAlbumBrushWidthPickerDelegate.h>
#import <Instagram/IGAlbumHuePickerDelegate.h>

@protocol IGAlbumDrawingOptionsViewDelegate;
@class IGAlbumBrushWidthPickerView, IGAlbumColorPaletteView, IGAlbumHuePickerView, UIColor, NSString;

@interface IGAlbumDrawingOptionsView : UIView <IGAlbumColorPaletteDelegate, IGAlbumBrushWidthPickerDelegate, IGAlbumHuePickerDelegate> {

	IGAlbumBrushWidthPickerView* _brushWidthPicker;
	IGAlbumColorPaletteView* _colorPalate;
	IGAlbumHuePickerView* _huePicker;
	id<IGAlbumDrawingOptionsViewDelegate> _delegate;
	float _currentWidth;
	UIColor* _currentColor;
	IGRange _brushWidthRange;

}

@property (assign,nonatomic,__weak) id<IGAlbumDrawingOptionsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float currentWidth;                                                 //@synthesize currentWidth=_currentWidth - In the implementation block
@property (nonatomic,retain) UIColor * currentColor;                                             //@synthesize currentColor=_currentColor - In the implementation block
@property (assign,nonatomic) IGRange brushWidthRange;                                            //@synthesize brushWidthRange=_brushWidthRange - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)brushWidthPicker:(id)arg1 didPickBrushWidth:(float)arg2 ;
-(void)brushWidthPickerWillBeginPickingBrushWidth:(id)arg1 ;
-(void)setBrushWidthRange:(IGRange)arg1 ;
-(IGRange)brushWidthRange;
-(void)colorPalette:(id)arg1 didSelectColor:(id)arg2 ;
-(void)colorPalette:(id)arg1 didLongPressOnColor:(id)arg2 withGestureRecognizer:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 brushWidthRange:(IGRange)arg2 colorPalettes:(id)arg3 ;
-(void)setCurrentWidth:(float)arg1 ;
-(void)hideBrushWidthOptions;
-(void)showHuePickerWithColorPalette:(id)arg1 gestureRecognizer:(id)arg2 ;
-(void)hideHuePicker;
-(float)currentWidth;
-(void)huePicker:(id)arg1 didUpdateWithColor:(id)arg2 ;
-(void)huePickerDidEndSelection:(id)arg1 ;
-(void)setDelegate:(id<IGAlbumDrawingOptionsViewDelegate>)arg1 ;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id<IGAlbumDrawingOptionsViewDelegate>)delegate;
-(UIColor *)currentColor;
-(void)setCurrentColor:(UIColor *)arg1 ;
@end


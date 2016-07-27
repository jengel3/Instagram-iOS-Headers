
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGAlbumColorPaletteDelegate.h>
#import <Instagram/IGAlbumBrushWidthPickerDelegate.h>

@protocol IGAlbumDrawingOptionsViewDelegate;
@class IGAlbumBrushWidthPickerView, IGAlbumColorPaletteView, UIColor, NSString;

@interface IGAlbumDrawingOptionsView : UIView <IGAlbumColorPaletteDelegate, IGAlbumBrushWidthPickerDelegate> {

	IGAlbumBrushWidthPickerView* _brushWidthPicker;
	IGAlbumColorPaletteView* _colorPalate;
	id<IGAlbumDrawingOptionsViewDelegate> _delegate;
	float _currentWidth;
	UIColor* _currentColor;

}

@property (assign,nonatomic,__weak) id<IGAlbumDrawingOptionsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float currentWidth;                                                 //@synthesize currentWidth=_currentWidth - In the implementation block
@property (nonatomic,retain) UIColor * currentColor;                                             //@synthesize currentColor=_currentColor - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)brushWidthPickerWillBeginPickingBrushWidth:(id)arg1 ;
-(void)brushWidthPicker:(id)arg1 didPickBrushWidth:(float)arg2 ;
-(void)colorPalate:(id)arg1 didSelectColor:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 brushWidthRange:(IGRange)arg2 colors:(id)arg3 ;
-(void)setCurrentWidth:(float)arg1 ;
-(void)hideBrushWidthOptions;
-(float)currentWidth;
-(void)setDelegate:(id<IGAlbumDrawingOptionsViewDelegate>)arg1 ;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id<IGAlbumDrawingOptionsViewDelegate>)delegate;
-(UIColor *)currentColor;
-(void)setCurrentColor:(UIColor *)arg1 ;
@end


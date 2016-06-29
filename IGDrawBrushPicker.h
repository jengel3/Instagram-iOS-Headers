
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol IGDrawBrushPickerDelegate;
@class IGDrawBrushPickerDot, UIPanGestureRecognizer, UIImage, UIColor, NSString;

@interface IGDrawBrushPicker : UIView <UIGestureRecognizerDelegate> {

	IGDrawBrushPickerDot* _picker;
	UIPanGestureRecognizer* _panGestureRecognizer;
	CGContextRef _colorsContext;
	UIImage* _colorBarImage;
	id<IGDrawBrushPickerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<IGDrawBrushPickerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIColor * brushColor; 
@property (assign,nonatomic) float brushWidth; 
@property (nonatomic,readonly) UIPanGestureRecognizer * panGestureRecognizer;              //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateBrushForLocation:(CGPoint)arg1 ;
-(CGPoint)_brushLayerPositionForLocation:(CGPoint)arg1 ;
-(id)_brushColorForLocation:(CGPoint)arg1 ;
-(void)setBrushColor:(UIColor *)arg1 ;
-(float)_brushWidthForLocation:(CGPoint)arg1 ;
-(void)setBrushWidth:(float)arg1 ;
-(UIColor *)brushColor;
-(float)brushWidth;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGDrawBrushPickerDelegate>)arg1 ;
-(void)dealloc;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)didMoveToWindow;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGDrawBrushPickerDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(void)_handlePanGesture:(id)arg1 ;
@end


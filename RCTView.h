
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface RCTView : UIView {

	UIColor* _backgroundColor;
	char _removeClippedSubviews;
	int _reactZIndex;
	/*^block*/id _onAccessibilityTap;
	/*^block*/id _onMagicTap;
	int _pointerEvents;
	float _borderRadius;
	float _borderTopLeftRadius;
	float _borderTopRightRadius;
	float _borderBottomLeftRadius;
	float _borderBottomRightRadius;
	CGColorRef _borderTopColor;
	CGColorRef _borderRightColor;
	CGColorRef _borderBottomColor;
	CGColorRef _borderLeftColor;
	CGColorRef _borderColor;
	float _borderTopWidth;
	float _borderRightWidth;
	float _borderBottomWidth;
	float _borderLeftWidth;
	float _borderWidth;
	int _borderStyle;
	UIEdgeInsets _hitTestEdgeInsets;

}

@property (nonatomic,copy) id onAccessibilityTap;                         //@synthesize onAccessibilityTap=_onAccessibilityTap - In the implementation block
@property (nonatomic,copy) id onMagicTap;                                 //@synthesize onMagicTap=_onMagicTap - In the implementation block
@property (assign,nonatomic) int pointerEvents;                           //@synthesize pointerEvents=_pointerEvents - In the implementation block
@property (assign,nonatomic) int reactZIndex;                             //@synthesize reactZIndex=_reactZIndex - In the implementation block
@property (assign,nonatomic) char removeClippedSubviews;                  //@synthesize removeClippedSubviews=_removeClippedSubviews - In the implementation block
@property (assign,nonatomic) float borderRadius;                          //@synthesize borderRadius=_borderRadius - In the implementation block
@property (assign,nonatomic) float borderTopLeftRadius;                   //@synthesize borderTopLeftRadius=_borderTopLeftRadius - In the implementation block
@property (assign,nonatomic) float borderTopRightRadius;                  //@synthesize borderTopRightRadius=_borderTopRightRadius - In the implementation block
@property (assign,nonatomic) float borderBottomLeftRadius;                //@synthesize borderBottomLeftRadius=_borderBottomLeftRadius - In the implementation block
@property (assign,nonatomic) float borderBottomRightRadius;               //@synthesize borderBottomRightRadius=_borderBottomRightRadius - In the implementation block
@property (assign,nonatomic) CGColorRef borderTopColor;                   //@synthesize borderTopColor=_borderTopColor - In the implementation block
@property (assign,nonatomic) CGColorRef borderRightColor;                 //@synthesize borderRightColor=_borderRightColor - In the implementation block
@property (assign,nonatomic) CGColorRef borderBottomColor;                //@synthesize borderBottomColor=_borderBottomColor - In the implementation block
@property (assign,nonatomic) CGColorRef borderLeftColor;                  //@synthesize borderLeftColor=_borderLeftColor - In the implementation block
@property (assign,nonatomic) CGColorRef borderColor;                      //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) float borderTopWidth;                        //@synthesize borderTopWidth=_borderTopWidth - In the implementation block
@property (assign,nonatomic) float borderRightWidth;                      //@synthesize borderRightWidth=_borderRightWidth - In the implementation block
@property (assign,nonatomic) float borderBottomWidth;                     //@synthesize borderBottomWidth=_borderBottomWidth - In the implementation block
@property (assign,nonatomic) float borderLeftWidth;                       //@synthesize borderLeftWidth=_borderLeftWidth - In the implementation block
@property (assign,nonatomic) float borderWidth;                           //@synthesize borderWidth=_borderWidth - In the implementation block
@property (assign,nonatomic) int borderStyle;                             //@synthesize borderStyle=_borderStyle - In the implementation block
@property (assign,nonatomic) UIEdgeInsets hitTestEdgeInsets;              //@synthesize hitTestEdgeInsets=_hitTestEdgeInsets - In the implementation block
+(void)autoAdjustInsetsForView:(id)arg1 withScrollView:(id)arg2 updateOffset:(char)arg3 ;
+(UIEdgeInsets)contentInsetsForView:(id)arg1 ;
-(void)reactSetFrame:(CGRect)arg1 ;
-(void)reactSetInheritedBackgroundColor:(id)arg1 ;
-(void)didUpdateReactSubviews;
-(void)updateClippedSubviews;
-(void)react_updateClippedSubviewsWithClipRect:(CGRect)arg1 relativeToView:(id)arg2 ;
-(void)react_remountAllSubviews;
-(UIEdgeInsets)bordersAsInsets;
-(SCD_Struct_RC130*)borderColors;
-(void)updateClippingForLayer:(id)arg1 ;
-(int)reactZIndex;
-(void)setReactZIndex:(int)arg1 ;
-(id)onAccessibilityTap;
-(void)setOnAccessibilityTap:(id)arg1 ;
-(id)onMagicTap;
-(void)setOnMagicTap:(id)arg1 ;
-(void)setPointerEvents:(int)arg1 ;
-(int)pointerEvents;
-(void)setRemoveClippedSubviews:(char)arg1 ;
-(char)removeClippedSubviews;
-(void)setBorderRadius:(float)arg1 ;
-(void)setBorderTopLeftRadius:(float)arg1 ;
-(float)borderTopLeftRadius;
-(void)setBorderTopRightRadius:(float)arg1 ;
-(float)borderTopRightRadius;
-(void)setBorderBottomLeftRadius:(float)arg1 ;
-(float)borderBottomLeftRadius;
-(void)setBorderBottomRightRadius:(float)arg1 ;
-(float)borderBottomRightRadius;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)backgroundColor;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id)description;
-(id)accessibilityLabel;
-(void)setBorderWidth:(float)arg1 ;
-(void)setBorderColor:(CGColorRef)arg1 ;
-(void)displayLayer:(id)arg1 ;
-(void)setBorderStyle:(int)arg1 ;
-(CGColorRef)borderColor;
-(float)borderWidth;
-(char)accessibilityPerformMagicTap;
-(char)accessibilityActivate;
-(int)borderStyle;
-(float)borderRadius;
-(UIEdgeInsets)cornerRadii;
-(UIEdgeInsets)hitTestEdgeInsets;
-(void)setHitTestEdgeInsets:(UIEdgeInsets)arg1 ;
-(CGColorRef)borderTopColor;
-(void)setBorderTopColor:(CGColorRef)arg1 ;
-(CGColorRef)borderRightColor;
-(void)setBorderRightColor:(CGColorRef)arg1 ;
-(CGColorRef)borderBottomColor;
-(void)setBorderBottomColor:(CGColorRef)arg1 ;
-(CGColorRef)borderLeftColor;
-(void)setBorderLeftColor:(CGColorRef)arg1 ;
-(float)borderTopWidth;
-(void)setBorderTopWidth:(float)arg1 ;
-(float)borderRightWidth;
-(void)setBorderRightWidth:(float)arg1 ;
-(float)borderBottomWidth;
-(void)setBorderBottomWidth:(float)arg1 ;
-(float)borderLeftWidth;
-(void)setBorderLeftWidth:(float)arg1 ;
@end


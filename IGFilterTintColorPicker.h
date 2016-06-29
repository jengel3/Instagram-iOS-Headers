
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIControl.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol IGFilterTintColorPickerDelegate;
@class NSMutableArray, NSString;

@interface IGFilterTintColorPicker : UIControl <UIGestureRecognizerDelegate> {

	id<IGFilterTintColorPickerDelegate> _delegate;
	unsigned _currentTintType;
	unsigned _currentColorIndex;
	NSMutableArray* _boundingBoxes;
	NSMutableArray* _accessibilityItems;

}

@property (nonatomic,retain) NSMutableArray * boundingBoxes;                                   //@synthesize boundingBoxes=_boundingBoxes - In the implementation block
@property (nonatomic,retain) NSMutableArray * accessibilityItems;                              //@synthesize accessibilityItems=_accessibilityItems - In the implementation block
@property (assign,nonatomic,__weak) id<IGFilterTintColorPickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned currentTintType;                                         //@synthesize currentTintType=_currentTintType - In the implementation block
@property (assign,nonatomic) unsigned currentColorIndex;                                       //@synthesize currentColorIndex=_currentColorIndex - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)paddedPickerWidth;
-(NSMutableArray *)accessibilityItems;
-(unsigned)closestColorIndex:(CGPoint)arg1 ;
-(void)setBoundingBoxes:(NSMutableArray *)arg1 ;
-(void)setAccessibilityItems:(NSMutableArray *)arg1 ;
-(unsigned)currentColorIndex;
-(void)setCurrentColorIndex:(unsigned)arg1 ;
-(unsigned)currentTintColor;
-(unsigned)currentTintType;
-(char)isAnyColorSelected;
-(void)setCurrentTintType:(unsigned)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id<IGFilterTintColorPickerDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGFilterTintColorPickerDelegate>)delegate;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(int)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(int)arg1 ;
-(int)indexOfAccessibilityElement:(id)arg1 ;
-(id)accessibilityElements;
-(void)handleTapFrom:(id)arg1 ;
-(NSMutableArray *)boundingBoxes;
@end


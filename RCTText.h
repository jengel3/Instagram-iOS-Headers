
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class NSTextStorage, NSMutableArray, CAShapeLayer;

@interface RCTText : UIView {

	NSTextStorage* _textStorage;
	NSMutableArray* _reactSubviews;
	CAShapeLayer* _highlightLayer;
	UIEdgeInsets _contentInset;

}

@property (assign,nonatomic) UIEdgeInsets contentInset;                //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,retain) NSTextStorage * textStorage;              //@synthesize textStorage=_textStorage - In the implementation block
-(id)reactTagAtPoint:(CGPoint)arg1 ;
-(void)reactSetFrame:(CGRect)arg1 ;
-(void)reactSetInheritedBackgroundColor:(id)arg1 ;
-(void)insertReactSubview:(id)arg1 atIndex:(int)arg2 ;
-(void)removeReactSubview:(id)arg1 ;
-(id)reactSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(id)description;
-(UIEdgeInsets)contentInset;
-(id)accessibilityLabel;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(NSTextStorage *)textStorage;
-(void)setTextStorage:(NSTextStorage *)arg1 ;
@end


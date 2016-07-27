
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class NSTextStorage, CAShapeLayer;

@interface RCTText : UIView {

	NSTextStorage* _textStorage;
	CAShapeLayer* _highlightLayer;
	UIEdgeInsets _contentInset;

}

@property (assign,nonatomic) UIEdgeInsets contentInset;                //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,retain) NSTextStorage * textStorage;              //@synthesize textStorage=_textStorage - In the implementation block
-(void)reactSetFrame:(CGRect)arg1 ;
-(void)reactSetInheritedBackgroundColor:(id)arg1 ;
-(id)reactTagAtPoint:(CGPoint)arg1 ;
-(void)didUpdateReactSubviews;
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



#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGCoreTextLinkHandler;
@class UIColor, IGStyledString;

@interface IGCoreTextView : UIView {

	UIColor* _shadowColor;
	float _shadowOffset;
	char _heightIsValid;
	CGPoint _touchPoint;
	char _longTapHandled;
	long _closestTappedStringIndex;
	int _lastEndedEventSeqNumber;
	char _usePaddedTapDetection;
	IGStyledString* _styledString;
	id<IGCoreTextLinkHandler> _linkHandler;

}

@property (nonatomic,retain) IGStyledString * styledString;                      //@synthesize styledString=_styledString - In the implementation block
@property (assign,nonatomic) id<IGCoreTextLinkHandler> linkHandler;              //@synthesize linkHandler=_linkHandler - In the implementation block
@property (assign,nonatomic) char usePaddedTapDetection;                         //@synthesize usePaddedTapDetection=_usePaddedTapDetection - In the implementation block
-(void)setLinkHandler:(id<IGCoreTextLinkHandler>)arg1 ;
-(id)initWithWidth:(float)arg1 ;
-(void)setStyledString:(IGStyledString *)arg1 ;
-(IGStyledString *)styledString;
-(void)setUsePaddedTapDetection:(char)arg1 ;
-(void)updateWidth:(float)arg1 ;
-(id)urlAtPoint:(CGPoint)arg1 ;
-(char)usePaddedTapDetection;
-(char)handleTapAtPoint:(CGPoint)arg1 forTouchEvent:(unsigned)arg2 ;
-(char)handlePaddedTapAtPoint:(CGPoint)arg1 forTouchEvent:(unsigned)arg2 fromLongTap:(char)arg3 ;
-(void)handleLongTap;
-(char)handleTapAtPoint:(CGPoint)arg1 forTouchEvent:(unsigned)arg2 fromLongTap:(char)arg3 ;
-(char)handleTapAtIndex:(int)arg1 forTouchEvent:(unsigned)arg2 fromLongTap:(char)arg3 ;
-(long)findClosestIndexForURLForAttributedString:(id)arg1 nearPoint:(CGPoint)arg2 constrainedSize:(CGSize)arg3 ;
-(long)tapIndexForTapAtPoint:(CGPoint)arg1 size:(CGSize)arg2 inString:(id)arg3 ;
-(CGPoint)lineOrigin:(CGPoint)arg1 FromRelativeToPath:(CGPathRef)arg2 toRelativeToContext:(CGContextRef)arg3 ;
-(char)handleTapAtIndex:(int)arg1 forTouchEvent:(unsigned)arg2 ;
-(id<IGCoreTextLinkHandler>)linkHandler;
-(void)drawRect:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(float)height;
@end


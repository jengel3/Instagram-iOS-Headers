
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDrawPathBuilderDelegate.h>

@protocol IGDrawStyleRenderer;
@class UIView, NSString;

@interface IGDrawRenderController : NSObject <IGDrawPathBuilderDelegate> {

	CGSize _displaySize;
	float _renderScale;
	id<IGDrawStyleRenderer> _currentRenderer;
	unsigned char _currentStyle;
	UIView* _renderView;

}

@property (assign,nonatomic) unsigned char currentStyle;                             //@synthesize currentStyle=_currentStyle - In the implementation block
@property (nonatomic,readonly) id<IGDrawStyleRenderer> currentRenderer;              //@synthesize currentRenderer=_currentRenderer - In the implementation block
@property (nonatomic,readonly) UIView * renderView;                                  //@synthesize renderView=_renderView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)drawPathBuilderDidStartStroke:(id)arg1 ;
-(CGPoint)drawPathBuilder:(id)arg1 locationOfPoint:(CGPoint)arg2 ;
-(void)drawPathBuilder:(id)arg1 didAddStrokePath:(id)arg2 ;
-(void)drawPathBuilderDidFinishStroke:(id)arg1 ;
-(void)_resetCurrentRenderer;
-(id)initWithDisplaySize:(CGSize)arg1 renderScale:(float)arg2 initialStyle:(unsigned char)arg3 ;
-(id<IGDrawStyleRenderer>)currentRenderer;
-(unsigned char)currentStyle;
-(void)setCurrentStyle:(unsigned char)arg1 ;
-(UIView *)renderView;
@end


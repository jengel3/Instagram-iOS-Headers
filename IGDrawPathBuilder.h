

@protocol IGDrawPathBuilderDelegate;
#import <Instagram/Instagram-Structs.h>
@interface IGDrawPathBuilder : NSObject {

	CGPoint _currentPoint;
	CGPoint _lastPoint;
	CGPoint _lastLastPoint;
	id<IGDrawPathBuilderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<IGDrawPathBuilderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)continueStrokeWithPoint:(CGPoint)arg1 ;
-(void)startStrokeAtPoint:(CGPoint)arg1 ;
-(void)endStrokeAtPoint:(CGPoint)arg1 ;
-(void)setDelegate:(id<IGDrawPathBuilderDelegate>)arg1 ;
-(id<IGDrawPathBuilderDelegate>)delegate;
@end


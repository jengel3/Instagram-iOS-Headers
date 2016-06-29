
@class NSNumber;


@protocol RCTComponent <NSObject>
@property (nonatomic,copy) NSNumber * reactTag; 
@optional
-(void)didSetProps:(id)arg1;
-(void)reactBridgeDidFinishTransaction;

@required
-(NSNumber *)reactTag;
-(void)setReactTag:(id)arg1;
-(id)reactTagAtPoint:(CGPoint)arg1;
-(void)insertReactSubview:(id)arg1 atIndex:(int)arg2;
-(void)removeReactSubview:(id)arg1;
-(id)reactSubviews;
-(id)reactSuperview;
-(char)isReactRootView;

@end

